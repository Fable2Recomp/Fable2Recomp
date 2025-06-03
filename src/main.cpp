#include <stdafx.h>
#include <filesystem>
#include <system_error>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>

#include <cpu/guest_thread.h>
#include <gpu/video.h>
#include <gpu/video_vulkan.h>
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
#include <chrono>
#include <ppc/ppc_context.h>
#include <kernel/imports.h>
#include <kernel/kernel_constants.h>

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

void TraceVTableCall(PPCContext& ctx);

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

constexpr uint32_t kCallbackArrayStart = 0x832D0000;
constexpr uint32_t kCallbackArrayEnd   = 0x832D000C;

void WriteCallbackArray() {
    auto* table = reinterpret_cast<uint32_t*>(g_memory.Translate(0x832D0000));
    table[0] = 0x82000000;           // Valid dummy callback
    table[1] = 0;                    // NULL, will be skipped
    table[2] = 0;                    // NULL, will be skipped

    spdlog::info("🧩 Callback array entries:");
    for (int i = 0; i < 3; ++i) {
        spdlog::info("  → [{:02}] = 0x{:08X}", i, table[i]);
    }
}

void DummyCallback(uint32_t context) {
    spdlog::info("🧪 DummyCallback invoked with context = 0x{:08X}", context);
}

// Place in a .cpp or initialization segment
void WriteDummyCallbackStub()
{
    constexpr uint32_t guestCodeAddr = 0x82000000;
    uint8_t* stub = static_cast<uint8_t*>(g_memory.Translate(guestCodeAddr));

    const uint32_t stubWords[] = {
        0x7C0802A6, // mflr r0
        0x90010014, // stw r0, 0x14(r1)
        0x9421FFE0, // stwu r1, -0x20(r1)
        0x38600000, // li r3, 0
        0x80010014, // lwz r0, 0x14(r1)
        0x7C0803A6, // mtlr r0
        0x38210020, // addi r1, r1, 0x20
        0x4E800020, // blr
    };

    std::memcpy(stub, stubWords, sizeof(stubWords));
    spdlog::info("🧩 Guest DummyCallback stub written at 0x{:08X}", guestCodeAddr);
}

void InitCoreStructures()
{

    // Write the guest code stub first
    WriteDummyCallbackStub();
    WriteCallbackArray();

    // Translate virtual addresses to pointers
    auto* criticalSection    = reinterpret_cast<uint32_t*>(g_memory.Translate(kCriticalSectionAddr));
    auto* callbackNode       = reinterpret_cast<uint32_t*>(g_memory.Translate(kCallbackNodeAddr));
    auto* callbackListHead   = reinterpret_cast<uint32_t*>(g_memory.Translate(kCallbackListHeadAddr));

    // Set the global callback list head pointer (NOT the node)
    *reinterpret_cast<uint32_t*>(g_memory.Translate(0x832EFEBC)) = kCallbackListHeadAddr;

    // === Critical Section Initialization ===
    memset(criticalSection, 0, 0x20);
    criticalSection[0] = 0; // LockCount
    criticalSection[1] = 0; // RecursionCount
    criticalSection[2] = 0; // OwningThread

    // === Callback Node Setup ===
    memset(callbackNode, 0, 0x20);
    callbackNode[0] = ByteSwap(kCallbackNodeAddr); // Flink → self
    callbackNode[1] = ByteSwap(kCallbackNodeAddr); // Blink → self
    callbackNode[2] = ByteSwap(0x82000000); // Function pointer

    spdlog::info("🧩 CallbackNode: Flink={:#010x}, Blink={:#010x}, Callback={:#010x}",
        ByteSwap(callbackNode[0]), ByteSwap(callbackNode[1]), ByteSwap(callbackNode[2]));

    // === Callback List Head Setup ===
    callbackListHead[0] = ByteSwap(kCallbackNodeAddr); // Flink → callbackNode
    callbackListHead[1] = ByteSwap(kCallbackNodeAddr); // Blink → callbackNode

    // Logging
    spdlog::info("✅ Initialized critical section at {:#010x}", kCriticalSectionAddr);
    spdlog::info("✅ Created callback node at {:#010x}", kCallbackNodeAddr);
    spdlog::info("✅ Set callback list head to {:#010x}", kCallbackListHeadAddr);
}

//===================================================================================================

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

//    GameWindow::Init(sdlVideoDriver);

    HostStartup();
    KiSystemStartup();

    if (!PersistentStorageManager::LoadBinary()) {
        LOG_ERROR("Failed to load persistent storage.");
    }

    uint32_t entry = LoadXexModule(xexPath);
    LOG_INFO(fmt::format("Loaded XEX module: entry point 0x{:X}", entry));

//    if (!Video::CreateHostDevice(sdlVideoDriver, false)) {
//        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), "Graphics initialization failed", GameWindow::s_pWindow);
//        return 1;
//    }

