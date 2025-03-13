#include "stdafx.h"
#include "xbox.h"
#include "gpu/gpu.h"
#include "os/logger.h"
#include "vfs/vfs.h"
#include "data_loader.h"
#include <iostream>

using namespace xe;

// Forward declarations
namespace kernel { void Init(); void Shutdown(); }
namespace hid { void Init(); void Shutdown(); }
namespace ui { bool Init(); void Shutdown(); void Update(); void Render(); }
namespace patches { void Init(); void Shutdown(); void Apply(); }
namespace gpu { bool Init(); void Shutdown(); void Update(); void Render(); SDL_Window* GetWindow(); }
namespace apu { void Init(); void Shutdown(); void Update(); }

// Global running flag that can be accessed by other components
namespace {
    bool g_running = true;
}

// Getter/setter for the running flag
bool* GetRunningFlag() {
    return &g_running;
}

void TestAssetLoading() {
    auto& data_loader = xe::DataLoader::GetInstance();
    
    // Test loading startup config
    std::vector<uint8_t> startup_data;
    if (data_loader.LoadFile("startup.vfsconfig", startup_data)) {
        LOG("Startup config loaded successfully");
        LOGF("Startup config size: {} bytes", startup_data.size());
    } else {
        LOG_ERROR("Failed to load startup config");
    }
    
    // Test loading game scripts
    std::vector<uint8_t> scripts_data;
    if (data_loader.LoadFile("gamescripts.bnk", scripts_data)) {
        LOG("Game scripts loaded successfully");
        LOGF("Game scripts size: {} bytes", scripts_data.size());
    } else {
        LOG_ERROR("Failed to load game scripts");
    }
    
    // Test loading script file
    std::string script_content;
    if (data_loader.LoadScript("main.lua", script_content)) {
        LOG("Script file loaded successfully");
        LOGF("Script content length: {} characters", script_content.length());
    } else {
        LOG_ERROR("Failed to load script file");
    }
    
    // Test loading world data
    std::vector<uint8_t> world_data;
    if (data_loader.LoadWorldData("world.bin", world_data)) {
        LOG("World data loaded successfully");
        LOGF("World data size: {} bytes", world_data.size());
    } else {
        LOG_ERROR("Failed to load world data");
    }
    
    // Test loading recompiled code
    if (data_loader.LoadRecompiledCode("recompiled.bin")) {
        LOG("Recompiled code loaded successfully");
        const auto& code_data = data_loader.GetRecompiledCode("recompiled.bin");
        LOGF("Recompiled code size: {} bytes", code_data.size());
    } else {
        LOG_ERROR("Failed to load recompiled code");
    }
    
    // Test loading Xbox-specific data
    xe::X_FILE_ATTRIBUTES attrs = static_cast<xe::X_FILE_ATTRIBUTES>(0);
    if (data_loader.LoadXboxFile("test.xbe", &attrs)) {
        LOG("Xbox file attributes loaded successfully");
    } else {
        LOG_ERROR("Failed to load Xbox file attributes");
    }
    
    // Initialize a Unicode string structure
    xe::X_UNICODE_STRING unicode_str;
    unicode_str.reset();
    if (data_loader.LoadXboxString("test.txt", &unicode_str)) {
        LOG("Xbox Unicode string loaded successfully");
    } else {
        LOG_ERROR("Failed to load Xbox Unicode string");
    }
    
    // Initialize an overlapped structure
    xe::X_IO_STATUS_BLOCK overlapped_data;
    std::memset(&overlapped_data, 0, sizeof(xe::X_IO_STATUS_BLOCK));
    if (data_loader.LoadXboxOverlapped("test.ovl", &overlapped_data)) {
        LOG("Xbox overlapped structure loaded successfully");
    } else {
        LOG_ERROR("Failed to load Xbox overlapped structure");
    }
}

int main(int argc, char** argv) {
    // Initialize logger
    os::logger::Init();
    
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMEPAD) < 0) {
        std::string error = "Failed to initialize SDL: ";
        error += SDL_GetError();
        LOG_ERROR(error.c_str());
        return 1;
    }
    
    // Set SDL hints
    SDL_SetHint(SDL_HINT_VIDEO_X11_NET_WM_BYPASS_COMPOSITOR, "0");
    SDL_SetHint(SDL_HINT_RENDER_DRIVER, "vulkan");
    SDL_SetHint(SDL_HINT_RENDER_VSYNC, "1");
    
    // Initialize data loader
    if (!xe::DataLoader::GetInstance().Initialize("data")) {
        LOG_ERROR("Failed to initialize data loader");
        SDL_Quit();
        return 1;
    }
    
    // Initialize GPU subsystem
    if (!gpu::Init()) {
        LOG_ERROR("Failed to initialize GPU subsystem");
        SDL_Quit();
        return 1;
    }
    
    // Initialize UI module
    if (!ui::Init()) {
        LOG_ERROR("Failed to initialize UI module");
        gpu::Shutdown();
        SDL_Quit();
        return 1;
    }
    
    // Initialize other subsystems
    kernel::Init();
    hid::Init();
    patches::Init();
    apu::Init();
    
    // Test asset loading
    TestAssetLoading();
    
    // Main loop
    bool running = true;
    while (running) {
        // Process events
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
        }
        
        // Update subsystems
        apu::Update();
        gpu::Update();
        ui::Update();
        
        // Render frame
        gpu::Render();
        ui::Render();
    }
    
    // Cleanup
    apu::Shutdown();
    patches::Shutdown();
    hid::Shutdown();
    ui::Shutdown();
    gpu::Shutdown();
    kernel::Shutdown();
    
    SDL_Quit();
    
    return 0;
} 