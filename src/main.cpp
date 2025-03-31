#include "stdafx.h"
#include "os/logger.h"
#include "kernel/kernel.h"
#include "cpu/ppc_integration.h"
#include "gpu/video.h"
#include "apu/audio.h"
#include "hid/hid.h"
#include "ui/game_window.h"
#include "user/config.h"

int main(int argc, char* argv[]) {
    // Initialize logger first
    xe::Logger::Initialize();
    LOG_INFO("Fable 2 Recompilation starting...");
    
    // Initialize subsystems
    if (!xe::Kernel::Initialize()) {
        LOG_ERROR("Failed to initialize kernel");
        return 1;
    }
    
    if (!xe::PPCIntegration::Initialize()) {
        LOG_ERROR("Failed to initialize PPC integration");
        return 1;
    }
    
    if (!xe::Video::Initialize()) {
        LOG_ERROR("Failed to initialize video");
        return 1;
    }
    
    if (!xe::Audio::Initialize()) {
        LOG_ERROR("Failed to initialize audio");
        return 1;
    }
    
    if (!xe::HID::Initialize()) {
        LOG_ERROR("Failed to initialize HID");
        return 1;
    }
    
    if (!xe::GameWindow::Initialize()) {
        LOG_ERROR("Failed to initialize game window");
        return 1;
    }
    
    // Main game loop
    bool running = true;
    while (running) {
        // Update subsystems
        xe::Kernel::Update();
        xe::PPCIntegration::Update();
        xe::Video::Update();
        xe::Audio::Update();
        xe::HID::Update();
        
        // Update game window
        if (!xe::GameWindow::Update()) {
            running = false;
        }
    }
    
    // Shutdown subsystems
    xe::GameWindow::Shutdown();
    xe::HID::Shutdown();
    xe::Audio::Shutdown();
    xe::Video::Shutdown();
    xe::PPCIntegration::Shutdown();
    xe::Kernel::Shutdown();
    
    // Shutdown logger last
    xe::Logger::Shutdown();
    
    return 0;
} 