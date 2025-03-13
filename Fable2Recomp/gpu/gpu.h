#pragma once

#define VK_NO_PROTOTYPES
#include "rhi/vulkan_common.h"
#include <SDL3/SDL.h>
#include "vma/vk_mem_alloc.h"
#include <vector>
#include <string>
#include <chrono>
#include <unordered_map>

namespace gpu {

// Forward declarations
struct ShaderModule {
    VkShaderModule module;
    std::string filename;
    std::chrono::system_clock::time_point last_modified;
};

// Global variables
extern VkInstance instance;
extern VkPhysicalDevice physical_device;
extern VkDevice device;
extern VkQueue graphics_queue;
extern VkQueue present_queue;
extern VkSurfaceKHR surface;
extern VkSwapchainKHR swapchain;
extern VkFormat swapchain_image_format;
extern VkExtent2D swapchain_extent;
extern std::vector<VkImage> swapchain_images;
extern std::vector<VkImageView> swapchain_image_views;
extern std::vector<VkImageView> depth_image_views;
extern std::vector<VkImageView> stencil_image_views;
extern std::vector<VkFramebuffer> swapchain_framebuffers;
extern VkRenderPass render_pass;
extern VkCommandPool command_pool;
extern std::vector<VkCommandBuffer> command_buffers;
extern std::vector<VkCommandBuffer> secondary_command_buffers;
extern VkSampleCountFlagBits msaa_samples;
extern std::unordered_map<std::string, ShaderModule> shader_modules;

// Core functions
bool Init();
void Cleanup();
void Update();
void Render();
void RecreateSwapChain(int width, int height);

// Helper functions
VkSampleCountFlagBits GetMaxUsableSampleCount();
void ReloadAllShaders();
void ReloadShaderModule(const std::string& filename);
void CleanupSwapChain();
bool create_swapchain();
void create_image_views();
bool create_render_pass();
void create_graphics_pipeline();
bool create_framebuffers();
void create_command_buffers();
void create_depth_resources();
void create_stencil_resources();
uint32_t FindMemoryType(uint32_t type_filter, VkMemoryPropertyFlags properties);

// Get the Vulkan instance
VkInstance GetInstance();

// Get the Vulkan device
VkDevice GetDevice();

// Get the Vulkan physical device
VkPhysicalDevice GetPhysicalDevice();

// Get the Vulkan graphics queue
VkQueue GetGraphicsQueue();

// Get the Vulkan graphics queue family index
uint32_t GetGraphicsQueueFamily();

// Get the Vulkan descriptor pool
VkDescriptorPool GetDescriptorPool();

// Get the Vulkan render pass
VkRenderPass GetRenderPass();

// Get the current framebuffer
VkFramebuffer GetCurrentFramebuffer();

// Get the swapchain extent
VkExtent2D GetSwapchainExtent();

// Find a suitable memory type
uint32_t FindMemoryType(uint32_t type_filter, VkMemoryPropertyFlags properties);

// Create a shader module
VkShaderModule CreateShaderModule(const std::vector<uint32_t>& code);

// Create a buffer
bool CreateBuffer(
    VkDeviceSize size,
    VkBufferUsageFlags usage,
    VkMemoryPropertyFlags properties,
    VkBuffer& buffer,
    VkDeviceMemory& buffer_memory
);

// Create an image
bool CreateImage(
    uint32_t width,
    uint32_t height,
    VkFormat format,
    VkImageTiling tiling,
    VkImageUsageFlags usage,
    VkMemoryPropertyFlags properties,
    VkImage& image,
    VkDeviceMemory& image_memory
);

// Create an image view
VkImageView CreateImageView(
    VkImage image,
    VkFormat format,
    VkImageAspectFlags aspect_flags
);

// Begin a single-time command buffer
VkCommandBuffer BeginSingleTimeCommands();

// End a single-time command buffer
void EndSingleTimeCommands(VkCommandBuffer command_buffer);

// Transition image layout
void TransitionImageLayout(
    VkImage image,
    VkFormat format,
    VkImageLayout old_layout,
    VkImageLayout new_layout
);

// Copy buffer to image
void CopyBufferToImage(
    VkBuffer buffer,
    VkImage image,
    uint32_t width,
    uint32_t height
);

VkCommandBuffer GetCurrentCommandBuffer();
SDL_Window* GetWindow();

VkPipelineCache GetPipelineCache();

VmaAllocator GetAllocator();

} // namespace gpu 