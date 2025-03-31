#pragma once

#include <vulkan/vulkan.h>
#include <vector>
#include <string>

namespace gpu {

struct VulkanConfig {
    // Device features
    VkPhysicalDeviceFeatures2 features{};
    VkPhysicalDeviceVulkan12Features features12{};
    VkPhysicalDeviceVulkan13Features features13{};
    
    // Performance settings
    struct {
        bool enableAsyncCompute{true};
        bool enableAsyncTransfer{true};
        uint32_t maxFramesInFlight{2};
        uint32_t descriptorPoolSize{1000};
        bool enableBufferDeviceAddress{true};
        bool enableRayTracing{false};
    } performance;
    
    // Memory settings
    struct {
        VkDeviceSize minUniformBufferOffsetAlignment{256};
        VkDeviceSize minStorageBufferOffsetAlignment{256};
        VkDeviceSize bufferImageGranularity{1};
        bool useBufferDeviceAddress{true};
    } memory;
    
    // Queue settings
    struct {
        uint32_t graphicsQueueCount{1};
        uint32_t computeQueueCount{1};
        uint32_t transferQueueCount{1};
    } queues;
    
    // Extension settings
    std::vector<const char*> requiredExtensions{
        VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        VK_KHR_MAINTENANCE1_EXTENSION_NAME,
        VK_KHR_MULTIVIEW_EXTENSION_NAME,
        VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME,
        VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME
    };
    
    // Validation settings
    struct {
        bool enableValidation{true};
        std::vector<const char*> validationLayers{
            "VK_LAYER_KHRONOS_validation"
        };
    } validation;
};
} 