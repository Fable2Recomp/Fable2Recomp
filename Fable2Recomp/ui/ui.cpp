#include "stdafx.h"
#include "xbox.h"
#include "../gpu/gpu.h"
#include "os/logger.h"
#include <SDL3/SDL.h>

// Forward declaration of the running flag getter
bool* GetRunningFlag();

namespace ui {

bool show_demo_window = true;
bool show_metrics = false;
bool is_initialized = false;

static void check_vk_result(VkResult err) {
    if (err == 0) return;
    LOGN_ERROR("Vulkan error occurred");
    if (err < 0) {
        abort();
    }
}

bool Init() {
    if (is_initialized) {
        LOGN_ERROR("Init called when already initialized");
        return false;
    }

    LOGN("Initializing UI module");

    // Initialize ImGui
    LOGN("Creating ImGui context");
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImPlot::CreateContext();

    // Setup Dear ImGui style
    LOGN("Setting ImGui style");
    ImGui::StyleColorsDark();

    // Configure ImGui
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls

    // Initialize ImGui SDL3 and Vulkan backends
    SDL_Window* window = gpu::GetWindow();
    if (!window) {
        LOGN_ERROR("Failed to get window from GPU module");
        ImPlot::DestroyContext();
        ImGui::DestroyContext();
        return false;
    }

    LOGN("Initializing ImGui SDL3 backend");
    if (!ImGui_ImplSDL3_InitForVulkan(window)) {
        LOGN_ERROR("Failed to initialize ImGui SDL3 backend");
        ImPlot::DestroyContext();
        ImGui::DestroyContext();
        return false;
    }

    // Initialize ImGui Vulkan
    LOGN("Preparing ImGui Vulkan initialization");
    ImGui_ImplVulkan_InitInfo init_info = {};
    init_info.Instance = gpu::GetInstance();
    init_info.PhysicalDevice = gpu::GetPhysicalDevice();
    init_info.Device = gpu::GetDevice();
    init_info.QueueFamily = gpu::GetGraphicsQueueFamily();
    init_info.Queue = gpu::GetGraphicsQueue();
    init_info.DescriptorPool = gpu::GetDescriptorPool();
    init_info.RenderPass = gpu::GetRenderPass();
    init_info.PipelineCache = gpu::GetPipelineCache();
    init_info.MinImageCount = 2;
    init_info.ImageCount = 2;
    init_info.MSAASamples = VK_SAMPLE_COUNT_1_BIT;
    init_info.Allocator = nullptr;  // We're using VMA instead of direct Vulkan allocation
    init_info.CheckVkResultFn = check_vk_result;
    init_info.MinAllocationSize = 1024 * 1024;  // 1MB minimum allocation size to satisfy validation layer
    init_info.UseDynamicRendering = false;  // We're using a render pass

    if (!init_info.Instance || !init_info.PhysicalDevice || !init_info.Device || 
        !init_info.Queue || !init_info.DescriptorPool || !init_info.RenderPass) {
        LOGN_ERROR("One or more required Vulkan handles are null");
        ImGui_ImplSDL3_Shutdown();
        ImPlot::DestroyContext();
        ImGui::DestroyContext();
        return false;
    }

    LOGN("Initializing ImGui Vulkan backend");
    if (!ImGui_ImplVulkan_Init(&init_info)) {
        LOGN_ERROR("Failed to initialize ImGui Vulkan backend");
        ImGui_ImplSDL3_Shutdown();
        ImPlot::DestroyContext();
        ImGui::DestroyContext();
        return false;
    }

    // Wait for device to be idle
    LOGN("Waiting for device initialization");
    vkDeviceWaitIdle(init_info.Device);

    // Create the ImGui fonts texture
    LOGN("Creating ImGui fonts texture");
    if (!ImGui_ImplVulkan_CreateFontsTexture()) {
        LOGN_ERROR("Failed to create ImGui fonts texture");
        ImGui_ImplVulkan_Shutdown();
        ImGui_ImplSDL3_Shutdown();
        ImPlot::DestroyContext();
        ImGui::DestroyContext();
        return false;
    }

    // Wait for device to be idle again
    LOGN("Waiting for font texture creation to complete");
    vkDeviceWaitIdle(init_info.Device);

    // Clean up font upload objects
    LOGN("Cleaning up font upload objects");
    ImGui_ImplVulkan_DestroyFontsTexture();

    is_initialized = true;
    LOGN("UI module initialized successfully");
    return true;
}

void Shutdown() {
    LOGN("Shutting down UI module");
    if (!is_initialized) {
        LOGN("UI module was not initialized");
        return;
    }

    ImGui_ImplVulkan_Shutdown();
    ImGui_ImplSDL3_Shutdown();
    ImPlot::DestroyContext();
    ImGui::DestroyContext();
    is_initialized = false;
    LOGN("UI module shutdown completed");
}

void Update() {
    if (!is_initialized) {
        LOGN_ERROR("Update called before initialization");
        return;
    }

    bool* running = GetRunningFlag();
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        ImGui_ImplSDL3_ProcessEvent(&event);
        switch (event.type) {
            case SDL_EVENT_QUIT:
                *running = false;
                break;
            case SDL_EVENT_WINDOW_CLOSE_REQUESTED:
                if (event.window.windowID == SDL_GetWindowID(gpu::GetWindow())) {
                    *running = false;
                }
                break;
            case SDL_EVENT_WINDOW_RESIZED:
            case SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED:
                if (event.window.windowID == SDL_GetWindowID(gpu::GetWindow())) {
                    int w, h;
                    SDL_GetWindowSize(gpu::GetWindow(), &w, &h);
                    gpu::RecreateSwapChain(w, h);
                }
                break;
            case SDL_EVENT_KEY_DOWN:
                if (event.key.key == SDLK_ESCAPE) {
                    *running = false;
                }
                if (event.key.key == SDLK_F1) {
                    show_demo_window = !show_demo_window;
                    LOGN(show_demo_window ? "Demo window shown" : "Demo window hidden");
                }
                if (event.key.key == SDLK_F2) {
                    show_metrics = !show_metrics;
                    LOGN(show_metrics ? "Metrics window shown" : "Metrics window hidden");
                }
                break;
        }
    }

