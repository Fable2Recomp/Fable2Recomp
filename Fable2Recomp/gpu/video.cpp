#include "video.h"
#include "../stdafx.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
#include <vulkan/vulkan.h>
#include <array>
#include <chrono>

// Global state initialization
RenderState g_renderState = {};
std::vector<FrameResources> g_frameResources;
std::unique_ptr<RenderInterface> g_interface;
std::unique_ptr<RenderDevice> g_device;
std::unique_ptr<RenderCommandQueue> g_queue;
std::vector<std::unique_ptr<RenderCommandList>> g_commandLists;
std::vector<std::unique_ptr<RenderCommandFence>> g_commandFences;
std::vector<std::unique_ptr<RenderQueryPool>> g_queryPools;

// Performance profilers
static Profiler g_gpuFrameProfiler;
static Profiler g_presentProfiler;
static Profiler g_frameFenceProfiler;
static Profiler g_swapChainAcquireProfiler;

// Window and swapchain
static SDL_Window* g_window = nullptr;
static VkSurfaceKHR g_surface = VK_NULL_HANDLE;
static std::unique_ptr<RenderSwapChain> g_swapChain;
static uint32_t g_frame = 0;
static uint32_t g_nextFrame = 1;

// Profiler implementation
void Profiler::Begin() {
    start = std::chrono::steady_clock::now();
}

void Profiler::End() {
    value = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count();
}

void Profiler::Set(double v) {
    value = v;
}

void Profiler::Reset() {
    End();
    Begin();
}

double Profiler::UpdateAndReturnAverage() {
    static uint32_t index = 0;
    values[index++ % 60] = value;
    return std::accumulate(values, values + 60, 0.0) / 60;
}

bool Video::CreateHostDevice(const char* sdlVideoDriver) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
        return false;
    }

    // Create window
    g_window = SDL_CreateWindow(
        "Fable 2 Recomp",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        s_viewportWidth, s_viewportHeight,
        SDL_WINDOW_VULKAN | SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE
    );

    if (!g_window) {
        fprintf(stderr, "Failed to create window: %s\n", SDL_GetError());
        return false;
    }

    // Initialize ImGui
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui::StyleColorsDark();

    // Create Vulkan instance and device
    g_interface = std::make_unique<VulkanInterface>(g_window);
    if (!g_interface || !g_interface->isValid()) {
        fprintf(stderr, "Failed to create Vulkan interface\n");
        return false;
    }

    g_device = g_interface->createDevice("");
    if (!g_device || !g_device->isValid()) {
        fprintf(stderr, "Failed to create Vulkan device\n");
        return false;
    }

    // Create command queue and pools
    g_queue = g_device->createCommandQueue(RenderCommandListType::GRAPHICS);
    if (!g_queue) {
        fprintf(stderr, "Failed to create command queue\n");
        return false;
    }

    // Initialize frame resources
    g_frameResources.resize(NUM_FRAMES);
    g_commandLists.resize(NUM_FRAMES);
    g_commandFences.resize(NUM_FRAMES);
    g_queryPools.resize(NUM_FRAMES);

    for (size_t i = 0; i < NUM_FRAMES; i++) {
        g_commandLists[i] = g_device->createCommandList(RenderCommandListType::GRAPHICS);
        g_commandFences[i] = g_queue->createCommandFence();
        g_queryPools[i] = g_device->createQueryPool(RenderQueryType::TIMESTAMP, NUM_QUERIES);
    }

    // Create swapchain
    if (!CreateSwapChain()) {
        fprintf(stderr, "Failed to create swapchain\n");
        return false;
    }

    // Initialize ImGui Vulkan implementation
    if (!InitImGui()) {
        fprintf(stderr, "Failed to initialize ImGui\n");
        return false;
    }

    return true;
}

void Video::WaitForGPU() {
    g_device->waitIdle();
}

void Video::Present() {
    g_presentProfiler.Begin();

    // End ImGui frame
    ImGui::Render();
    RenderImGui();

    // Present
    g_swapChain->present(g_renderState.imageIndex, nullptr, 0);
    g_frame = g_nextFrame;
    g_nextFrame = (g_nextFrame + 1) % NUM_FRAMES;

    g_presentProfiler.End();
}

