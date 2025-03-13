#pragma once

#include <vulkan/vulkan.h>

namespace gpu {

// Initialize the GPU subsystem
bool Initialize();

// Shutdown the GPU subsystem
void Shutdown();

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

} // namespace gpu 