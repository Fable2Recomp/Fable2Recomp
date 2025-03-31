#define VK_NO_PROTOTYPES
#include "../include/stdafx.h"
#include "xbox.h"
#include "rhi/vulkan_common.h"
#include "rhi/vulkan_interface.h"
#include "os/logger.h"
#include <vector>
#include <string>
#include <array>
#include <chrono>
#include <unordered_map>
#include <filesystem>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <limits>

#define VMA_IMPLEMENTATION
#include "vma/vk_mem_alloc.h"
#include "gpu.h"
#include "gpu/gpu.hpp"

using namespace ImGui;

// Forward declaration of the running flag getter
bool* GetRunningFlag();

namespace xe {
namespace gpu {

SDL_Window* window = nullptr;
std::unique_ptr<plume::VulkanInterface> vulkan_interface;
std::unique_ptr<plume::RenderDevice> render_device;

bool Init() {
    LOG_INFO("Initializing GPU module");
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        LOG_ERROR("SDL_Init Error: %s", SDL_GetError());
        return false;
    }

    SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_MAXIMIZED);
    SDL_Window* window = SDL_CreateWindow(
        "Fable II Recompiler",
        1280,
        720,
        window_flags
    );

    if (!window) {
        LOG_ERROR("SDL_CreateWindow Error: %s", SDL_GetError());
        return false;
    }

    // Initialize Vulkan
    if (!GPUDevice::GetInstance().Initialize()) {
        LOG_ERROR("Failed to create Vulkan interface");
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }

    // Initialize ImGui
    IMGUI_CHECKVERSION();
    CreateContext();
    ImGuiIO& io = GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;

    // Create SDL renderer for ImGui
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer) {
        LOG_ERROR("SDL_CreateRenderer Error: %s", SDL_GetError());
        GPUDevice::GetInstance().Shutdown();
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }

    if (!ImGui_ImplSDL3_Init(window, renderer)) {
        LOG_ERROR("Failed to initialize ImGui SDL3 backend");
        SDL_DestroyRenderer(renderer);
        GPUDevice::GetInstance().Shutdown();
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }

    return true;
}

void Shutdown() {
    ImGui_ImplVulkan_Shutdown();
    ImGui_ImplSDL3_Shutdown();
    DestroyContext();

    GPUDevice::GetInstance().Shutdown();
    SDL_Quit();
}

void Update() {
    // TODO: Implement update logic
}

void Render() {
    // TODO: Implement render logic
}

void RecreateSwapChain(int width, int height) {
    // TODO: Implement swapchain recreation
}

VkSampleCountFlagBits GetMaxUsableSampleCount() {
    // TODO: Implement sample count detection
    return VK_SAMPLE_COUNT_1_BIT;
}

void ReloadAllShaders() {
    // TODO: Implement shader reloading
}

void ReloadShaderModule(const std::string& filename) {
    // TODO: Implement shader module reloading
}

void CleanupSwapChain() {
    // TODO: Implement swapchain cleanup
}

bool create_swapchain() {
    // TODO: Implement swapchain creation
    return false;
}

void create_image_views() {
    // TODO: Implement image view creation
}

bool create_render_pass() {
    // TODO: Implement render pass creation
    return false;
}

void create_graphics_pipeline() {
    // TODO: Implement graphics pipeline creation
}

bool create_framebuffers() {
    // TODO: Implement framebuffer creation
    return false;
}

void create_command_buffers() {
    // TODO: Implement command buffer creation
}

void create_depth_resources() {
    // TODO: Implement depth resource creation
}

void create_stencil_resources() {
    // TODO: Implement stencil resource creation
}

uint32_t FindMemoryType(uint32_t type_filter, VkMemoryPropertyFlags properties) {
    // TODO: Implement memory type finding
    return 0;
}

VkInstance GetInstance() {
    return static_cast<VkInstance>(vulkan_interface->getNativeInterface());
}

VkDevice GetDevice() {
    return static_cast<VkDevice>(render_device->getNativeDevice());
}

VkPhysicalDevice GetPhysicalDevice() {
    return static_cast<VkPhysicalDevice>(render_device->getNativePhysicalDevice());
}

GPUDevice& GPUDevice::GetInstance() {
    static GPUDevice instance;
    return instance;
}

bool GPUDevice::Initialize() {
    if (!CreateInstance()) {
        return false;
    }

    if (!SelectPhysicalDevice()) {
        return false;
    }

    if (!CreateLogicalDevice()) {
        return false;
    }

    return true;
}

void GPUDevice::Shutdown() {
    if (m_device != VK_NULL_HANDLE) {
        vkDestroyDevice(m_device, nullptr);
        m_device = VK_NULL_HANDLE;
    }

    if (m_instance != VK_NULL_HANDLE) {
        vkDestroyInstance(m_instance, nullptr);
        m_instance = VK_NULL_HANDLE;
    }
}

bool GPUDevice::CreateInstance() {
    VkApplicationInfo app_info = {};
    app_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    app_info.pApplicationName = "Fable II Recompiler";
    app_info.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    app_info.pEngineName = "No Engine";
    app_info.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    app_info.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo create_info = {};
    create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    create_info.pApplicationInfo = &app_info;

    if (vkCreateInstance(&create_info, nullptr, &m_instance) != VK_SUCCESS) {
        return false;
    }

    return true;
}

bool GPUDevice::SelectPhysicalDevice() {
    uint32_t device_count = 0;
    vkEnumeratePhysicalDevices(m_instance, &device_count, nullptr);

    if (device_count == 0) {
        return false;
    }

    std::vector<VkPhysicalDevice> devices(device_count);
    vkEnumeratePhysicalDevices(m_instance, &device_count, devices.data());

    // Just pick the first device for now
    m_physical_device = devices[0];

    return true;
}

bool GPUDevice::CreateLogicalDevice() {
    uint32_t queue_family_count = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(m_physical_device, &queue_family_count, nullptr);

    std::vector<VkQueueFamilyProperties> queue_families(queue_family_count);
    vkGetPhysicalDeviceQueueFamilyProperties(m_physical_device, &queue_family_count, queue_families.data());

    // Find graphics queue family
    for (uint32_t i = 0; i < queue_family_count; i++) {
        if (queue_families[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            m_graphics_queue_family = i;
            break;
        }
    }

    float queue_priority = 1.0f;
    VkDeviceQueueCreateInfo queue_create_info = {};
    queue_create_info.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queue_create_info.queueFamilyIndex = m_graphics_queue_family;
    queue_create_info.queueCount = 1;
    queue_create_info.pQueuePriorities = &queue_priority;

    VkPhysicalDeviceFeatures device_features = {};

    VkDeviceCreateInfo device_create_info = {};
    device_create_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    device_create_info.pQueueCreateInfos = &queue_create_info;
    device_create_info.queueCreateInfoCount = 1;
    device_create_info.pEnabledFeatures = &device_features;

    if (vkCreateDevice(m_physical_device, &device_create_info, nullptr, &m_device) != VK_SUCCESS) {
        return false;
    }

    vkGetDeviceQueue(m_device, m_graphics_queue_family, 0, &m_graphics_queue);
    return true;
}

} // namespace gpu
} // namespace xe 