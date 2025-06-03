#pragma once

#include <volk.h>

#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#include <ppc/ppc_context.h>

// Wrap the extern "C" properly
#ifdef __cplusplus
extern "C" {
#endif

void CopyShaderConstants(PPCContext& ctx);

#ifdef __cplusplus
}
#endif

namespace VideoVulkan {
    bool Init(SDL_Window* window);
    void Shutdown();

    void BeginFrame();
    void EndFrame();
    void PrecompilePipelines();
    void WaitForGPU();
    void WaitOnSwapChain();
    void UpdateViewport();
    void SubmitConstants(uint64_t guestAddress);

    VkInstance GetInstance();
    VkSurfaceKHR GetSurface();
    VkPhysicalDevice GetPhysicalDevice();
    VkDevice GetDevice();
    VkQueue GetGraphicsQueue();

    extern VkSemaphore g_imageAvailableSemaphore;
    extern VkSemaphore g_renderFinishedSemaphore;
    extern VkQueue g_presentQueue;

    alignas(16) extern uint8_t g_vulkanPushConstants[40];
    extern bool g_pushConstantsDirty;
}

