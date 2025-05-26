#include "video.h"
#include <SDL3/SDL.h>
#include <spdlog/spdlog.h>

static SDL_Window* s_window = nullptr;
static SDL_Renderer* s_renderer = nullptr;

bool Video::CreateHostDevice(const char* sdlVideoDriver, bool graphicsApiRetry) {
    spdlog::info("CreateHostDevice called with driver: {}", sdlVideoDriver ? sdlVideoDriver : "default");

#ifdef _WIN32
    if (sdlVideoDriver && *sdlVideoDriver)
        _putenv_s("SDL_VIDEODRIVER", sdlVideoDriver);
#else
    if (sdlVideoDriver && *sdlVideoDriver)
        setenv("SDL_VIDEODRIVER", sdlVideoDriver, 1);
#endif

    if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0) {
        spdlog::error("SDL_InitSubSystem(SDL_INIT_VIDEO) failed: {}", SDL_GetError());
        return false;
    }

    s_window = SDL_CreateWindow("Fable2 Recompiled", 1280, 720, SDL_WINDOW_RESIZABLE);
    if (!s_window) {
        spdlog::error("SDL_CreateWindow failed: {}", SDL_GetError());
        return false;
    }

    s_renderer = SDL_CreateRenderer(s_window, nullptr);
    if (!s_renderer) {
        spdlog::error("SDL_CreateRenderer failed: {}", SDL_GetError());
        SDL_DestroyWindow(s_window);
        s_window = nullptr;
        return false;
    }

    spdlog::info("SDL window and renderer successfully created");
    return true;
}

void Video::ClearScreen() {
    if (!s_renderer) return;
    SDL_SetRenderDrawColor(s_renderer, 40, 40, 40, 255);
    SDL_RenderClear(s_renderer);
}

void Video::Present() {
    if (!s_renderer) return;
    SDL_RenderPresent(s_renderer);
}

void Video::StartPipelinePrecompilation() {
    spdlog::info("StartPipelinePrecompilation called (stub)");
}

void Video::WaitOnSwapChain() {}
void Video::WaitForGPU() {}
void Video::ComputeViewportDimensions() {}

