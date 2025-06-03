#include "video.h"
#include "video_vulkan.h"
#include <kernel/function.h>
#include <kernel/heap.h>
#include <hid/hid.h>
#include <kernel/memory.h>
#include <kernel/xdbf.h>
#include <SDL3/SDL.h>
#include <spdlog/spdlog.h>

static SDL_Window* s_window = nullptr;

bool Video::CreateHostDevice(const char* sdlVideoDriver, bool graphicsApiRetry) {
    spdlog::info("CreateHostDevice called with driver: {}", sdlVideoDriver ? sdlVideoDriver : "default");

#ifdef _WIN32
    if (sdlVideoDriver && *sdlVideoDriver)
        _putenv_s("SDL_VIDEODRIVER", sdlVideoDriver);
#else
    if (sdlVideoDriver && *sdlVideoDriver)
        setenv("SDL_VIDEODRIVER", sdlVideoDriver, 1);
#endif

    if (SDL_WasInit(SDL_INIT_VIDEO) == 0) {
        if (SDL_Init(SDL_INIT_VIDEO) != 0) {
            spdlog::error("SDL_Init(SDL_INIT_VIDEO) failed: {}", SDL_GetError());
            return false;
        }
    }

    s_window = SDL_CreateWindow("Fable2 Recompiled", 1280, 720, SDL_WINDOW_RESIZABLE | SDL_WINDOW_VULKAN);
    if (!s_window) {
        spdlog::error("SDL_CreateWindow failed: {}", SDL_GetError());
        return false;
    }

    if (!VideoVulkan::Init(s_window)) {
        spdlog::error("Failed to initialize Vulkan backend.");
        return false;
    }

    return true;
}

void Video::ClearScreen() {
    VideoVulkan::BeginFrame();
}

void Video::Present() {
    VideoVulkan::EndFrame();
}

void Video::StartPipelinePrecompilation() {
    VideoVulkan::PrecompilePipelines(); // Placeholder
}

void Video::WaitOnSwapChain() {
    VideoVulkan::WaitOnSwapChain();
}

void Video::WaitForGPU() {
    VideoVulkan::WaitForGPU();
}

void Video::ComputeViewportDimensions() {
    VideoVulkan::UpdateViewport();
}
