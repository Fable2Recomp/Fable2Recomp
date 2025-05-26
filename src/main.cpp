#include <stdafx.h>
#include <filesystem>
#include <system_error>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>

#include <cpu/guest_thread.h>
#include <gpu/video.h>
#include <kernel/function.h>
#include <kernel/memory.h>
#include <kernel/heap.h>
#include <kernel/xam.h>
#include <kernel/io/file_system.h>
#include <kernel/xdbf.h>
#include <xenon/file.h>
#include <xenon/xex.h>
#include <apu/audio.h>
#include <hid/hid.h>
#include <user/paths.h>
#include <user/persistent_storage_manager.h>
#include <user/registry.h>
#include <kernel/xdbf.h>
#include <os/logger.h>
#include <os/process.h>
#include <ui/game_window.h>
#include <preload_executable.h>

#ifdef _WIN32
#include <Windows.h>
#include <timeapi.h>
#include <objbase.h>
#endif

// === Globals ===
const size_t XMAIOBegin = 0x7FEA0000;
const size_t XMAIOEnd = XMAIOBegin + 0x0000FFFF;

Memory g_memory;
Heap g_userHeap;
XDBFWrapper g_xdbfWrapper;
std::unordered_map<uint16_t, GuestTexture*> g_xdbfTextureCache;

// Forward declarations
bool EnsureSaveFileExists();
void RegisterSaveDataContent();

bool EnsureSaveFileExists()
{
    const auto saveFilePath = GetSaveFilePath(true);
    bool saveFileExists = std::filesystem::exists(saveFilePath);

    if (!saveFileExists)
    {
        std::error_code ec;
        std::filesystem::create_directories(saveFilePath.parent_path(), ec);
        if (!ec)
        {
            std::filesystem::copy_file(GetSaveFilePath(false), saveFilePath, ec);
            saveFileExists = !ec;
            if (ec)
            {
                spdlog::warn("Failed to copy base save file: {}", ec.message());
            }
        }
        else
        {
            spdlog::warn("Failed to create save directory: {}", ec.message());
        }
    }
    return saveFileExists;
}

void RegisterSaveDataContent()
{
    const auto saveFilePath = GetSaveFilePath(true);
    std::u8string savePathU8 = saveFilePath.parent_path().u8string();
    XamRegisterContent(XamMakeContent(XCONTENTTYPE_SAVEDATA, "SYS-DATA"), (const char*)(savePathU8.c_str()));
}

uint32_t LoadXexModule(const std::filesystem::path& path) {
    auto data = LoadFile(path);
    if (data.empty()) {
        LOG_ERROR("Failed to load .xex from {}", path.string());
        std::exit(1);
    }

    const auto* header = reinterpret_cast<const Xex2Header*>(data.data());
    const auto* security = reinterpret_cast<const Xex2SecurityInfo*>(data.data() + header->securityOffset);
    const auto* fileFormat = reinterpret_cast<const Xex2OptFileFormatInfo*>(
        getOptHeaderPtr(data.data(), XEX_HEADER_FILE_FORMAT_INFO));
    uint32_t entry = *reinterpret_cast<const uint32_t*>(getOptHeaderPtr(data.data(), XEX_HEADER_ENTRY_POINT));
    ByteSwapInplace(entry);

    uint32_t rawLoadAddress = static_cast<uint32_t>(security->loadAddress);
    uint8_t* dest = reinterpret_cast<uint8_t*>(g_memory.Translate(rawLoadAddress));
    if (!dest) {
        LOG_ERROR("Memory translation failed at address: 0x{:X}", rawLoadAddress);
        std::exit(1);
    }

    const uint8_t* src = data.data() + header->headerSize;

    if (fileFormat->compressionType == XEX_COMPRESSION_NONE) {
        std::memcpy(dest, src, security->imageSize);
    } else if (fileFormat->compressionType == XEX_COMPRESSION_BASIC) {
        const auto* blocks = reinterpret_cast<const Xex2FileBasicCompressionBlock*>(fileFormat + 1);
        size_t numBlocks = (fileFormat->infoSize / sizeof(Xex2FileBasicCompressionInfo)) - 1;

        for (size_t i = 0; i < numBlocks; ++i) {
            std::memcpy(dest, src, blocks[i].dataSize);
            dest += blocks[i].dataSize;
            src += blocks[i].dataSize;

            std::memset(dest, 0, blocks[i].zeroSize);
            dest += blocks[i].zeroSize;
        }
    } else {
        LOG_ERROR("Unknown compression type.");
        std::exit(1);
    }

    // === XDBFWrapper Integration ===
    const auto* res = reinterpret_cast<const Xex2ResourceInfo*>(
        getOptHeaderPtr(data.data(), XEX_HEADER_RESOURCE_INFO));
    if (res) {
        void* xdbfData = g_memory.Translate(res->offset.get());
        if (xdbfData) {
            g_xdbfWrapper = XDBFWrapper(static_cast<uint8_t*>(xdbfData), res->sizeOfData);
        } else {
            LOG_WARN("XDBF data pointer is null at offset 0x{:X}", res->offset.get());
        }
    } else {
        LOG_WARN("XEX_HEADER_RESOURCE_INFO not found in .xex.");
    }

    return entry;
}