void Video::BeginFrame() {
    g_gpuFrameProfiler.Begin();

    // Wait for previous frame
    g_queue->waitForCommandFence(g_commandFences[g_frame].get());

    // Acquire next image
    g_swapChainAcquireProfiler.Begin();
    uint32_t imageIndex;
    if (!g_swapChain->acquireTexture(nullptr, &imageIndex)) {
        if (g_swapChain->needsResize()) {
            g_renderState.framebufferResized = true;
        }
        return;
    }
    g_renderState.imageIndex = imageIndex;
    g_swapChainAcquireProfiler.End();

    // Begin command list
    BeginCommandList();
}

void Video::EndFrame() {
    // End command list
    EndCommandList();

    // Submit command list
    g_queue->executeCommandLists(g_commandLists[g_frame].get(), g_commandFences[g_frame].get());

    g_gpuFrameProfiler.End();
}

void Video::BeginCommandList() {
    g_commandLists[g_frame]->begin();
}

void Video::EndCommandList() {
    g_commandLists[g_frame]->end();
}

bool Video::CreateSwapChain() {
    SDL_Vulkan_CreateSurface(g_window, static_cast<VkInstance>(g_interface->getNativeInterface()), &g_surface);
    
    g_swapChain = g_queue->createSwapChain(
        reinterpret_cast<RenderWindow>(g_window),
        NUM_FRAMES,
        RenderFormat::B8G8R8A8_UNORM,
        2  // Max frame latency
    );

    if (!g_swapChain || g_swapChain->isEmpty()) {
        return false;
    }

    g_renderState.swapchainFormat = VK_FORMAT_B8G8R8A8_UNORM;
    g_renderState.swapchainExtent = {g_swapChain->getWidth(), g_swapChain->getHeight()};
    g_renderState.vsyncEnabled = true;

    return true;
}

void Video::DestroySwapChain() {
    if (g_swapChain) {
        g_device->waitIdle();
        g_swapChain.reset();
    }
}

bool Video::InitImGui() {
    ImGui_ImplSDL2_InitForVulkan(g_window);
    
    ImGui_ImplVulkan_InitInfo init_info = {};
    init_info.Instance = static_cast<VkInstance>(g_interface->getNativeInterface());
    init_info.PhysicalDevice = static_cast<VkPhysicalDevice>(g_device->getNativePhysicalDevice());
    init_info.Device = static_cast<VkDevice>(g_device->getNativeDevice());
    init_info.QueueFamily = g_queue->getFamilyIndex();
    init_info.Queue = static_cast<VkQueue>(g_queue->getNativeQueue());
    init_info.PipelineCache = VK_NULL_HANDLE;
    init_info.DescriptorPool = static_cast<VkDescriptorPool>(g_device->getNativeDescriptorPool());
    init_info.MinImageCount = NUM_FRAMES;
    init_info.ImageCount = NUM_FRAMES;
    init_info.MSAASamples = VK_SAMPLE_COUNT_1_BIT;
    init_info.Allocator = nullptr;
    init_info.CheckVkResultFn = nullptr;

    return ImGui_ImplVulkan_Init(&init_info, static_cast<VkRenderPass>(g_device->getNativeRenderPass()));
}

void Video::ShutdownImGui() {
    ImGui_ImplVulkan_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();
}

void Video::RenderImGui() {
    ImDrawData* draw_data = ImGui::GetDrawData();
    if (!draw_data) return;

    ImGui_ImplVulkan_RenderDrawData(draw_data, static_cast<VkCommandBuffer>(g_commandLists[g_frame]->getNativeCommandList()));
}

void Video::Shutdown() {
    WaitForGPU();
    ShutdownImGui();
    DestroySwapChain();
    
    g_queryPools.clear();
    g_commandFences.clear();
    g_commandLists.clear();
    g_queue.reset();
    g_device.reset();
    g_interface.reset();

    if (g_window) {
        SDL_DestroyWindow(g_window);
        g_window = nullptr;
    }

    SDL_Quit();
}

bool Video::IsInitialized() {
    return g_device && g_device->isValid();
}

bool Video::IsVSync() {
    return g_renderState.vsyncEnabled;
}

void Video::SetVSync(bool enabled) {
    if (g_swapChain) {
        g_swapChain->setVsyncEnabled(enabled);
        g_renderState.vsyncEnabled = enabled;
    }
}

void Video::ComputeViewportDimensions() {
    if (g_swapChain) {
        s_viewportWidth = g_swapChain->getWidth();
        s_viewportHeight = g_swapChain->getHeight();
    }
} 