    // Start the Dear ImGui frame
    ImGui_ImplVulkan_NewFrame();
    ImGui_ImplSDL3_NewFrame();
    ImGui::NewFrame();
}

void Render() {
    if (!is_initialized) {
        LOGN_ERROR("Render called before initialization");
        return;
    }

    // Show demo window
    if (show_demo_window) {
        ImGui::ShowDemoWindow(&show_demo_window);
    }

    // Show metrics window
    if (show_metrics) {
        ImGui::ShowMetricsWindow(&show_metrics);
    }

    // Rendering
    LOGN("Rendering ImGui frame");
    ImGui::Render();

    VkCommandBuffer cmd = gpu::GetCurrentCommandBuffer();
    if (!cmd) {
        LOGN_ERROR("Failed to get current command buffer");
        return;
    }

    // Begin render pass
    VkRenderPassBeginInfo render_pass_info = {};
    render_pass_info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    render_pass_info.renderPass = gpu::GetRenderPass();
    render_pass_info.framebuffer = gpu::GetCurrentFramebuffer();
    render_pass_info.renderArea.offset = {0, 0};
    render_pass_info.renderArea.extent = gpu::GetSwapchainExtent();

    if (!render_pass_info.renderPass || !render_pass_info.framebuffer) {
        LOGN_ERROR("Invalid render pass or framebuffer");
        return;
    }

    VkClearValue clear_color = {{{0.0f, 0.0f, 0.0f, 1.0f}}};
    render_pass_info.clearValueCount = 1;
    render_pass_info.pClearValues = &clear_color;

    LOGN("Beginning render pass");
    vkCmdBeginRenderPass(cmd, &render_pass_info, VK_SUBPASS_CONTENTS_INLINE);

    // Render ImGui
    LOGN("Rendering ImGui draw data");
    ImDrawData* draw_data = ImGui::GetDrawData();
    if (draw_data) {
        ImGui_ImplVulkan_RenderDrawData(draw_data, cmd);
    } else {
        LOGN_ERROR("ImGui draw data is null");
    }

    LOGN("Ending render pass");
    vkCmdEndRenderPass(cmd);
}

} // namespace ui 