// === Platform startup ===
void HostStartup() {
#ifdef _WIN32
    CoInitializeEx(nullptr, COINIT_MULTITHREADED);
#endif
    hid::Init();
}

void KiSystemStartup()
{
    if (g_memory.base == nullptr)
    {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), Localise("System_MemoryAllocationFailed").c_str(), GameWindow::s_pWindow);
        std::_Exit(1);
    }

    g_userHeap.Init();

    const auto gameContent = XamMakeContent(XCONTENTTYPE_RESERVED, "Game");
    XamRegisterContent(gameContent, GAME_INSTALL_DIRECTORY "/game");

    if (!EnsureSaveFileExists()) {
        spdlog::warn("Save file missing and could not be copied from base.");
    } else {
        RegisterSaveDataContent();
    }

    // Mount main game content
    if (XamContentCreateEx(0, "game", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr) != 0) {
        LOG_ERROR("Failed to mount game content.");
        std::_Exit(1);
    }
    if (XamContentCreateEx(0, "D", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr) != 0) {
        LOG_ERROR("Failed to mount game content to D:");
        std::_Exit(1);
    }

    // Initialize audio system
    XAudioInitializeSystem();
}

int main(int argc, char* argv[]) {
#ifdef _WIN32
    timeBeginPeriod(1);
#endif

    os::process::CheckConsole();
    os::logger::Init();

    PreloadContext preloadContext;
    preloadContext.PreloadExecutable();

    const char* sdlVideoDriver = nullptr;
    std::filesystem::path xexPath = "default.xex";

    // Parse args
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--sdl-video-driver") == 0 && i + 1 < argc) {
            sdlVideoDriver = argv[++i];
        } else if (argv[i][0] != '-' && std::filesystem::exists(argv[i])) {
            xexPath = argv[i];
        }
    }

    Config::Load();

    if (!g_memory.base) {
        LOG_ERROR("Memory allocation failed.");
        std::exit(1);
    }

    GameWindow::Init(sdlVideoDriver);

    HostStartup();
    KiSystemStartup();

    if (!PersistentStorageManager::LoadBinary()) {
        LOG_ERROR("Failed to load persistent storage.");
    }

    uint32_t entry = LoadXexModule(xexPath);
    LOG_INFO(fmt::format("Loaded XEX module: entry point 0x{:X}", entry));

    if (!Video::CreateHostDevice(sdlVideoDriver, false)) {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), "Graphics initialization failed", GameWindow::s_pWindow);
        return 1;
    }

    Video::StartPipelinePrecompilation();

    GuestThread::Start({ entry, 0, 0 });

    // Main SDL event loop
    while (true) {
        GameWindow::PollEvents();

        // Clear and present frame
        Video::ClearScreen();
        Video::Present();

        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT)
                return 0;
        }
    }

    return 0;
}

// === Stub imports ===
GUEST_FUNCTION_STUB(__imp__vsprintf);
GUEST_FUNCTION_STUB(__imp___vsnprintf);
GUEST_FUNCTION_STUB(__imp__sprintf);
GUEST_FUNCTION_STUB(__imp___snprintf);
GUEST_FUNCTION_STUB(__imp___snwprintf);
GUEST_FUNCTION_STUB(__imp__vswprintf);
GUEST_FUNCTION_STUB(__imp___vscwprintf);
GUEST_FUNCTION_STUB(__imp__swprintf);