//    Video::StartPipelinePrecompilation();

    // Main SDL event loop
    std::atomic<bool> running = true;

    // 🖼️ Launch render thread
//    std::thread renderThread([&]() {
//        auto lastFrame = std::chrono::high_resolution_clock::now();
//        while (running.load()) {
//            SDL_Event e;
//            while (SDL_PollEvent(&e)) {
//                if (e.type == SDL_EVENT_QUIT)
//                    running.store(false);
//            }

            //VideoVulkan::BeginFrame();
            //VideoVulkan::EndFrame();

//            auto frameEnd = std::chrono::high_resolution_clock::now();
//            auto frameDuration = std::chrono::duration_cast<std::chrono::milliseconds>(frameEnd - lastFrame).count();
//            lastFrame = frameEnd;

//            constexpr int targetMs = 16;  // ~60FPS
//            if (frameDuration < targetMs)
//                SDL_Delay(targetMs - frameDuration);
//        }
//    });

    // 🚀 Launch guest thread (blocking)

    DummyCallback(0);
    InitCoreStructures();
    GuestThread::Start({ entry, 0, 0 });

    running.store(false);
//    renderThread.join();

    return 0;
}

void Fable2MainLoop(PPCContext& ctx) {
    spdlog::info("🎮 Hook_sub_822EA928: Game main thread has started.");

    while (true) {
        // handle SDL events or break condition here

        VideoVulkan::BeginFrame();
        // optional: draw something
        VideoVulkan::EndFrame();

        SDL_Delay(16);
    }

    ctx.r3.u32 = 0; // optional return value
}

//GUEST_FUNCTION_HOOK(sub_822EA928, Fable2MainLoop);

void Hook_sub_82CC16C0(PPCContext& ctx, uint8_t* mem) {
    spdlog::info("🔁 Entered sub_82CC16C0 - Guest callback processor");

    // Translate guest pointer for list head (pointer to Flink)
    uint32_t listHeadAddr = ByteSwap(*reinterpret_cast<uint32_t*>(g_memory.Translate(kCallbackListHeadAddr)));
    uint32_t current = listHeadAddr;

    if (!g_memory.IsValidVirtualAddress(current)) {
        spdlog::warn("❌ Invalid list head: 0x{:08X}", current);
        return;
    }

    const uint32_t flinkOffset = 0x0;
    const uint32_t functionOffset = 0x8;

    uint32_t node = ByteSwap(*reinterpret_cast<uint32_t*>(g_memory.Translate(current + flinkOffset)));

    while (node != listHeadAddr) {
        uint32_t funcAddr = ByteSwap(*reinterpret_cast<uint32_t*>(g_memory.Translate(node + functionOffset)));

        spdlog::info("🔔 Calling guest callback at 0x{:08X}", funcAddr);

        if (g_memory.IsValidVirtualAddress(funcAddr)) {
            auto callback = g_memory.FindFunction(funcAddr);
            if (callback) {
                PPCContext guestCtx{};
                guestCtx.r3.u32 = 0; // Dummy argument
                callback(guestCtx, mem);
            } else {
                spdlog::warn("⚠️ No hook for callback function at 0x{:08X}", funcAddr);
            }
        } else {
            spdlog::warn("❌ Invalid callback function address: 0x{:08X}", funcAddr);
        }

        node = ByteSwap(*reinterpret_cast<uint32_t*>(g_memory.Translate(node + flinkOffset)));
    }
}

GUEST_FUNCTION_HOOK(sub_82CC16C0, Hook_sub_82CC16C0);

void Hook_sub_82CC1A70(PPCContext& ctx, uint8_t*) {
    constexpr uint32_t kStart = 0x820AAC50;
    constexpr uint32_t kEnd   = 0x820AAE24;

    const uint32_t old_sp = ctx.r1.u32;
    const uint64_t saved_r3 = ctx.r3.u64;
    const uint64_t saved_r4 = ctx.r4.u64;

    // Allocate stack frame and save r3/r4
    ctx.r1.u32 -= 0x70;

    auto* r3_ptr = g_memory.Translate(ctx.r1.u32 + 0x50);
    auto* r4_ptr = g_memory.Translate(ctx.r1.u32 + 0x60);

    if (!r3_ptr || !r4_ptr) {
        spdlog::error("❌ Failed to allocate stack frame at 0x{:08X}", ctx.r1.u32);
        ctx.r1.u32 = old_sp;
        return;
    }

    *reinterpret_cast<uint64_t*>(r3_ptr) = saved_r3;
    *reinterpret_cast<uint64_t*>(r4_ptr) = saved_r4;

    // Set up end/start
    ctx.r3.u32 = kEnd;
    ctx.r4.u32 = kStart;

    while (ctx.r4.u32 < ctx.r3.u32) {
        const uint32_t addr = ctx.r4.u32;
        const void* ptr = g_memory.Translate(addr);
        if (!ptr) {
            spdlog::error("❌ Invalid memory read at 0x{:08X}", addr);
            break;
        }

        ctx.r5.u32 = ByteSwap(*reinterpret_cast<const uint32_t*>(ptr));

        if (ctx.r5.u32 != 0) {
            spdlog::info("🧩 Executing inline callback at 0x{:08X}", ctx.r5.u32);

            if (ctx.r5.u32 >= 0x82000000 && ctx.r5.u32 <= 0x83000000) {
                if (auto* fn = g_memory.FindFunction(ctx.r5.u32)) {
                    fn(ctx, g_memory.base);
                } else {
                    spdlog::warn("⚠️  No function hook found for address 0x{:08X}", ctx.r5.u32);
                }
            } else {
                spdlog::error("❌ Callback address 0x{:08X} is outside expected range", ctx.r5.u32);
                ctx.r3.u32 = 0;
                break;
            }

            break; // Only one entry executed
        }

        ctx.r4.u32 += 4;
    }

    // Restore registers
    ctx.r1.u32 = old_sp;
    ctx.r3.u64 = saved_r3;
    ctx.r4.u64 = saved_r4;
}

