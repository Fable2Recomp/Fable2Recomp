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

constexpr uint32_t XEX_HEADER_SECTION_TABLE = 0x000003FF;
constexpr uint32_t SECTION_SIZE_MASK = 0x00FFFFFF;
constexpr uint32_t XEX_SECTION_NO_LOAD = 0x10000000;

// These reflect actual guest heap bounds defined in Heap::Init()
constexpr uint32_t kGuestHeapStart = HEAP_BASE;             // 0x20000000
constexpr uint32_t kGuestHeapEnd   = RESERVED_BEGIN;        // 0x7FEA0000

constexpr uint32_t kMinVirtualAddr = 0x1000;
constexpr uint32_t kMaxVirtualAddr = 0x90000000;

struct XexSectionTableEntry {
    uint32_t info;
    uint32_t virtualAddr;
    uint32_t rawAddr;
};

struct X_DATA_DIRECTORY {
    uint32_t beginAddress;
    uint32_t endAddress;
    uint32_t unwindInfoAddress;
};

uint32_t LoadXexModule(const std::filesystem::path& path, bool strictMode = true) {
    auto data = LoadFile(path);
    if (data.empty()) {
        LOG_ERROR("Failed to load .xex from {}", path.string());
        std::exit(1);
    }

    const auto* header = reinterpret_cast<const Xex2Header*>(data.data());
    const auto* security = reinterpret_cast<const Xex2SecurityInfo*>(data.data() + header->securityOffset);
    const auto* fileFormat = reinterpret_cast<const Xex2OptFileFormatInfo*>(
        getOptHeaderPtr(data.data(), XEX_HEADER_FILE_FORMAT_INFO));
    const auto* entryPtr = reinterpret_cast<const uint32_t*>(getOptHeaderPtr(data.data(), XEX_HEADER_ENTRY_POINT));

    uint32_t entry = entryPtr ? *entryPtr : 0;
    ByteSwapInplace(entry);
    spdlog::info("🚀 XEX entry point at 0x{:08X}", entry);

    std::vector<std::pair<uint32_t, uint32_t>> loadedRanges;
    bool usedSectionLoader = false;

    const uint8_t* sectionTableData = reinterpret_cast<const uint8_t*>(getOptHeaderPtr(data.data(), XEX_HEADER_SECTION_TABLE));
    if (sectionTableData) {
        uint32_t dwordCount = reinterpret_cast<const uint32_t*>(sectionTableData)[0];
        ByteSwapInplace(dwordCount);

        const size_t sectionCount = (dwordCount - 1) / 3;
        const auto* sections = reinterpret_cast<const XexSectionTableEntry*>(sectionTableData + 4);
        const size_t maxValid = (data.data() + data.size() - (sectionTableData + 4)) / sizeof(XexSectionTableEntry);

        if (sectionCount > maxValid || sectionCount > 512) {
            spdlog::warn("⚠️ Section table appears malformed: {} sections (max allowed {})", sectionCount, maxValid);
        } else {
            spdlog::info("📖 Parsing {} XEX sections", sectionCount);
            for (size_t i = 0; i < sectionCount; ++i) {
                const auto& s = sections[i];
                const uint32_t flags = s.info & 0xF0000000;
                const uint32_t size  = s.info & SECTION_SIZE_MASK;
                const uint32_t vaddr = s.virtualAddr;
                const uint32_t raw   = s.rawAddr;

                if (size == 0 || vaddr < kMinVirtualAddr || vaddr >= kMaxVirtualAddr) {
                    spdlog::warn("⚠️ Skipping suspicious section {}: vaddr=0x{:08X}, size=0x{:X}", i, vaddr, size);
                    continue;
                }

                if (!(flags & XEX_SECTION_NO_LOAD) && (raw + size > data.size())) {
                    spdlog::error("❌ Section {} points outside file bounds: raw=0x{:08X}, size=0x{:X}", i, raw, size);
                    continue;
                }

                if (vaddr >= kGuestHeapStart && vaddr < kGuestHeapEnd) {
                    spdlog::warn("⚠️ Section {} overlaps guest heap: vaddr=0x{:08X}, size=0x{:X}", i, vaddr, size);
                }

                uint8_t* dest = reinterpret_cast<uint8_t*>(g_memory.Translate(vaddr));
                if (!dest) {
                    spdlog::error("❌ Failed to translate section {} vaddr=0x{:08X}", i, vaddr);
                    continue;
                }

                if (flags & XEX_SECTION_NO_LOAD || raw == 0) {
                    std::memset(dest, 0, size);
                    spdlog::info("🧼 Zeroed .bss section {} at 0x{:08X} ({} bytes)", i, vaddr, size);
                } else {
                    std::memcpy(dest, data.data() + raw, size);
                    spdlog::info("📦 Copied section {} to 0x{:08X} ({} bytes)", i, vaddr, size);
                }

                loadedRanges.emplace_back(vaddr, vaddr + size);
            }

            usedSectionLoader = true;
        }
    }

    // Fallback if no section table or entry not covered
    bool entryCovered = std::any_of(loadedRanges.begin(), loadedRanges.end(), [&](const auto& range) {
        return entry >= range.first && entry < range.second;
    });

    if (!usedSectionLoader || !entryCovered) {
        spdlog::warn("⚠️ Falling back to legacy flat loader");
        uint32_t rawLoadAddress = static_cast<uint32_t>(security->loadAddress);
        uint8_t* dest = reinterpret_cast<uint8_t*>(g_memory.Translate(rawLoadAddress));
        if (!dest) {
            LOG_ERROR("❌ Memory translation failed at loadAddress: 0x{:08X}", rawLoadAddress);
            std::exit(1);
        }

        const uint8_t* src = data.data() + header->headerSize;

        if (fileFormat->compressionType == XEX_COMPRESSION_NONE) {
            std::memcpy(dest, src, security->imageSize);
            spdlog::info("📦 Flat copy to 0x{:08X} ({} bytes)", rawLoadAddress, static_cast<uint32_t>(security->imageSize));
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

            spdlog::info("📦 Decompressed {} basic blocks to 0x{:08X}", numBlocks, rawLoadAddress);
        } else {
            LOG_ERROR("❌ Unknown compression type: {}", static_cast<uint32_t>(fileFormat->compressionType));
            std::exit(1);
        }
    }

    const auto* res = reinterpret_cast<const Xex2ResourceInfo*>(getOptHeaderPtr(data.data(), XEX_HEADER_RESOURCE_INFO));
    if (res) {
        const uint32_t offset = static_cast<uint32_t>(res->offset);
        const uint32_t size = static_cast<uint32_t>(res->sizeOfData);

        void* xdbfData = g_memory.Translate(offset);
        if (xdbfData) {
            g_xdbfWrapper = XDBFWrapper(static_cast<uint8_t*>(xdbfData), size);
            spdlog::info("🔖 XDBF loaded at 0x{:08X} ({} bytes)", offset, size);
        } else {
            LOG_WARN("⚠️ XDBF pointer is null at offset 0x{:08X}", offset);
        }
    } else {
        LOG_WARN("⚠️ XEX_HEADER_RESOURCE_INFO not found");
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

// ======== Mamory patches ========

constexpr uint32_t kCallbackArrayStart = 0x832D0000;
constexpr uint32_t kCallbackArrayEnd   = 0x832D000C;

void WriteCallbackArray() {
    auto* table = reinterpret_cast<uint32_t*>(g_memory.Translate(kCallbackArrayStart));
    table[0] = ByteSwap(0x82000000);           // Valid dummy callback
    table[1] = 0;                    // NULL, will be skipped
    table[2] = 0;                    // NULL, will be skipped

    spdlog::info("🧩 Callback array entries:");
    constexpr size_t kCallbackArraySize = (kCallbackArrayEnd - kCallbackArrayStart) / sizeof(uint32_t);
    for (size_t i = 0; i < kCallbackArraySize; ++i) {
        spdlog::info("  → [{:02}] = 0x{:08X}", i, table[i]);
    }
}

void DummyCallback(uint32_t context) {
    spdlog::info("🧪 DummyCallback invoked with context = 0x{:08X}", context);
}

void DummyCallbackHook(PPCContext& ctx, uint8_t*) {
    spdlog::info("🧪 DummyCallbackHook: safely intercepted 0x82000000");

    void* objMem = g_userHeap.Alloc(8);
    void* vtMem  = g_userHeap.Alloc(8);

    if (!objMem || !vtMem) {
        spdlog::error("❌ Failed to allocate dummy callback object or vtable");
        ctx.r3.u32 = 0;
        return;
    }

    const uint32_t objGuest = g_memory.MapVirtual(objMem);
    const uint32_t vtGuest  = g_memory.MapVirtual(vtMem);

    // Setup real vtable
    g_memory.WriteU32(vtGuest + 0, 0);           // metadata/null
    g_memory.WriteU32(vtGuest + 4, 0x82000000);  // method

    // Setup object
    g_memory.WriteU32(objGuest + 0, vtGuest);    // vtable
    g_memory.WriteU32(objGuest + 4, 0);          // reserved

    spdlog::info("📤 Returning dummy object @ 0x{:08X} with vtable 0x{:08X}", objGuest, vtGuest);
    ctx.r3.u32 = objGuest;
}

constexpr uint32_t kInitFlagAddr = 0x834C3318;
constexpr uint32_t kCallbackObjPtrAddr = 0x834C16A0;

void InitCallbackSystem() {
    g_memory.WriteU32(kInitFlagAddr, 0);
    g_memory.WriteU32(kCallbackObjPtrAddr, 0);
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

std::pair<uint32_t, uint32_t> InstallVtableCallbackObjectWithVtable(
    uint32_t defaultMethod,
    const char* name = "callback",
    std::initializer_list<uint32_t> methodOverrides = {}) 
{
    constexpr size_t kObjectSize  = 0x20;
    constexpr size_t kVtableSize  = 0x20;  // Enough for 5 slots (0x0 to 0x1C)

    void* cbMem = g_userHeap.Alloc(kObjectSize);
    void* vtMem = g_userHeap.Alloc(kVtableSize);

    if (!cbMem || !vtMem) {
        spdlog::error("❌ Failed to allocate memory for {}", name);
        return {0, 0};
    }

    const uint32_t cbGuest = g_memory.MapVirtual(cbMem);
    const uint32_t vtGuest = g_memory.MapVirtual(vtMem);

    // Fill vtable with default method
    for (size_t offset = 0; offset < kVtableSize; offset += 4) {
        g_memory.WriteU32(vtGuest + offset, defaultMethod);
    }

    // Override any specific slots
    size_t index = 0;
    for (uint32_t method : methodOverrides) {
        if (index * 4 < kVtableSize) {
            g_memory.WriteU32(vtGuest + index * 4, method);
            spdlog::info("🔧 [{}] vtable[{}] = 0x{:08X}", name, index, method);
        }
        ++index;
    }

    // Patch object to point to vtable
    g_memory.WriteU32(cbGuest, vtGuest);

    spdlog::info("🧩 Installed {} object: obj=0x{:08X}, vtbl=0x{:08X}, default=0x{:08X}",
                 name, cbGuest, vtGuest, defaultMethod);

    return {cbGuest, vtGuest};
}

uint32_t InstallVtableCallbackObject(
    uint32_t defaultMethod,
    const char* name = "callback",
    std::initializer_list<uint32_t> methodOverrides = {})
{
    auto [obj, _] = InstallVtableCallbackObjectWithVtable(defaultMethod, name, methodOverrides);
    return obj;
}

void PatchStartupCallbackTables() {
    constexpr uint32_t kStub = 0x82000000;

    for (uint32_t addr = 0x832D5DE8; addr <= 0x832D5DF4; addr += 4)
        g_memory.WriteU32(addr, kStub);

    for (uint32_t addr = 0x832D5DF8; addr <= 0x832D5DFC; addr += 4)
        g_memory.WriteU32(addr, kStub);

    spdlog::info("✅ Patched startup constructor callback tables (0x832D5DE8–0x832D5DFC)");
}

void PatchCallbackDispatch() {
    uint32_t cbObject = InstallVtableCallbackObject(0x82000000, "dispatch callback");
    g_memory.WriteU32(0x833370E4, cbObject); // Patch global pointer to object

    spdlog::info("✅ Patched global callback dispatch at 0x833370E4");
}

void InitGuestRingBuffer() {
    constexpr uint32_t kRingBufferSize = 0x1000;
    void* buffer = g_userHeap.Alloc(kRingBufferSize);
    if (!buffer) {
        spdlog::error("❌ Failed to allocate guest ring buffer");
        return;
    }

    const uint32_t guestBufferAddr = g_memory.MapVirtual(buffer);
    if (!g_memory.IsValidVirtualAddress(guestBufferAddr)) {
        spdlog::error("❌ Failed to map virtual address for ring buffer");
        return;
    }

    std::memset(buffer, 0, kRingBufferSize);

    constexpr uint32_t kHeadAddr = 0x834F74C4;
    constexpr uint32_t kBaseAddr = 0x834F74C8;
    g_memory.WriteU32(kHeadAddr, guestBufferAddr);
    g_memory.WriteU32(kBaseAddr, guestBufferAddr);

    spdlog::info("✅ Guest ring buffer initialized at 0x{:08X}, size = 0x{:X}", guestBufferAddr, kRingBufferSize);
}

void ReserveGlobalStatics() {
    g_memory.WriteU32(0x834C3318, 0);  // store raw init flag = 0
    g_memory.WriteU32(0x83496EB8, 0); 

    uint32_t cbObject = InstallVtableCallbackObject(0x82000000, "global callback");
    if (g_memory.ReadU32(0x834C16A0) == 0) {
        g_memory.WriteU32(0x834C16A0, cbObject);
        spdlog::info("🧷 Global callback object installed (fallback): 0x{:08X}", cbObject);
    } else {
        spdlog::info("✅ Global callback already initialized: 0x{:08X}", g_memory.ReadU32(0x834C16A0));
    }

    void* thunkMem = g_memory.Translate(0x832AEFA0);
    const uint32_t thunkCode[] = {
        0x81830000, // lwz r12, 0(r3)
        0x814C0008, // lwz r10, 8(r12)
        0x7D4803A6, // mtctr r10
        0x4E800420  // bctr
    };
    std::memcpy(thunkMem, thunkCode, sizeof(thunkCode));

    spdlog::info("✅ Global statics initialized and thunk written to 0x832AEFA0");
}

uint32_t AllocateGuestStack(uint32_t size = 0x1000) {
    void* host_ptr = g_userHeap.Alloc(size);
    if (!host_ptr) {
        spdlog::error("❌ Failed to allocate guest stack");
        return 0;
    }

    const uint32_t guest_ptr = g_memory.MapVirtual(host_ptr);
    std::memset(host_ptr, 0, size);
    return (guest_ptr + size - 0x60) & ~0xF; // align r1 for prologue
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
    g_memory.InsertFunction(0x82000000, DummyCallbackHook);

    InitGuestRingBuffer();

    InitCoreStructures();

    PatchStartupCallbackTables();
    PatchCallbackDispatch();
    InitCallbackSystem();

    ReserveGlobalStatics();
    GuestThread::Start({ entry, 0, 0 });

    running.store(false);
//    renderThread.join();

    return 0;
}

void Fable2MainLoop(PPCContext& ctx, uint8_t* /*mem*/) {
    spdlog::info("🎮 Hook_sub_822EA928: Game main thread has started (initializing thread state)");

    constexpr uint32_t kGameThreadLabel = 0x820F1CD8;
    constexpr uint32_t kGameThreadVtbl  = 0x82002838;
    constexpr uint32_t kCallbackThunk   = 0x829681C0;
    constexpr uint32_t kThreadStatePtr  = 0x8349E6EC;
    constexpr uint32_t kGameRunningFlag = 0x83496898;

    uint32_t r31 = 0;
    uint32_t r29 = 0;
    uint32_t r28 = 0;

    // Setup name
    spdlog::info("🎮① Entered Hook_sub_82CBBE20");
    GuestToHostFunction<void>(0x82CBBE20, -2, 0);
    uint32_t guestStr = g_memory.AllocateGuestString("GameThread");
    spdlog::info("🎮② Entered Hook_sub_82B38798");
    GuestToHostFunction<void>(0x82B38798, guestStr);
    spdlog::info("🎮③ Entered Hook_sub_82B38840");
    GuestToHostFunction<void>(0x82B38840);
    spdlog::info("🎮④ Entered Hook_sub_82A1B1A0");
    GuestToHostFunction<void>(0x82A1B1A0);

    // Allocate GameThread struct (0x30 bytes)
    r31 = GuestToHostFunction<uint32_t>(0x8221F388, 0x30);

    if (r31 != 0) {
        g_memory.WriteU32(r31, kGameThreadLabel);
        RtlInitializeCriticalSection(reinterpret_cast<XRTL_CRITICAL_SECTION*>(g_memory.Translate(r31 + 8)));
        g_memory.WriteU32(r31 + 0x24, 0);
        g_memory.WriteU32(r31 + 0x28, 0);
        g_memory.WriteU32(r31 + 0x00, kGameThreadVtbl);
        g_memory.WriteU8(r31 + 0x2C, 0);
        g_memory.WriteU8(r31 + 0x2D, 0);
        r29 = r31;
    } else {
        r28 = 0;
        r29 = 0;
    }

    // Optional callback wrapper
    uint32_t callbackObj = 0;
    if (r29 != 0) {
        uint32_t temp = GuestToHostFunction<uint32_t>(0x8221F388, 0xC);
        if (temp != 0) {
            g_memory.WriteU32(temp,     1);
            g_memory.WriteU32(temp + 4, kCallbackThunk);
            g_memory.WriteU32(temp + 8, r29);
            callbackObj = temp;
        }
    }

    // Swap into global state if changed
    const uint32_t prevCallback = g_memory.ReadU32(kThreadStatePtr + 4);
    if (prevCallback != callbackObj) {
        GuestToHostFunction<void>(0x829FF648, kThreadStatePtr);
        g_memory.WriteU32(kThreadStatePtr + 0, r29);
        g_memory.WriteU32(kThreadStatePtr + 4, callbackObj);

        if (callbackObj) {
            uint32_t count = g_memory.ReadU32(callbackObj);
            g_memory.WriteU32(callbackObj, count + 1);
        }
    }

    // Thread local init
    spdlog::info("🎮⑤ Entered Hook_sub_829FF648");
    GuestToHostFunction<void>(0x829FF648, r29);
    spdlog::info("🎮⑥ Entered Hook_sub_8217E3F8");
    GuestToHostFunction<void>(0x8217E3F8);
    spdlog::info("🎮⑦ Entered Hook_sub_822EB0C8");
    GuestToHostFunction<void>(0x822EB0C8);

    // Game state init
    uint32_t gameState = ctx.r1.u32 - 0xA0;
    spdlog::info("🎮⑧ Entered Hook_sub_822F2518");
    GuestToHostFunction<void>(0x822F2518, gameState);
    spdlog::info("🎮⑨ Entered Hook_sub_822F27C0");
    GuestToHostFunction<void>(0x822F27C0, gameState);

    const bool shouldContinue = (ctx.r3.u32 & 0xFF) != 0;
    if (shouldContinue) {
        spdlog::info("🎮⑩ Entered Hook_sub_822F47F8");
        GuestToHostFunction<void>(0x822F47F8, gameState);
        spdlog::info("🎮⑪ Entered Hook_sub_822F4690");
        GuestToHostFunction<void>(0x822F4690, gameState);
        g_memory.WriteU32(kGameRunningFlag, 0);
        spdlog::info("🎮⑫ Entered Hook_sub_822F2608");
        GuestToHostFunction<void>(0x822F2608, gameState);
    } else {
        g_memory.WriteU32(kGameRunningFlag, 1);
        spdlog::info("🎮⑬ Entered Hook_sub_822F2608");
        GuestToHostFunction<void>(0x822F2608, gameState);
    }

    // 🌀 Main rendering loop
    spdlog::info("🌀 Game main loop now running...");
    while (true) {
        // TODO: SDL event handling or guest break condition
        VideoVulkan::BeginFrame();
        // Optional debug draw or render stubs
        VideoVulkan::EndFrame();
        SDL_Delay(16); // ~60 FPS
    }

    ctx.r3.u32 = 0; // unreachable, but defined if we ever add a loop exit
}

GUEST_FUNCTION_HOOK(sub_822EA928, Fable2MainLoop);

// ====== Memory and start up patches ======

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

void Hook_sub_82CC1990(PPCContext& ctx, uint8_t*) {
    spdlog::info("🔁 Entered Hook_sub_82CC1990");
    spdlog::info("    r3 = 0x{:08X}", ctx.r3.u32);
    spdlog::info("    r4 = 0x{:08X}", ctx.r4.u32);
    spdlog::info("    r5 = 0x{:08X}", ctx.r5.u32);
    spdlog::info("    r6 = 0x{:08X}", ctx.r6.u32);

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

    // Guard to avoid re-calling the same function from both tables
    bool already_called_82000000 = false;

    // Second callback table: 0x832D0000 → 0x832D000C
    const uint32_t start2 = 0x832D0000;
    const uint32_t end2   = 0x832D000C;

    for (uint32_t addr = start2; addr < end2; addr += 4) {
        const void* ptr = g_memory.Translate(addr);
        if (!ptr) {
            spdlog::error("❌ Failed to translate callback table address 0x{:08X}", addr);
            continue;
        }

        const uint32_t fnptr = ByteSwap(*reinterpret_cast<const uint32_t*>(ptr));
        if (fnptr != 0 && fnptr != 0xFFFFFFFF && fnptr >= 0x82000000 && fnptr <= 0x83000000) {
            if (fnptr == 0x82000000) {
                if (already_called_82000000) {
                    spdlog::warn("⚠️ Skipping recursive call to 0x82000000");
                    continue;
                }
                already_called_82000000 = true;
            }

            spdlog::info("🔗 Executing callback 2 @ 0x{:08X}", fnptr);
            if (auto* fn = g_memory.FindFunction(fnptr)) {
                fn(ctx, g_memory.base);
            } else {
                spdlog::warn("⚠️ No hook for callback 2 @ 0x{:08X}", fnptr);
            }
        }
    }

    // Optional: Clamp suspiciously large allocations to avoid crash
    if (ctx.r5.u32 > (512 * 1024 * 1024)) {
        spdlog::error("🚨 Requested allocation too large: 0x{:08X} — clamping", ctx.r5.u32);
        ctx.r5.u32 = 0;
    }

    ctx.r3.u32 = 0;
}

GUEST_FUNCTION_HOOK(sub_82CC1990, Hook_sub_82CC1990);

uint32_t Hook_sub_82A1B1A0(PPCContext& ctx)
{
    spdlog::info("🔁 Hook_sub_82A1B1A0 (void)");

    constexpr uint32_t count  = 1000;     // 0x3E8
    constexpr uint32_t stride = 0x10;     // Node size
    constexpr uint32_t maxTotal = 16 * 1024 * 1024;

    const size_t totalSize = static_cast<size_t>(count) * stride;
    if (totalSize > maxTotal) {
        spdlog::error("❌ Refusing to allocate >16MB");
        return 0;
    }

    void* ptr = g_userHeap.Alloc(totalSize);
    if (!ptr) {
        spdlog::error("❌ Failed to allocate {} bytes", totalSize);
        return 0;
    }

    std::memset(ptr, 0, totalSize);
    const uint32_t guestBase = g_memory.MapVirtual(ptr);

    // Link nodes: prev at +0x0, next at +0x4
    for (uint32_t i = 0; i < count; ++i) {
        const uint32_t addr = guestBase + i * stride;
        const uint32_t prev = (i == 0) ? 0 : guestBase + (i - 1) * stride;
        const uint32_t next = (i + 1 == count) ? 0 : guestBase + (i + 1) * stride;

        g_memory.WriteU32(addr + 0x0, prev);
        g_memory.WriteU32(addr + 0x4, next);
    }

    // Store head pointer globally (at dword_83496C34)
    constexpr uint32_t kGlobalListHeadAddr = 0x83496C34;
    g_memory.WriteU32(kGlobalListHeadAddr, guestBase);

    spdlog::info("🟩 Allocated linked list at 0x{:08X} with {} entries", guestBase, count);
    return 0;
}

GUEST_FUNCTION_HOOK(sub_82A1B1A0, Hook_sub_82A1B1A0);

uint32_t Hook_sub_82196C58(PPCContext& ctx) {
    spdlog::info("📎 sub_82196C58: preparing to wait on handle 0x{:08X}", ctx.r3.u32);
    ctx.r5.u32 = 0;
    sub_822D74A0(ctx, g_memory.base);
    return 0;
}

GUEST_FUNCTION_HOOK(sub_82196C58, Hook_sub_82196C58);

uint32_t Hook_sub_822D74A0(PPCContext& ctx) {
    spdlog::info("🔁 Entered Hook_sub_822D74A0");
    const uint32_t handle = ctx.r3.u32;
    const uint32_t alertable = ctx.r5.u32 & 0xFF;

    be<int64_t>* timeout = nullptr;  // Infinite wait for now

    while (true) {
        auto status = NtWaitForSingleObjectEx(handle, 1 /*UserMode*/, alertable, timeout);

        if ((int32_t)status < 0) {
            spdlog::error("❌ Wait failed for handle 0x{:08X}, status = 0x{:08X}", handle, status);
            ctx.r3.u32 = static_cast<uint32_t>(-1);
            return 0;
        }

        if (alertable == 0 || status != 0x101 /* STATUS_ALERTED */)
            break;
    }

    ctx.r3.u32 = 0;
    return 0;
}

GUEST_FUNCTION_HOOK(sub_822D74A0, Hook_sub_822D74A0);

uint32_t Hook_sub_83231D20(PPCContext& ctx) {
    spdlog::info("🔁 Entered Hook_sub_83231D20");
    const uint32_t poolId = 0x40;
    const uint32_t size   = 0x1000;
    constexpr uint32_t kMaxSafeSize = 64 * 1024 * 1024;
    constexpr uint32_t kTrackFieldOffset = 0x28;

    enum class Pool : uint8_t { Static, B, C, D, E, Fallback };

    // Matches values at .rdata:8209B46C
    static constexpr uint32_t kStaticIds[] = {
        0x00000040, 0x00000000, 0x000000D0,
        0x00000018, 0x00000180, 0x00000104
    };

    Pool poolType = Pool::Fallback;
    for (uint32_t id : kStaticIds) {
        if (poolId == id) {
            poolType = Pool::Static;
            break;
        }
    }

    if (poolType == Pool::Fallback) {
        if (poolId <= 0x40)
            poolType = Pool::B;
        else if (poolId <= 0x200)
            poolType = Pool::C;
        else if (poolId <= 0x2800)
            poolType = Pool::D;
        else if (poolId <= 0xA000)
            poolType = Pool::E;
    }

    struct PoolHandle {
        const char* name;
        uint32_t guest_base;
    };

    static constexpr PoolHandle pools[] = {
        {"StaticPool", 0x83496BE4}, // .rdata match
        {"PoolB",      0x83496BD4},
        {"PoolC",      0x83496BD8},
        {"PoolD",      0x83496BDC},
        {"PoolE",      0x83496BE0},
        {"Fallback",   0x00000000}
    };

    const auto index = static_cast<size_t>(poolType);
    if (index >= std::size(pools)) {
        spdlog::error("❌ sub_83231D20: Invalid pool type {} for poolId=0x{:08X}", static_cast<int>(poolType), poolId);
        return 0;
    }

    const PoolHandle& pool = pools[index];
    if (!g_memory.IsValidVirtualAddress(pool.guest_base)) {
        spdlog::error("❌ sub_83231D20: Invalid guest base for {} @ 0x{:08X}", pool.name, pool.guest_base);
        return 0;
    }

    if (size == 0 || size > kMaxSafeSize) {
        spdlog::error("❌ sub_83231D20: Invalid size {} for {} (poolId=0x{:08X})", size, pool.name, poolId);
        return 0;
    }

    void* hostPtr = g_userHeap.Alloc(size);
    if (!hostPtr) {
        spdlog::error("❌ Allocation failed in {} ({} bytes)", pool.name, size);
        return 0;
    }

    const uint32_t guestAddr = g_memory.MapVirtual(hostPtr);
    spdlog::info("🟩 sub_83231D20(poolId=0x{:08X}, size={}) → {} @ 0x{:08X}", poolId, size, pool.name, guestAddr);

    g_memory.WriteU32(pool.guest_base + kTrackFieldOffset, 0);
    return guestAddr;
}

GUEST_FUNCTION_HOOK(sub_83231D20, Hook_sub_83231D20);

uint32_t Hook_sub_8221F388(PPCContext& ctx) {
    spdlog::info("🔁 Entered Hook_sub_8221F388");

    // Primary callback attempt
    uint32_t result = GuestToHostFunction<uint32_t>(0x8221F3F0);

    if (result == 0) {
        constexpr uint32_t kFallbackPtrAddr = 0x83496D9C;
        const uint32_t fallbackFuncAddr = g_memory.ReadU32(kFallbackPtrAddr);

        if (fallbackFuncAddr && g_memory.IsValidVirtualAddress(fallbackFuncAddr)) {
            spdlog::warn("⚠️ Primary failed, calling fallback at 0x{:08X}", fallbackFuncAddr);

            // Call fallback, with Arg1 = 0
            result = GuestToHostFunction<uint32_t>(fallbackFuncAddr, 0u);

            if (result != 0) {
                const uint32_t obj = result;
                const uint32_t vtbl = g_memory.ReadU32(obj);

                if (g_memory.IsValidVirtualAddress(vtbl)) {
                    const uint32_t method = g_memory.ReadU32(vtbl + 8);

                    if (g_memory.IsValidVirtualAddress(method)) {
                        spdlog::info("🔁 Manually invoking vtbl[+8] = 0x{:08X}", method);
                        GuestToHostFunction<void>(method, obj, 0u);  // r3 = obj, r4 = 0
                    } else {
                        spdlog::error("❌ Invalid method @ vtbl + 8 = 0x{:08X}", vtbl + 8);
                    }
                } else {
                    spdlog::error("❌ Invalid vtable pointer: 0x{:08X}", vtbl);
                }
            }
        }

        if (result == 0) {
            spdlog::error("💥 Fallback also failed — debug trap");
            __builtin_trap();
        }
    }

    ctx.r3.u32 = result;
    return result;
}

GUEST_FUNCTION_HOOK(sub_8221F388, Hook_sub_8221F388);

uint32_t Hook_sub_82CD7FF8(PPCContext& ctx, uint8_t* mem) {
    const uint32_t struct_ptr = ctx.r3.u32;
    const uint32_t out_ptr    = ctx.r4.u32;

    spdlog::info("🔁 Entered Hook_sub_82CD7FF8");
    spdlog::info("📥 struct_ptr=0x{:08X}, out_ptr=0x{:08X}", struct_ptr, out_ptr);

    if (!g_memory.IsValidVirtualAddress(struct_ptr) || !g_memory.IsValidVirtualAddress(out_ptr)) {
        spdlog::error("❌ Invalid struct or output pointer");
        return -1;
    }

    const uint8_t flag       = g_memory.ReadU8(struct_ptr + 0x0);
    const uint32_t divisor   = g_memory.ReadU32(struct_ptr + 0x8);
    const uint8_t multiplier = g_memory.ReadU8(struct_ptr + 0x5);

    uint32_t result = 0;

    if (flag == 0) {
        constexpr uint32_t k = 0xBB80;
        constexpr uint32_t b = 0x100;

        if (divisor == 0) {
            spdlog::warn("⚠️ divisor is zero, falling back to result=0x24");
            result = 0x24; // fallback
        } else {
            uint32_t a = k / divisor;
            if (a == 0) {
                spdlog::warn("⚠️ intermediate 'a' is zero, fallback result=0x24");
                result = 0x24;
            } else {
                uint32_t c = b / a;
                uint32_t d = (c * multiplier + 0x20) << 2;
                result = d + 0x24;
            }
        }
    }

    g_memory.WriteU32(out_ptr, result);
    spdlog::info("📏 Computed result = 0x{:X}, written to 0x{:08X}", result, out_ptr);

    return 0;
}

GUEST_FUNCTION_HOOK(sub_82CD7FF8, Hook_sub_82CD7FF8);

uint32_t g_callbackTable[256] = {};

uint32_t Hook_sub_82B3D480(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_82B3D480");

    // === Allocate 0x34-byte primary object ===
    void* primaryMem = g_userHeap.Alloc(0x34);
    if (!primaryMem) {
        spdlog::error("❌ Failed to allocate 0x34-byte structure");
        ctx.r3.u32 = 0;
        return 0;
    }

    const uint32_t primaryAddr = g_memory.MapVirtual(primaryMem);
    std::memset(primaryMem, 0, 0x34);

    spdlog::info("📦 Allocated primary object at VA 0x{:08X} / Host 0x{:p}", primaryAddr, primaryMem);

    // === Install vtable ===
    constexpr uint32_t kExpectedVtable = 0x820F8B50;
    constexpr uint32_t kVtableFuncSlot = kExpectedVtable + 4;

    static bool vtableInitialized = false;
    if (!vtableInitialized) {
        g_memory.WriteU32(kVtableFuncSlot, 0x82000000); // Write native-endian
        g_memory.InsertFunction(0x82000000, DummyCallbackHook);
        vtableInitialized = true;
        spdlog::info("✅ Vtable installed at 0x{:08X} with method 0x{:08X}", kExpectedVtable, 0x82000000);
    }

    // === Fill object fields ===
    g_memory.WriteU32(primaryAddr + 0x00, kExpectedVtable);  // vtable
    g_memory.WriteU32(primaryAddr + 0x04, 0);                // reserved
    g_memory.WriteU32(primaryAddr + 0x08, 0);                // reserved

    spdlog::info("🧱 Primary object fields:");
    spdlog::info("  +0x00 (vtable)   = 0x{:08X}", g_memory.ReadU32(primaryAddr + 0x00));
    spdlog::info("  +0x04 (reserved) = 0x{:08X}", g_memory.ReadU32(primaryAddr + 0x04));
    spdlog::info("  +0x08 (reserved) = 0x{:08X}", g_memory.ReadU32(primaryAddr + 0x08));

    // === Initialize Critical Section ===
    void* csPtr = g_memory.Translate(primaryAddr + 0x0C);
    RtlInitializeCriticalSection(reinterpret_cast<XRTL_CRITICAL_SECTION*>(csPtr));
    spdlog::info("🔐 Initialized critical section at 0x{:08X} (Host {:p})", primaryAddr + 0x0C, csPtr);

    // === Allocate 0x18-byte substructure ===
    void* subMem = g_userHeap.Alloc(0x18);
    if (!subMem) {
        spdlog::error("❌ Failed to allocate 0x18-byte substructure");
        ctx.r3.u32 = primaryAddr;
        return primaryAddr;
    }

    const uint32_t subAddr = g_memory.MapVirtual(subMem);
    std::memset(subMem, 0, 0x18);

    spdlog::info("🧩 Allocated substructure at VA 0x{:08X} / Host 0x{:p}", subAddr, subMem);

    // === Setup substructure ===
    g_memory.WriteU32(subAddr + 0x00, 0);          // reserved
    g_memory.WriteU32(subAddr + 0x04, subAddr);    // Flink → self
    g_memory.WriteU32(subAddr + 0x08, subAddr);    // Blink → self
    g_memory.WriteU8 (subAddr + 0x14, 1);          // flag1 = 1
    g_memory.WriteU8 (subAddr + 0x15, 0);          // flag2 = 0 (set later)

    spdlog::info("🔗 Substructure initialized:");
    spdlog::info("  +0x00 (reserved) = 0x{:08X}", g_memory.ReadU32(subAddr + 0x00));
    spdlog::info("  +0x04 (Flink)    = 0x{:08X}", g_memory.ReadU32(subAddr + 0x04));
    spdlog::info("  +0x08 (Blink)    = 0x{:08X}", g_memory.ReadU32(subAddr + 0x08));
    spdlog::info("  +0x14 (flag1)    = {}", g_memory.ReadU8(subAddr + 0x14));
    spdlog::info("  +0x15 (flag2)    = {}", g_memory.ReadU8(subAddr + 0x15));

    // === Link substructure into primary ===
    g_memory.WriteU32(primaryAddr + 0x2C, subAddr); // list head
    g_memory.WriteU32(primaryAddr + 0x30, 0);       // reserved

    spdlog::info("🪢 Linked substructure:");
    spdlog::info("  primary[+0x2C] = 0x{:08X} (substructure)", g_memory.ReadU32(primaryAddr + 0x2C));
    spdlog::info("  primary[+0x30] = 0x{:08X} (reserved)",     g_memory.ReadU32(primaryAddr + 0x30));

    // === Dispatch virtual function ===
    const uint32_t vtable = g_memory.ReadU32(primaryAddr + 0x00);
    const uint32_t method = g_memory.ReadU32(vtable + 4);

    spdlog::info("🎯 Virtual dispatch:");
    spdlog::info("  this          = 0x{:08X}", primaryAddr);
    spdlog::info("  vtable        = 0x{:08X}", vtable);
    spdlog::info("  vtable[+4]    = 0x{:08X}", method);

    if (g_memory.IsValidVirtualAddress(method)) {
        if (auto* hook = g_memory.FindFunction(method)) {
            ctx.r3.u32 = primaryAddr;
            spdlog::info("🚀 Invoking method 0x{:08X} with r3=this=0x{:08X}", method, primaryAddr);
            hook(ctx, g_memory.base);
            g_memory.WriteU8(subAddr + 0x15, 1); // flag2 = 1
            spdlog::info("✅ Method complete. Updated flag2 = {}", g_memory.ReadU8(subAddr + 0x15));
        } else {
            spdlog::warn("⚠️ No hook found for method 0x{:08X}", method);
        }
    } else {
        spdlog::error("❌ Invalid virtual method pointer: 0x{:08X}", method);
    }

    // === Final step: publish callback ===
    constexpr uint32_t kGlobalCallbackAddr = 0x834C16A0;
    g_memory.WriteU32(kGlobalCallbackAddr, primaryAddr);
    spdlog::info("📌 Published global callback @ 0x{:08X} → 0x{:08X}", kGlobalCallbackAddr, primaryAddr);

    return primaryAddr;
}

GUEST_FUNCTION_HOOK(sub_82B3D480, Hook_sub_82B3D480);

uint32_t Hook_sub_82CA35F8(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_82CA35F8");

    const uint32_t value = ctx.r3.u32;
    const uint32_t frame = ctx.r1.u32;

    constexpr uint32_t kRingBufferSize = 0x1000;
    constexpr uint32_t kHeadAddr = 0x834F74C4;
    constexpr uint32_t kBaseAddr = 0x834F74C8;

    uint32_t head = g_memory.ReadU32(kHeadAddr);
    uint32_t base = g_memory.ReadU32(kBaseAddr);

    // 🔧 Auto-create ring buffer if missing
    if (head == 0xFFFFFFFF || base == 0xFFFFFFFF) {
        spdlog::warn("⚠️ Ring buffer not initialized, creating...");

        void* buffer = g_userHeap.Alloc(kRingBufferSize);
        if (!buffer) {
            spdlog::error("❌ Failed to allocate ring buffer");
            ctx.r3.u32 = 0;
            return 0;
        }

        std::memset(buffer, 0, kRingBufferSize);
        const uint32_t guestAddr = g_memory.MapVirtual(buffer);

        g_memory.WriteU32(kHeadAddr, guestAddr);
        g_memory.WriteU32(kBaseAddr, guestAddr);
        head = base = guestAddr;

        spdlog::info("✅ Auto-initialized ring buffer at 0x{:08X}, size = 0x{:X}", guestAddr, kRingBufferSize);
    }

    // 🔒 Corruption check
    if (head < base) {
        spdlog::error("❌ Corrupted ring buffer: head < base (0x{:08X} < 0x{:08X})", head, base);
        g_memory.WriteU32(frame + 0x50, 0);
        ctx.r3.u32 = 0;
        return 0;
    }

    const uint32_t used = head - base;
    const uint32_t required = used + 4;

    if (required < 4) {
        spdlog::warn("⚠️ Required bytes too small: %u", required);
        g_memory.WriteU32(frame + 0x50, 0);
        ctx.r3.u32 = 0;
        return 0;
    }

    // 🔍 Get current ring buffer size
    ctx.r3.u32 = base;
    sub_82CAACD0(ctx, g_memory.base);  // returns size in r3
    const uint32_t currentSize = ctx.r3.u32;

    // 🔁 Grow ring buffer if needed
    if (currentSize < required) {
        const uint32_t grow = std::min(currentSize, 0x800u);
        const uint32_t newSize = currentSize + grow;

        if (newSize < currentSize) {
            spdlog::error("❌ Integer overflow during ring buffer growth");
            g_memory.WriteU32(frame + 0x50, 0);
            ctx.r3.u32 = 0;
            return 0;
        }

        ctx.r3.u32 = base;
        ctx.r4.u32 = newSize;
        sub_82CA8570(ctx, g_memory.base);  // attempt to grow

        const uint32_t growResult = ctx.r3.u32;
        if (growResult == 0) {
            ctx.r4.u32 = currentSize + 0x10;
            if (ctx.r4.u32 < currentSize) {
                spdlog::error("❌ Fallback overflow");
                g_memory.WriteU32(frame + 0x50, 0);
                ctx.r3.u32 = 0;
                return 0;
            }

            ctx.r3.u32 = base;
            sub_82CA8570(ctx, g_memory.base);
            const uint32_t fallbackGrow = ctx.r3.u32;
            if (fallbackGrow == 0) {
                g_memory.WriteU32(frame + 0x50, 0);
                ctx.r3.u32 = 0;
                return 0;
            }

            g_memory.WriteU32(kBaseAddr, fallbackGrow);
            head = fallbackGrow + ((head - base) & ~3);
        } else {
            g_memory.WriteU32(kBaseAddr, growResult);
            head = growResult + ((head - base) & ~3);
        }
    }

    // ✅ Sanitize and validate r3 value before writing
    if (!g_memory.IsValidVirtualAddress(value)) {
        spdlog::error("🚨 Hook_sub_82CA35F8: r3 contains invalid or host pointer: 0x{:08X}", value);
        g_memory.WriteU32(frame + 0x50, 0);
        ctx.r3.u32 = 0;
        return 0;
    }

    // ✅ Final write to ring buffer and shadow copy
    g_memory.WriteU32(head, value);
    g_memory.WriteU32(frame + 0x50, value);
    g_memory.WriteU32(kHeadAddr, head + 4);

    spdlog::info("📝 Pushed 0x{:08X} → ring buffer @ 0x{:08X}, new head = 0x{:08X}", value, head, head + 4);
    ctx.r3.u32 = value;
    return value;
}

GUEST_FUNCTION_HOOK(sub_82CA35F8, Hook_sub_82CA35F8);

uint32_t Hook_sub_82CA3700(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_82CA3700");

    const uint32_t result = Hook_sub_82CA35F8(ctx);
    ctx.r3.u32 = (result == 0) ? 0xFFFFFFFF : 0;

    return ctx.r3.u32;
}

GUEST_FUNCTION_HOOK(sub_82CA3700, Hook_sub_82CA3700);

uint32_t Hook_sub_82B3D3F0(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_82B3D3F0");

    const uint32_t out_ptr = ctx.r3.u32;
    constexpr uint32_t kInitFlagAddr       = 0x834C3318;
    constexpr uint32_t kCallbackObjPtrAddr = 0x834C16A0;

    uint32_t init_flag = g_memory.ReadU32(kInitFlagAddr);
    bool is_initialized = (init_flag & 1) != 0;

    if (!is_initialized) {
        spdlog::info("🆕 Initializing global callback object");
        g_memory.WriteU32(kInitFlagAddr, init_flag | 1);

        // 🧱 Allocate object and publish
        ctx.r3.u32 = kCallbackObjPtrAddr;
        Hook_sub_82B3D480(ctx);  // stores guest pointer at kCallbackObjPtrAddr

        // 📝 Push dummy vtable object to ring buffer
        ctx.r3.u32 = 0x832AEFA0;
        Hook_sub_82CA3700(ctx);
    }

    const uint32_t callback_obj = g_memory.ReadU32(kCallbackObjPtrAddr);
    spdlog::info("📌 Global callback object = 0x{:08X}", callback_obj);

    if (!g_memory.IsValidVirtualAddress(callback_obj)) {
        spdlog::critical("❌ GlobalCallbackPtr = 0x{:08X} is invalid — likely host pointer!", callback_obj);
        ctx.r3.u32 = 0;
        return 0;
    }

    if (!g_memory.IsValidVirtualAddress(out_ptr)) {
        spdlog::error("❌ Invalid output pointer: 0x{:08X}", out_ptr);
        ctx.r3.u32 = 0;
        return 0;
    }

    g_memory.WriteU32(out_ptr, callback_obj);

    const uint32_t vtable = g_memory.ReadU32(callback_obj);
    const uint32_t method = g_memory.ReadU32(vtable + 4);

    spdlog::info("🎯 Virtual dispatch: this=0x{:08X}, vtable=0x{:08X}, method=0x{:08X}",
                 callback_obj, vtable, method);

    if (!g_memory.IsValidVirtualAddress(method)) {
        spdlog::error("❌ Method address is invalid: 0x{:08X}", method);
        ctx.r3.u32 = 0;
        return 0;
    }

    if (auto* hook = g_memory.FindFunction(method)) {
        ctx.r3.u32 = callback_obj;
        hook(ctx, g_memory.base);
        // 🟩 ctx.r3.u32 now contains the return value — likely a guest pointer
        const uint32_t result = ctx.r3.u32;

        if (!g_memory.IsValidVirtualAddress(result)) {
            spdlog::critical("🚨 Returned invalid guest pointer 0x{:08X}", result);
            ctx.r3.u32 = 0;
            return 0;
        }

        return result;
    }

    spdlog::warn("⚠️ No hook registered for method @ 0x{:08X}", method);
    ctx.r3.u32 = 0;
    return 0;
}

GUEST_FUNCTION_HOOK(sub_82B3D3F0, Hook_sub_82B3D3F0);

uint32_t Hook_sub_821E3950(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_821E3950");

    const uint32_t outStruct = ctx.r3.u32;
    const uint32_t r4_ptr    = ctx.r4.u32;
    const uint32_t offset    = ctx.r5.u32;
    const uint32_t limit     = ctx.r6.u32;

    constexpr uint32_t kAtomicAddr = 0x83496EB8;
    constexpr uint32_t kFallback   = 0x8209003F;

    uint32_t result = 0;

    // 🧼 Zero outStruct[0]
    if (g_memory.IsValidVirtualAddress(outStruct))
        g_memory.WriteU32(outStruct, 0);
    else {
        spdlog::error("❌ Invalid outStruct ptr: 0x{:08X}", outStruct);
        ctx.r3.u32 = outStruct;
        return outStruct;
    }

    // 🔁 Simulated atomic increment (lwarx / stwcx. loop)
    {
        // Not truly atomic, but fine for single-threaded emulator
        uint32_t val = g_memory.ReadU32(kAtomicAddr);
        g_memory.WriteU32(kAtomicAddr, val + 1);
    }

    // 📥 Load base pointer
    uint32_t basePtr = 0;

    if (g_memory.IsValidVirtualAddress(r4_ptr)) {
        basePtr = g_memory.ReadU32(r4_ptr);
    }

    if (!basePtr) {
        if (!g_memory.IsValidVirtualAddress(kFallback)) {
            spdlog::error("❌ Fallback address invalid at 0x{:08X}", kFallback);
            ctx.r3.u32 = outStruct;
            return outStruct;
        }
        basePtr = g_memory.ReadU32(kFallback);
    } else {
        if (!g_memory.IsValidVirtualAddress(basePtr)) {
            spdlog::error("❌ Invalid dereference of basePtr: 0x{:08X}", basePtr);
            ctx.r3.u32 = outStruct;
            return outStruct;
        }
        basePtr = g_memory.ReadU32(basePtr);
    }

    // 🔍 basePtr + offset check
    const uint32_t targetAddr = basePtr + offset;
    if (basePtr && g_memory.IsValidVirtualAddress(targetAddr)) {
        uint8_t val = g_memory.ReadU8(targetAddr);
        if (val != 0) {
            // Call sub_822079D8(ctx, basePtr, offset, limit)
            ctx.r3.u32 = outStruct;
            ctx.r4.u32 = basePtr;
            ctx.r5.u32 = offset;
            ctx.r6.u32 = limit;

            sub_822079D8(ctx, g_memory.base);
            result = ctx.r3.u32;
        }
    }

    // 🧹 If outStruct was modified, free/cleanup
    if (g_memory.ReadU32(outStruct) != 0) {
        ctx.r3.u32 = outStruct;
        sub_821C67D8(ctx, g_memory.base);
    }

    // ✅ Store final result
    if (result)
        g_memory.WriteU32(outStruct, result);

    ctx.r3.u32 = outStruct;
    return outStruct;
}

GUEST_FUNCTION_HOOK(sub_821E3950, Hook_sub_821E3950);

uint32_t Hook_sub_822079D8(PPCContext& ctx, uint8_t* mem) {
    spdlog::info("🔁 Hook_sub_822079D8");

    const uint32_t r3_in = ctx.r3.u32; // Unused input
    const uint32_t r4    = ctx.r4.u32; // Source string pointer
    const uint32_t r5    = ctx.r5.u32; // Size or -1 (sentinel for strlen)

    uint32_t result_ptr = 0;
    uint32_t copy_length = 0;

    // Calculate copy length safely
    if (r5 == static_cast<uint32_t>(-1)) {
        // strlen-like behavior, with max cap to prevent runaway
        constexpr uint32_t kMaxStringLength = 4096;
        while (copy_length < kMaxStringLength && g_memory.IsValidVirtualAddress(r4 + copy_length)) {
            if (g_memory.ReadU8(r4 + copy_length) == 0)
                break;
            ++copy_length;
        }

        // Reached cap without null terminator or invalid address
        if (copy_length >= kMaxStringLength) {
            spdlog::error("❌ Unterminated string or invalid memory in r4=0x{:08X}", r4);
            ctx.r3.u32 = 0;
            return 0;
        }
    } else {
        copy_length = r5;

        if (!g_memory.IsValidVirtualAddressRange(r4, copy_length)) {
            spdlog::error("❌ Invalid memory range: r4=0x{:08X}, len={}", r4, copy_length);
            ctx.r3.u32 = 0;
            return 0;
        }
    }

    // Allocate 0x10-byte struct via allocator
    ctx.r3.u32 = 0x10;
    sub_8221F388(ctx, mem);
    result_ptr = ctx.r3.u32;

    if (result_ptr == 0) {
        spdlog::error("❌ Allocation failed for result_ptr");
        ctx.r3.u32 = 0;
        return 0;
    }

    // Zero 0x0, 0x4, 0x8 fields
    g_memory.WriteU32(result_ptr + 0x0, 0);
    g_memory.WriteU32(result_ptr + 0x4, 0);
    g_memory.WriteU32(result_ptr + 0x8, 0);

    // Set up call to copy/transform function
    ctx.r3.u32 = result_ptr;
    ctx.r4.u32 = r4;
    ctx.r5.u32 = copy_length;
    sub_822088B0(ctx, mem);

    // Set initialized flag
    g_memory.WriteU32(result_ptr + 0xC, 1);

    ctx.r3.u32 = result_ptr;
    return result_ptr;
}

//GUEST_FUNCTION_HOOK(sub_822079D8, Hook_sub_822079D8);

uint32_t Hook_sub_82B3E0A8(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_82B3E0A8");

    const uint32_t thisPtr = ctx.r3.u32;
    const uint32_t r28 = thisPtr;
    uint32_t r31 = 0;
    uint32_t r30 = 0;

    uint32_t var_5C = 0;
    uint32_t var_60 = 0;
    uint32_t var_50 = 0;

    // Allocate base object (size 0x30)
    {
        PPCContext call = ctx;
        call.r3.u32 = 0x30;
        g_memory.FindFunction(0x8221F388)(call, g_memory.base);
        r31 = call.r3.u32;
    }

    if (r31 != 0) {
        // var_5C
        var_5C = g_memory.HostToGuest(g_userHeap.Alloc(4));
        g_memory.WriteU32(var_5C, 0);
        r30 |= (1 << 0);

        uint32_t r27 = 0;
        {
            PPCContext call = ctx;
            call.r3.u32 = var_5C;
            g_memory.FindFunction(0x82B3D3F0)(call, g_memory.base);
            const uint32_t objFromD3F0 = call.r3.u32;
            r27 = g_memory.ReadU32(objFromD3F0);
        }

        // var_60
        var_60 = g_memory.HostToGuest(g_userHeap.Alloc(4));
        g_memory.WriteU32(var_60, 0);
        r30 |= (1 << 1);

        const uint32_t objFrom44788 = [&]() {
            PPCContext call2 = ctx;
            call2.r3.u32 = var_60;
            g_memory.FindFunction(0x82B44788)(call2, g_memory.base);
            return g_memory.ReadU32(var_60);
        }();

        // var_50
        var_50 = g_memory.HostToGuest(g_userHeap.Alloc(4));
        g_memory.WriteU32(var_50, 0);
        r30 |= (1 << 2);

        {
            PPCContext call3 = ctx;
            call3.r3.u32 = r31;
            call3.r4.u32 = var_50;
            call3.r5.u32 = g_memory.IsValidVirtualAddressRange(objFrom44788, 4) ? objFrom44788 : 0;
            call3.r6.u32 = r27;
            g_memory.FindFunction(0x82B3E370)(call3, g_memory.base);
        }

        r30 |= (1 << 3);
    } else {
        r31 = 0;
    }

    g_memory.WriteU32(thisPtr, r31);

    // Call main destructor (vtable + 4)
    if (r31 != 0) {
        const uint32_t vtable = g_memory.ReadU32(r31);
        const uint32_t dtor = g_memory.ReadU32(vtable + 4);
        if (g_memory.IsValidVirtualAddress(dtor)) {
            PPCContext call = ctx;
            call.r3.u32 = r31;
            g_memory.FindFunction(dtor)(call, g_memory.base);
        }
    }

    // Destructor helper
    auto TryCallDestructor = [&](uint32_t ptr) {
        if (ptr && g_memory.IsValidVirtualAddressRange(ptr, 12)) {
            const uint32_t vtbl = g_memory.ReadU32(ptr);
            const uint32_t dtor = g_memory.ReadU32(vtbl + 8);
            if (g_memory.IsValidVirtualAddress(dtor)) {
                PPCContext call = ctx;
                call.r3.u32 = ptr;
                g_memory.FindFunction(dtor)(call, g_memory.base);
            }
        }
    };

    if (r30 & (1 << 2)) TryCallDestructor(g_memory.ReadU32(var_50));
    if (r30 & (1 << 1)) TryCallDestructor(g_memory.ReadU32(var_60));
    if (r30 & (1 << 0)) TryCallDestructor(g_memory.ReadU32(var_5C));

    ctx.r3.u32 = r28;
    return r28;
}

GUEST_FUNCTION_HOOK(sub_82B3E0A8, Hook_sub_82B3E0A8);


uint32_t Hook_sub_82B44788(PPCContext& ctx, uint8_t* mem) {
    const uint32_t out_ptr = ctx.r3.u32;
    const uint32_t cs_struct = ctx.r1.u32 - 0x20;

    // Step 1: Prepare critical section via sub_82B44BC8(out_ptr)
    ctx.r3.u32 = out_ptr;
    sub_82B44BC8(ctx, mem);
    const uint32_t arg_for_cs = ctx.r3.u32;

    // Step 2: Initialize critical section: sub_82200688(cs_struct, arg_for_cs, 0)
    ctx.r3.u32 = cs_struct;
    ctx.r4.u32 = arg_for_cs;
    ctx.r5.u32 = 0;
    sub_82200688(ctx, mem);

    // Step 3: Allocate or retrieve global object
    constexpr uint32_t kGlobalObjPtr = 0x83496ED8;
    uint32_t global_obj = g_memory.ReadU32(kGlobalObjPtr);

    if (!global_obj) {
        ctx.r3.u32 = 0x1A0;
        sub_8221F388(ctx, mem);  // Allocates global object

        void* host_obj = reinterpret_cast<void*>(ctx.r3.u32);
        global_obj = g_memory.HostToGuest(host_obj);  // Convert to guest pointer

        if (global_obj) {
            ctx.r3.u32 = global_obj;
            sub_82B44890(ctx, mem);  // Initializes object

            host_obj = reinterpret_cast<void*>(ctx.r3.u32);
            global_obj = g_memory.HostToGuest(host_obj);  // Update guest ptr after init
        }

        g_memory.WriteU32(kGlobalObjPtr, global_obj);
    }

    // Step 4: Initialize or validate global object
    sub_82B386B8(ctx, mem);
    const uint8_t init_result = ctx.r3.u32 & 0xFF;

    if (!init_result) {
        // Initialization failed: call destructor if valid
        global_obj = g_memory.ReadU32(kGlobalObjPtr);
        if (global_obj) {
            const uint32_t vtable = g_memory.ReadU32(global_obj);
            const uint32_t dtor = g_memory.ReadU32(vtable);

            PPCContext dtor_ctx = ctx;
            dtor_ctx.r3.u32 = global_obj;
            dtor_ctx.r4.u32 = 1;
            reinterpret_cast<void (*)(PPCContext&, uint8_t*)>(dtor)(dtor_ctx, mem);
        }

        g_memory.WriteU32(kGlobalObjPtr, 0);
        ctx.r3.u32 = out_ptr;
        ctx.r4.u32 = 0;
        sub_82366210(ctx, mem);  // Cleanup
        ctx.r3.u32 = out_ptr;
        return out_ptr;
    }

    // Step 5: Store member_ptr in output and ensure vtable
    uint32_t member_ptr = 0;
    if (global_obj) {
        void* global_host = g_memory.Translate(global_obj);
        void* member_host = reinterpret_cast<uint8_t*>(global_host) + 0x14;
        member_ptr = g_memory.HostToGuest(member_host);
    }

    g_memory.WriteU32(out_ptr, member_ptr);

    if (member_ptr) {
        uint32_t vtable = g_memory.ReadU32(member_ptr);

        if (!vtable) {
            // Create fallback vtable with one method
            void* vtbl_mem = g_userHeap.Alloc(8);
            if (vtbl_mem) {
                const uint32_t guest_vtbl = g_memory.HostToGuest(vtbl_mem);
                std::memset(vtbl_mem, 0, 8);
                *reinterpret_cast<be<uint32_t>*>(reinterpret_cast<uint8_t*>(vtbl_mem) + 4) = 0x822397E0;
                g_memory.WriteU32(member_ptr, guest_vtbl);
                vtable = guest_vtbl;

                spdlog::info("🧩 Installed fallback vtable @ 0x{:08X} with method = 0x{:08X}", guest_vtbl, 0x822397E0);
            } else {
                spdlog::error("❌ Failed to allocate fallback vtable");
            }
        }

        // Call method at vtable + 4 if it exists
        const uint32_t method = vtable ? g_memory.ReadU32(vtable + 4) : 0;
        if (method) {
            PPCContext call = ctx;
            call.r3.u32 = member_ptr;
            reinterpret_cast<void (*)(PPCContext&, uint8_t*)>(method)(call, mem);
        } else {
            spdlog::warn("⚠️ Method @ vtable+4 is null. Skipping call.");
        }
    }

    // Step 6: Leave critical section if acquired
    const uint8_t cs_flag = g_memory.ReadU8(ctx.r1.u32 - 0x1C);
    if (cs_flag) {
        const uint32_t cs = g_memory.ReadU32(ctx.r1.u32 - 0x20);
        RtlLeaveCriticalSection(reinterpret_cast<XRTL_CRITICAL_SECTION*>(mem + cs));
    }

    ctx.r3.u32 = out_ptr;
    return out_ptr;
}

GUEST_FUNCTION_HOOK(sub_82B44788, Hook_sub_82B44788);

uint32_t Hook_sub_82B386B8_Merged(PPCContext& ctx) {
    static bool hasInitializedOnce = false;
    const uint32_t this_guest = ctx.r3.u32;
    void* this_ptr = g_memory.base + this_guest;

    spdlog::info("🔁 Hook_sub_82B386B8_Merged(this=0x{:08X})", this_guest);

    if (!g_memory.IsValidVirtualAddress(this_guest)) {
        spdlog::error("❌ Invalid `this` pointer: 0x{:08X}", this_guest);
        ctx.r3.u32 = 0;
        return 0;
    }

    if (g_memory.ReadU32(this_guest + 0xC) == 1) {
        spdlog::info("🔃 Already initialized (status == 1)");
        ctx.r3.u32 = 0;
        return 0;
    }

    g_memory.WriteU32(this_guest + 0xC, 1);

    uint32_t handle = g_memory.ReadU32(this_guest + 0x4);
    const bool forceReinit = !hasInitializedOnce;

    if (!forceReinit && handle != 0xFFFFFFFF) {
        spdlog::info("📎 Reusing existing handle: 0x{:08X}", handle);
        ctx.r3.u32 = 1;
        return 1;
    }

    uint32_t obj_ptr = g_memory.ReadU32(this_guest + 0x8);
    if (!g_memory.IsValidVirtualAddress(obj_ptr) || obj_ptr == 0) {
        auto [guest_obj, guest_vtbl] = InstallVtableCallbackObjectWithVtable(0x822397E0, "B386B8.obj");
        obj_ptr = guest_obj;
        g_memory.WriteU32(this_guest + 0x8, obj_ptr);
        spdlog::info("🔧 Installed guest object @ 0x{:08X}, vtbl @ 0x{:08X}", guest_obj, guest_vtbl);
    }

    uint32_t context_ptr = g_memory.ReadU32(this_guest + 0x10);
    if (!g_memory.IsValidVirtualAddress(context_ptr) || context_ptr == 0xFFFFFFFF) {
        void* ctx_block = g_userHeap.Alloc(0x20);
        if (!ctx_block) {
            spdlog::error("❌ Failed to allocate guest callback context");
            g_memory.WriteU32(this_guest + 0xC, 2);
            ctx.r3.u32 = 0;
            return 0;
        }

        std::memset(ctx_block, 0, 0x20);
        const uint32_t guest_ctx = g_memory.HostToGuest(ctx_block);
        g_memory.WriteU32(this_guest + 0x10, guest_ctx);
        context_ptr = guest_ctx;

        spdlog::info("📦 Allocated guest context @ 0x{:08X}", guest_ctx);
    }

    void* tid_mem = g_userHeap.Alloc(4);
    if (!tid_mem) {
        spdlog::error("❌ Failed to allocate guest threadId memory");
        ctx.r3.u32 = 0;
        return 0;
    }
    const uint32_t guestTidAddr = g_memory.HostToGuest(tid_mem);
    g_memory.WriteU32(guestTidAddr, 0);

    uint32_t dwCreationFlags = 0;
    if (context_ptr != static_cast<uint32_t>(-1)) {
        dwCreationFlags = (1u << context_ptr) << 24;
    }

    void* handle_mem = g_userHeap.Alloc(4);
    if (!handle_mem) {
        spdlog::error("❌ Failed to allocate guest handle memory");
        ctx.r3.u32 = 0;
        return 0;
    }
    const uint32_t guestHandleAddr = g_memory.HostToGuest(handle_mem);

    const uint32_t xApiThreadStartup = 0x82CCA400;
    const uint32_t startFn = 0x82B38598;
    const uint32_t param = obj_ptr;

    ExCreateThread(
        reinterpret_cast<be<uint32_t>*>(handle_mem),
        0,
        reinterpret_cast<be<uint32_t>*>(tid_mem),
        xApiThreadStartup,
        startFn,
        param,
        dwCreationFlags
    );

    handle = g_memory.ReadU32(guestHandleAddr);

    if (handle) {
        g_memory.WriteU32(this_guest + 0x4, handle);
    } else {
        g_memory.WriteU32(this_guest + 0x4, 0xFFFFFFFF);
        g_memory.WriteU32(this_guest + 0xC, 2);
        ctx.r3.u32 = 0;
        return 0;
    }

    hasInitializedOnce = true;
    ctx.r3.u32 = 1;
    return 1;
}

GUEST_FUNCTION_HOOK(sub_82B386B8, Hook_sub_82B386B8_Merged);

uint32_t Hook_sub_82B3E370(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_82B3E370");

    const uint32_t thisPtr = ctx.r3.u32;
    const uint32_t r4 = ctx.r4.u32;
    const uint32_t r5 = ctx.r5.u32;
    const uint32_t r6 = ctx.r6.u32;

    constexpr uint32_t kVtableAddr = 0x820F8BBC;
    constexpr uint32_t kTypeId = 7;

    spdlog::info("📥 this = 0x{:08X}, r4 = 0x{:08X}, r5 = 0x{:08X}, r6 = 0x{:08X}", thisPtr, r4, r5, r6);

    // Set up the object
    g_memory.WriteU32(thisPtr + 0x00, kVtableAddr);
    g_memory.WriteU32(thisPtr + 0x04, 0);
    g_memory.WriteU32(thisPtr + 0x1C, 0);         // var_50
    g_memory.WriteU32(thisPtr + 0x20, kTypeId);   // Type ID
    g_memory.WriteU16(thisPtr + 0x0C, 0);         // Clear short
    g_memory.WriteU32(thisPtr + 0x24, r5);        // Store arg2
    g_memory.WriteU32(thisPtr + 0x28, r6);        // Store arg3

    // Allocate temp stack object (0x50 bytes)
    auto [temp_host, temp_guest] = g_memory.AllocGuestPair(0x50);
    std::memset(temp_host, 0, 0x50);
    spdlog::info("📦 Allocated temp struct at 0x{:08X} (host = {})", temp_guest, fmt::ptr(temp_host));

    // Call sub_82B3DFB8(&temp, r4)
    {
        PPCContext callCtx = {};
        callCtx.r3.u32 = temp_guest;
        callCtx.r4.u32 = r4;
        g_memory.FindFunction(0x82B3DFB8)(callCtx, g_memory.base);
    }

    // Call sub_822F6380(thisPtr+8, &temp, 0, -1)
    {
        spdlog::info("🔍 Calling sub_822F6380(r3=0x{:08X}, temp=0x{:08X})", thisPtr + 0x08, temp_guest);
        PPCContext callCtx = {};
        callCtx.r3.u32 = thisPtr + 0x08;
        callCtx.r4.u32 = temp_guest;
        callCtx.r5.u32 = 0;
        callCtx.r6.u32 = static_cast<uint32_t>(-1);
        g_memory.FindFunction(0x822F6380)(callCtx, g_memory.base);
    }

    // Read temp.var_38 (offset 0x28) and maybe call cleanup
    const uint32_t value_28 = g_memory.ReadU32(temp_guest + 0x28);
    spdlog::info("🔎 temp[0x28] = 0x{:08X}", value_28);
    if (value_28 >= 8) {
        const uint32_t cleanup_arg = g_memory.ReadU32(temp_guest + 0x0C);
        spdlog::info("🧹 Cleanup with sub_8221BE68(r3=0x{:08X})", cleanup_arg);
        PPCContext callCtx = {};
        callCtx.r3.u32 = cleanup_arg;
        g_memory.FindFunction(0x8221BE68)(callCtx, g_memory.base);
    }

    // If r5 != 0 → call virtual function
    if (r5 != 0) {
        if (!g_memory.IsValidVirtualAddressRange(r5, 8)) {
            spdlog::error("❌ r5 is not a valid guest pointer! r5 = 0x{:08X}", r5);
        } else {
            const uint32_t vtable = g_memory.ReadU32(r5);
            spdlog::info("📦 r5 = 0x{:08X} → vtable = 0x{:08X}", r5, vtable);

            if (!g_memory.IsValidVirtualAddressRange(vtable + 4, 4)) {
                spdlog::error("❌ Vtable method pointer invalid! vtable = 0x{:08X}", vtable);
            } else {
                const uint32_t method = g_memory.ReadU32(vtable + 4);
                spdlog::info("🧪 Virtual method from r5 = 0x{:08X}", method);

                if (g_memory.IsValidVirtualAddress(method)) {
                    PPCContext callCtx = {};
                    callCtx.r3.u32 = r5;
                    g_memory.FindFunction(method)(callCtx, g_memory.base);
                } else {
                    spdlog::error("❌ Method address from r5 is invalid: 0x{:08X}", method);
                }
            }
        }
    }

    // If r6 != 0 → call virtual function
    if (r6 != 0) {
        if (!g_memory.IsValidVirtualAddressRange(r6, 8)) {
            spdlog::error("❌ r6 is not a valid guest pointer! r6 = 0x{:08X}", r6);
        } else {
            const uint32_t vtable = g_memory.ReadU32(r6);
            spdlog::info("📦 r6 = 0x{:08X} → vtable = 0x{:08X}", r6, vtable);

            if (!g_memory.IsValidVirtualAddressRange(vtable + 4, 4)) {
                spdlog::error("❌ Vtable method pointer invalid! vtable = 0x{:08X}", vtable);
            } else {
                const uint32_t method = g_memory.ReadU32(vtable + 4);
                spdlog::info("🧪 Virtual method from r6 = 0x{:08X}", method);

                if (g_memory.IsValidVirtualAddress(method)) {
                    PPCContext callCtx = {};
                    callCtx.r3.u32 = r6;
                    g_memory.FindFunction(method)(callCtx, g_memory.base);
                } else {
                    spdlog::error("❌ Method address from r6 is invalid: 0x{:08X}", method);
                }
            }
        }
    }

    // Call sub_82375020(thisPtr + 0x2C)
    {
        spdlog::info("📤 Final call: sub_82375020(r3=0x{:08X})", thisPtr + 0x2C);
        PPCContext callCtx = {};
        callCtx.r3.u32 = thisPtr + 0x2C;
        g_memory.FindFunction(0x82375020)(callCtx, g_memory.base);
    }

    ctx.r3.u32 = thisPtr;
    spdlog::info("✅ Hook_sub_82B3E370 complete → returning 0x{:08X}", thisPtr);
    return thisPtr;
}

GUEST_FUNCTION_HOOK(sub_82B3E370, Hook_sub_82B3E370);

uint32_t Hook_sub_82B3DFB8(PPCContext& ctx, uint8_t* mem) {
    spdlog::info("🔁 Hook_sub_82B3DFB8");

    const uint32_t out_ptr = ctx.r3.u32;
    const uint32_t arg_ptr = ctx.r4.u32;
    spdlog::info("📥 Input: out_ptr = 0x{:08X}, arg_ptr = 0x{:08X}", out_ptr, arg_ptr);

    if (!g_memory.IsValidVirtualAddress(arg_ptr)) {
        spdlog::error("❌ Invalid arg_ptr: 0x{:08X}", arg_ptr);
        ctx.r3.u32 = out_ptr;
        return out_ptr;
    }

    const uint32_t value_at_0x18 = g_memory.ReadU32(arg_ptr + 0x18);
    spdlog::info("🔎 *(arg_ptr + 0x18) = {}", value_at_0x18);

    uint32_t working_ptr = 0;
    if (value_at_0x18 >= 8) {
        working_ptr = g_memory.ReadU32(arg_ptr + 0x4);
        spdlog::info("📦 value >= 8 → working_ptr = *(arg_ptr + 0x4) = 0x{:08X}", working_ptr);

        if (working_ptr == 0 || !g_memory.IsValidVirtualAddress(working_ptr)) {
            spdlog::warn("⚠️ working_ptr is null or invalid → fallback to arg_ptr + 4");
            working_ptr = arg_ptr + 0x4;
        }
    } else {
        working_ptr = arg_ptr + 0x4;
        spdlog::info("🔁 value < 8 → fallback working_ptr = arg_ptr + 4 = 0x{:08X}", working_ptr);
    }

    // Dump UTF-16 string at working_ptr
    if (g_memory.IsValidVirtualAddress(working_ptr)) {
        std::u16string str;
        for (int i = 0; i < 64; i += 2) {
            uint16_t ch = g_memory.ReadU16(working_ptr + i);
            if (ch == 0) break;
            str += static_cast<char16_t>(ch);
        }
        spdlog::info("🧵 working_ptr string (UTF-16): {}", std::string(str.begin(), str.end()));
    }

    // Constant prefix: "game:\\"
    static const uint16_t kGamePrefix[] = { 'g','a','m','e',':','\\',0 };
    const auto [prefix_host, kGamePrefixStr] = g_memory.AllocGuestPair(sizeof(kGamePrefix));
    std::memcpy(prefix_host, kGamePrefix, sizeof(kGamePrefix));
    spdlog::debug("📦 Allocated kGamePrefix @ guest=0x{:08X}", kGamePrefixStr);

    // Constant lookup table
    static const uint8_t kLookupTableData[] = {
        0x00, 0x3A, 0x00, 0x00,
        'I','n','i','t','i','a','l','L','o','a','d','S','e','t','t','i','n','g','s','.','t','x','t', 0x00,
        's','c','e','n','a','r','i','o','s','.','l','i','s','t', 0x00,
        'l','e','v','e','l',':','\'', 0x00
    };
    const auto [table_host, kLookupTableBase] = g_memory.AllocGuestPair(sizeof(kLookupTableData));
    std::memcpy(table_host, kLookupTableData, sizeof(kLookupTableData));
    spdlog::debug("📦 Allocated kLookupTable @ guest=0x{:08X}", kLookupTableBase);

    // Hashing function
    spdlog::info("🔍 Calling sub_82CAAA68(r3=0x{:08X}, r4=0x{:08X})", working_ptr, kLookupTableBase);
    PPCContext call_ctx_hash = {};
    call_ctx_hash.r3.u32 = working_ptr;
    call_ctx_hash.r4.u32 = kLookupTableBase;
    g_memory.FindFunction(0x82CAAA68)(call_ctx_hash, mem);

    const uint32_t hash_result = call_ctx_hash.r3.u32;
    const uint32_t hash_addr = working_ptr + (hash_result << 1);
    spdlog::info("🔑 hash_result = {}, hash_addr = 0x{:08X}", hash_result, hash_addr);

    if (!g_memory.IsValidVirtualAddress(hash_addr) || g_memory.ReadU16(hash_addr) == 0) {
        spdlog::info("🔍 No hash match → fallback path");

        const uint32_t guest60 = g_memory.AllocateTemp(0x40);
        const uint32_t guest40 = g_memory.AllocateTemp(0x40);
        std::memset(g_memory.Translate(guest60), 0, 0x40);
        std::memset(g_memory.Translate(guest40), 0, 0x40);
        spdlog::info("🆕 Temp alloc guest60 = 0x{:08X}, guest40 = 0x{:08X}", guest60, guest40);

        {
            PPCContext ctx1 = {};
            ctx1.r3.u32 = guest60;
            ctx1.r4.u32 = kGamePrefixStr;
            g_memory.FindFunction(0x822F5150)(ctx1, mem);
            spdlog::debug("🔧 Called sub_822F5150(guest60, kGamePrefix)");
        }

        {
            PPCContext ctx2 = {};
            ctx2.r3.u32 = guest60;
            g_memory.FindFunction(0x822F2238)(ctx2, mem);
            spdlog::debug("🔧 Called sub_822F2238(guest60)");
        }

        {
            PPCContext ctx3 = {};
            ctx3.r3.u32 = guest40;
            ctx3.r4.u32 = guest60;
            ctx3.r5.u32 = arg_ptr;
            g_memory.FindFunction(0x82372510)(ctx3, mem);
            spdlog::debug("🔧 Called sub_82372510(guest40, guest60, arg_ptr)");
        }

        g_memory.WriteU32(out_ptr + 0x14, 0);
        g_memory.WriteU32(out_ptr + 0x18, 7);
        g_memory.WriteU16(out_ptr + 0x04, 0);
        spdlog::debug("🧹 Cleared out_ptr fields [0x14, 0x18, 0x04]");

        // This is the one using guest40 as input
        {
            PPCContext ctx4 = {};
            ctx4.r3.u32 = out_ptr;
            ctx4.r4.u32 = guest40;
            ctx4.r5.u32 = 0;
            ctx4.r6.u32 = static_cast<uint32_t>(-1);
            g_memory.FindFunction(0x822F6380)(ctx4, mem);
            spdlog::debug("📥 Called sub_822F6380(out_ptr, guest40)");
        }

        // Defensive cleanup
        g_memory.WriteU32(out_ptr + 0x0C, 0);
        g_memory.WriteU32(out_ptr + 0x28, 0);
        spdlog::debug("🛡️ Cleared out_ptr + 0x0C and 0x28");
    } else {
        const uint16_t hash_value = g_memory.ReadU16(hash_addr);
        spdlog::info("✅ Fast-path match: hash_value = 0x{:04X}", hash_value);

        g_memory.WriteU32(out_ptr + 0x14, 0);
        g_memory.WriteU32(out_ptr + 0x18, 7);
        g_memory.WriteU16(out_ptr + 0x04, 0);

        PPCContext ctx_fast = {};
        ctx_fast.r3.u32 = out_ptr;
        ctx_fast.r4.u32 = arg_ptr;
        ctx_fast.r5.u32 = 0;
        ctx_fast.r6.u32 = static_cast<uint32_t>(-1);
        g_memory.FindFunction(0x822F6380)(ctx_fast, mem);
        spdlog::debug("🚀 Fast-path sub_822F6380(out_ptr, arg_ptr)");
    }

    ctx.r3.u32 = out_ptr;
    spdlog::info("🏁 Finished Hook_sub_82B3DFB8 → returning 0x{:08X}", out_ptr);
    return out_ptr;
}

GUEST_FUNCTION_HOOK(sub_82B3DFB8, Hook_sub_82B3DFB8);

uint32_t Hook_sub_82CAAA68(PPCContext& ctx, uint8_t*) {
    const uint32_t str1_guest = ctx.r3.u32;
    const uint32_t str2_guest = ctx.r4.u32;

    spdlog::info("🔁 Hook_sub_82CAAA68(str1=0x{:08X}, str2=0x{:08X})", str1_guest, str2_guest);

    // Fail-safe: ensure both pointers are at least readable
    if (!g_memory.IsValidVirtualAddress(str1_guest) || !g_memory.IsValidVirtualAddress(str2_guest)) {
        spdlog::error("❌ Invalid input pointer(s): str1=0x{:08X}, str2=0x{:08X}", str1_guest, str2_guest);
        ctx.r3.u32 = 0;
        return 0;
    }

    // Read str1 into a vector until null
    std::vector<uint16_t> str1;
    for (uint32_t addr = str1_guest; g_memory.IsValidVirtualAddress(addr); addr += 2) {
        uint16_t val = g_memory.ReadU16(addr);
        if (val == 0) break;
        str1.push_back(val);
    }

    if (str1.empty()) {
        ctx.r3.u32 = 0;
        return 0;
    }

    // Outer loop: iterate over each null-terminated UTF-16 string in str2 list
    uint32_t str2_ptr = str2_guest;
    while (true) {
        std::vector<uint16_t> entry;
        uint32_t cur_ptr = str2_ptr;

        // Read one null-terminated UTF-16 string into `entry`
        while (g_memory.IsValidVirtualAddress(cur_ptr)) {
            uint16_t ch = g_memory.ReadU16(cur_ptr);
            cur_ptr += 2;
            if (ch == 0) break;
            entry.push_back(ch);
        }

        // If it's the end of the list (double-null), stop
        if (entry.empty()) {
            ctx.r3.u32 = 0;
            return 0;
        }

        // Compare `entry` with prefix of `str1`
        if (entry.size() <= str1.size() &&
            std::equal(entry.begin(), entry.end(), str1.begin())) {
            // Return offset in words (not bytes) from str1 base
            uint32_t offset = static_cast<uint32_t>(entry.size());
            ctx.r3.u32 = offset;
            return offset;
        }

        // Move to next entry (skip over this string's null terminator)
        str2_ptr = cur_ptr;
    }

    // Not reachable
    ctx.r3.u32 = 0;
    return 0;
}

GUEST_FUNCTION_HOOK(sub_82CAAA68, Hook_sub_82CAAA68);

uint32_t Hook_sub_83021010(PPCContext& ctx) {
    spdlog::info("🔁 Hook_sub_83021010");
}

GUEST_FUNCTION_HOOK(sub_83021010, Hook_sub_83021010);

// === Stub imports ===
GUEST_FUNCTION_STUB(__imp__vsprintf);
GUEST_FUNCTION_STUB(__imp___vsnprintf);
GUEST_FUNCTION_STUB(__imp__sprintf);
GUEST_FUNCTION_STUB(__imp___snprintf);
GUEST_FUNCTION_STUB(__imp___snwprintf);
GUEST_FUNCTION_STUB(__imp__vswprintf);
GUEST_FUNCTION_STUB(__imp___vscwprintf);
GUEST_FUNCTION_STUB(__imp__swprintf);

