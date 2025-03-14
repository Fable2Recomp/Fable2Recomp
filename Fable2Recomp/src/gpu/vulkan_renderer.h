#pragma once

#include <vulkan/vulkan.h>
#include <memory>
#include <vector>
#include "vulkan_config.h"

namespace gpu {

class VulkanRenderer {
public:
    VulkanRenderer(const VulkanConfig& config);
    ~VulkanRenderer();

    // Initialization
    bool initialize();
    void cleanup();

    // Frame management
    void beginFrame();
    void endFrame();
    void waitForFrame(uint32_t frameIndex);

    // Resource management
    VkBuffer createBuffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties);
    VkImage createImage(uint32_t width, uint32_t height, VkFormat format, VkImageUsageFlags usage);
    void destroyBuffer(VkBuffer buffer);
    void destroyImage(VkImage image);

    // Command management
    VkCommandBuffer beginSingleTimeCommands();
    void endSingleTimeCommands(VkCommandBuffer commandBuffer);
    
    // Pipeline management
    VkPipeline createGraphicsPipeline(const VkGraphicsPipelineCreateInfo& createInfo);
    VkPipeline createComputePipeline(const VkComputePipelineCreateInfo& createInfo);
    
    // Synchronization
    void submitGraphicsCommands(const std::vector<VkCommandBuffer>& commandBuffers);
    void submitComputeCommands(const std::vector<VkCommandBuffer>& commandBuffers);
    void submitTransferCommands(const std::vector<VkCommandBuffer>& commandBuffers);

private:
    // Device management
    bool createInstance();
    bool selectPhysicalDevice();
    bool createLogicalDevice();
    bool createCommandPools();
    
    // Queue management
    bool getQueueFamilies();
    void createCommandBuffers();
    
    // Memory management
    uint32_t findMemoryType(uint32_t typeFilter, VkMemoryPropertyFlags properties);
    void createDescriptorPool();
    
    // Synchronization
    void createSyncObjects();
    
    // Member variables
    VulkanConfig m_config;
    VkInstance m_instance{VK_NULL_HANDLE};
    VkPhysicalDevice m_physicalDevice{VK_NULL_HANDLE};
    VkDevice m_device{VK_NULL_HANDLE};
    
    // Queues
    struct {
        std::vector<VkQueue> graphics;
        std::vector<VkQueue> compute;
        std::vector<VkQueue> transfer;
    } m_queues;
    
    // Queue family indices
    struct {
        uint32_t graphics;
        uint32_t compute;
        uint32_t transfer;
    } m_queueFamilies;
    
    // Command pools
    VkCommandPool m_graphicsPool{VK_NULL_HANDLE};
    VkCommandPool m_computePool{VK_NULL_HANDLE};
    VkCommandPool m_transferPool{VK_NULL_HANDLE};
    
    // Descriptor pool
    VkDescriptorPool m_descriptorPool{VK_NULL_HANDLE};
    
    // Synchronization objects
    std::vector<VkSemaphore> m_imageAvailableSemaphores;
    std::vector<VkSemaphore> m_renderFinishedSemaphores;
    std::vector<VkFence> m_inFlightFences;
    
    uint32_t m_currentFrame{0};
};

} // namespace gpu 