GUEST_FUNCTION_HOOK(sub_82CC1A70, Hook_sub_82CC1A70);

void Hook_sub_82CC1990(PPCContext& ctx, uint8_t*) {
    spdlog::info("🔁 Entered Hook_sub_82CC1990");

    constexpr uint32_t init_func_ptr_addr = 0x82010CB8;
    const void* init_ptr = g_memory.Translate(init_func_ptr_addr);
    if (!init_ptr) {
        spdlog::error("❌ Failed to translate init_func_ptr_addr = 0x{:08X}", init_func_ptr_addr);
        return;
    }

    const uint32_t init_func = ByteSwap(*reinterpret_cast<const uint32_t*>(init_ptr));
    if (init_func >= 0x82000000 && init_func <= 0x83000000) {
        if (auto* fn = g_memory.FindFunction(init_func)) {
            spdlog::info("🔧 Calling init func at 0x{:08X}", init_func);
            fn(ctx, g_memory.base);
        } else {
            spdlog::warn("⚠️ No hook for init func at 0x{:08X}", init_func);
        }
    }

    // First callback table: 0x832D5DCC → 0x832D5DDC
    const uint32_t start1 = 0x832D5DCC;
    const uint32_t end1   = 0x832D5DDC;

    for (uint32_t addr = start1; addr < end1; addr += 4) {
        const void* ptr = g_memory.Translate(addr);
        if (!ptr) {
            spdlog::error("❌ Failed to translate callback table address 0x{:08X}", addr);
            continue;
        }

        const uint32_t fnptr = ByteSwap(*reinterpret_cast<const uint32_t*>(ptr));
        if (fnptr >= 0x82000000 && fnptr <= 0x83000000) {
            spdlog::info("🔗 Executing callback 1 @ 0x{:08X}", fnptr);
            if (auto* fn = g_memory.FindFunction(fnptr)) {
                fn(ctx, g_memory.base);
            } else {
                spdlog::warn("⚠️ No hook for callback 1 @ 0x{:08X}", fnptr);
            }
        }
    }

    // Second callback table: 0x832D0010 → 0x832D5DC8
    uint32_t start2 = 0x832D0000;
    uint32_t end2   = 0x832D000C;

    for (uint32_t addr = start2; addr < end2; addr += 4) {
        const void* ptr = g_memory.Translate(addr);
        if (!ptr) {
            spdlog::error("❌ Failed to translate callback table address 0x{:08X}", addr);
            continue;
        }

        const uint32_t fnptr = ByteSwap(*reinterpret_cast<const uint32_t*>(ptr));
        if (fnptr != 0 && fnptr != 0xFFFFFFFF && fnptr >= 0x82000000 && fnptr <= 0x83000000) {
            spdlog::info("🔗 Executing callback 2 @ 0x{:08X}", fnptr);
            if (auto* fn = g_memory.FindFunction(fnptr)) {
                fn(ctx, g_memory.base);
            } else {
                spdlog::warn("⚠️ No hook for callback 2 @ 0x{:08X}", fnptr);
            }
        }
    }

    ctx.r3.u32 = 0;
}

GUEST_FUNCTION_HOOK(sub_82CC1990, Hook_sub_82CC1990);

// === Stub imports ===
GUEST_FUNCTION_STUB(__imp__vsprintf);
GUEST_FUNCTION_STUB(__imp___vsnprintf);
GUEST_FUNCTION_STUB(__imp__sprintf);
GUEST_FUNCTION_STUB(__imp___snprintf);
GUEST_FUNCTION_STUB(__imp___snwprintf);
GUEST_FUNCTION_STUB(__imp__vswprintf);
GUEST_FUNCTION_STUB(__imp___vscwprintf);
GUEST_FUNCTION_STUB(__imp__swprintf);

