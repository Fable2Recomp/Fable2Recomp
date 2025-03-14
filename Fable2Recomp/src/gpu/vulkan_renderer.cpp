#include "vulkan_renderer.h"
#include <stdexcept>
#include <array>

namespace gpu {

VulkanRenderer::VulkanRenderer(const VulkanConfig& config)
    : m_config(config) {
}

VulkanRenderer::~VulkanRenderer() {
    cleanup();
}

bool VulkanRenderer::initialize() {
    if (!createInstance()) return false;
    if (!selectPhysicalDevice()) return false;
    if (!getQueueFamilies()) return false;
    if (!createLogicalDevice()) return false;
    if (!createCommandPools()) return false;
    
    createDescriptorPool();
    createSyncObjects();
    return true;
}

void VulkanRenderer::cleanup() {
    if (m_device != VK_NULL_HANDLE) {
        vkDeviceWaitIdle(m_device);
        
        // Cleanup synchronization objects
        for (auto semaphore : m_imageAvailableSemaphores) {
            vkDestroySemaphore(m_device, semaphore, nullptr);
        }
        for (auto semaphore : m_renderFinishedSemaphores) {
            vkDestroySemaphore(m_device, semaphore, nullptr);
        }
        for (auto fence : m_inFlightFences) {
            vkDestroyFence(m_device, fence, nullptr);
        }
        
        // Cleanup command pools
        vkDestroyCommandPool(m_device, m_graphicsPool, nullptr);
        vkDestroyCommandPool(m_device, m_computePool, nullptr);
        vkDestroyCommandPool(m_device, m_transferPool, nullptr);
        
        // Cleanup descriptor pool
        vkDestroyDescriptorPool(m_device, m_descriptorPool, nullptr);
        
        vkDestroyDevice(m_device, nullptr);
    }
    
    if (m_instance != VK_NULL_HANDLE) {
        vkDestroyInstance(m_instance, nullptr);
    }
}

bool VulkanRenderer::createInstance() {
    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Fable2Recomp";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "No Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_3;
    
    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    
    // Enable validation layers if requested
    if (m_config.validation.enableValidation) {
        createInfo.enabledLayerCount = static_cast<uint32_t>(m_config.validation.validationLayers.size());
        createInfo.ppEnabledLayerNames = m_config.validation.validationLayers.data();
    }
    
    // Enable extensions
    createInfo.enabledExtensionCount = static_cast<uint32_t>(m_config.requiredExtensions.size());
    createInfo.ppEnabledExtensionNames = m_config.requiredExtensions.data();
    
    if (vkCreateInstance(&createInfo, nullptr, &m_instance) != VK_SUCCESS) {
        return false;
    }
    
    return true;
}

bool VulkanRenderer::selectPhysicalDevice() {
    uint32_t deviceCount = 0;
    vkEnumeratePhysicalDevices(m_instance, &deviceCount, nullptr);
    
    if (deviceCount == 0) {
        return false;
    }
    
    std::vector<VkPhysicalDevice> devices(deviceCount);
    vkEnumeratePhysicalDevices(m_instance, &deviceCount, devices.data());
    
    // Select the first suitable device
    for (const auto& device : devices) {
        VkPhysicalDeviceProperties deviceProperties;
        VkPhysicalDeviceFeatures deviceFeatures;
        vkGetPhysicalDeviceProperties(device, &deviceProperties);
        vkGetPhysicalDeviceFeatures(device, &deviceFeatures);
        
        if (deviceProperties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) {
            m_physicalDevice = device;
            break;
        }
    }
    
    return m_physicalDevice != VK_NULL_HANDLE;
}

bool VulkanRenderer::getQueueFamilies() {
    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(m_physicalDevice, &queueFamilyCount, nullptr);
    
    std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(m_physicalDevice, &queueFamilyCount, queueFamilies.data());
    
    // Find queue families that support our required operations
    for (uint32_t i = 0; i < queueFamilyCount; i++) {
        if (queueFamilies[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            m_queueFamilies.graphics = i;
        }
        if (queueFamilies[i].queueFlags & VK_QUEUE_COMPUTE_BIT) {
            m_queueFamilies.compute = i;
        }
        if (queueFamilies[i].queueFlags & VK_QUEUE_TRANSFER_BIT) {
            m_queueFamilies.transfer = i;
        }
    }
    
    return true;
}

bool VulkanRenderer::createLogicalDevice() {
    std::vector<VkDeviceQueueCreateInfo> queueCreateInfos;
    std::array<float, 1> queuePriority = {1.0f};
    
    // Graphics queue
    VkDeviceQueueCreateInfo graphicsQueueCreateInfo{};
    graphicsQueueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    graphicsQueueCreateInfo.queueFamilyIndex = m_queueFamilies.graphics;
    graphicsQueueCreateInfo.queueCount = m_config.queues.graphicsQueueCount;
    graphicsQueueCreateInfo.pQueuePriorities = queuePriority.data();
    queueCreateInfos.push_back(graphicsQueueCreateInfo);
    
    // Compute queue
    if (m_config.performance.enableAsyncCompute) {
        VkDeviceQueueCreateInfo computeQueueCreateInfo{};
        computeQueueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
        computeQueueCreateInfo.queueFamilyIndex = m_queueFamilies.compute;
        computeQueueCreateInfo.queueCount = m_config.queues.computeQueueCount;
        computeQueueCreateInfo.pQueuePriorities = queuePriority.data();
        queueCreateInfos.push_back(computeQueueCreateInfo);
    }
    
    // Transfer queue
    if (m_config.performance.enableAsyncTransfer) {
        VkDeviceQueueCreateInfo transferQueueCreateInfo{};
        transferQueueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
        transferQueueCreateInfo.queueFamilyIndex = m_queueFamilies.transfer;
        transferQueueCreateInfo.queueCount = m_config.queues.transferQueueCount;
        transferQueueCreateInfo.pQueuePriorities = queuePriority.data();
        queueCreateInfos.push_back(transferQueueCreateInfo);
    }
    
    // Create device
    VkDeviceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    createInfo.pQueueCreateInfos = queueCreateInfos.data();
    createInfo.queueCreateInfoCount = static_cast<uint32_t>(queueCreateInfos.size());
    createInfo.pEnabledFeatures = &m_config.features.features;
    createInfo.enabledExtensionCount = static_cast<uint32_t>(m_config.requiredExtensions.size());
    createInfo.ppEnabledExtensionNames = m_config.requiredExtensions.data();
    
    // Enable validation layers if requested
    if (m_config.validation.enableValidation) {
        createInfo.enabledLayerCount = static_cast<uint32_t>(m_config.validation.validationLayers.size());
        createInfo.ppEnabledLayerNames = m_config.validation.validationLayers.data();
    }
    
    if (vkCreateDevice(m_physicalDevice, &createInfo, nullptr, &m_device) != VK_SUCCESS) {
        return false;
    }
    
    // Get queue handles
    m_queues.graphics.resize(m_config.queues.graphicsQueueCount);
    for (uint32_t i = 0; i < m_config.queues.graphicsQueueCount; i++) {
        vkGetDeviceQueue(m_device, m_queueFamilies.graphics, i, &m_queues.graphics[i]);
    }
    
    if (m_config.performance.enableAsyncCompute) {
        m_queues.compute.resize(m_config.queues.computeQueueCount);
        for (uint32_t i = 0; i < m_config.queues.computeQueueCount; i++) {
            vkGetDeviceQueue(m_device, m_queueFamilies.compute, i, &m_queues.compute[i]);
        }
    }
    
    if (m_config.performance.enableAsyncTransfer) {
        m_queues.transfer.resize(m_config.queues.transferQueueCount);
        for (uint32_t i = 0; i < m_config.queues.transferQueueCount; i++) {
            vkGetDeviceQueue(m_device, m_queueFamilies.transfer, i, &m_queues.transfer[i]);
        }
    }
    
    return true;
}

bool VulkanRenderer::createCommandPools() {
    // Graphics command pool
    VkCommandPoolCreateInfo graphicsPoolInfo{};
    graphicsPoolInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    graphicsPoolInfo.queueFamilyIndex = m_queueFamilies.graphics;
    graphicsPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    
    if (vkCreateCommandPool(m_device, &graphicsPoolInfo, nullptr, &m_graphicsPool) != VK_SUCCESS) {
        return false;
    }
    
    // Compute command pool
    if (m_config.performance.enableAsyncCompute) {
        VkCommandPoolCreateInfo computePoolInfo{};
        computePoolInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
        computePoolInfo.queueFamilyIndex = m_queueFamilies.compute;
        computePoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        
        if (vkCreateCommandPool(m_device, &computePoolInfo, nullptr, &m_computePool) != VK_SUCCESS) {
            return false;
        }
    }
    
    // Transfer command pool
    if (m_config.performance.enableAsyncTransfer) {
        VkCommandPoolCreateInfo transferPoolInfo{};
        transferPoolInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
        transferPoolInfo.queueFamilyIndex = m_queueFamilies.transfer;
        transferPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        
        if (vkCreateCommandPool(m_device, &transferPoolInfo, nullptr, &m_transferPool) != VK_SUCCESS) {
            return false;
        }
    }
    
    return true;
}

void VulkanRenderer::createDescriptorPool() {
    std::array<VkDescriptorPoolSize, 4> poolSizes{};
    poolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    poolSizes[0].descriptorCount = m_config.performance.descriptorPoolSize;
    poolSizes[1].type = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
    poolSizes[1].descriptorCount = m_config.performance.descriptorPoolSize;
    poolSizes[2].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    poolSizes[2].descriptorCount = m_config.performance.descriptorPoolSize;
    poolSizes[3].type = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
    poolSizes[3].descriptorCount = m_config.performance.descriptorPoolSize;
    
    VkDescriptorPoolCreateInfo poolInfo{};
    poolInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    poolInfo.poolSizeCount = static_cast<uint32_t>(poolSizes.size());
    poolInfo.pPoolSizes = poolSizes.data();
    poolInfo.maxSets = m_config.performance.descriptorPoolSize * 4;
    poolInfo.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    
    vkCreateDescriptorPool(m_device, &poolInfo, nullptr, &m_descriptorPool);
}

void VulkanRenderer::createSyncObjects() {
    m_imageAvailableSemaphores.resize(m_config.performance.maxFramesInFlight);
    m_renderFinishedSemaphores.resize(m_config.performance.maxFramesInFlight);
    m_inFlightFences.resize(m_config.performance.maxFramesInFlight);
    
    VkSemaphoreCreateInfo semaphoreInfo{};
    semaphoreInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    
    VkFenceCreateInfo fenceInfo{};
    fenceInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    fenceInfo.flags = VK_FENCE_CREATE_SIGNALED_BIT;
    
    for (size_t i = 0; i < m_config.performance.maxFramesInFlight; i++) {
        vkCreateSemaphore(m_device, &semaphoreInfo, nullptr, &m_imageAvailableSemaphores[i]);
        vkCreateSemaphore(m_device, &semaphoreInfo, nullptr, &m_renderFinishedSemaphores[i]);
        vkCreateFence(m_device, &fenceInfo, nullptr, &m_inFlightFences[i]);
    }
}

void VulkanRenderer::beginFrame() {
    vkWaitForFences(m_device, 1, &m_inFlightFences[m_currentFrame], VK_TRUE, UINT64_MAX);
    vkResetFences(m_device, 1, &m_inFlightFences[m_currentFrame]);
}

void VulkanRenderer::endFrame() {
    m_currentFrame = (m_currentFrame + 1) % m_config.performance.maxFramesInFlight;
}

void VulkanRenderer::waitForFrame(uint32_t frameIndex) {
    vkWaitForFences(m_device, 1, &m_inFlightFences[frameIndex], VK_TRUE, UINT64_MAX);
}

VkCommandBuffer VulkanRenderer::beginSingleTimeCommands() {
    VkCommandBufferAllocateInfo allocInfo{};
    allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    allocInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocInfo.commandPool = m_graphicsPool;
    allocInfo.commandBufferCount = 1;
    
    VkCommandBuffer commandBuffer;
    vkAllocateCommandBuffers(m_device, &allocInfo, &commandBuffer);
    
    VkCommandBufferBeginInfo beginInfo{};
    beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    
    vkBeginCommandBuffer(commandBuffer, &beginInfo);
    
    return commandBuffer;
}

void VulkanRenderer::endSingleTimeCommands(VkCommandBuffer commandBuffer) {
    vkEndCommandBuffer(commandBuffer);
    
    VkSubmitInfo submitInfo{};
    submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.commandBufferCount = 1;
    submitInfo.pCommandBuffers = &commandBuffer;
    
    vkQueueSubmit(m_queues.graphics[0], 1, &submitInfo, VK_NULL_HANDLE);
    vkQueueWaitIdle(m_queues.graphics[0]);
    
    vkFreeCommandBuffers(m_device, m_graphicsPool, 1, &commandBuffer);
}

void VulkanRenderer::submitGraphicsCommands(const std::vector<VkCommandBuffer>& commandBuffers) {
    VkSubmitInfo submitInfo{};
    submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.commandBufferCount = static_cast<uint32_t>(commandBuffers.size());
    submitInfo.pCommandBuffers = commandBuffers.data();
    
    vkQueueSubmit(m_queues.graphics[0], 1, &submitInfo, m_inFlightFences[m_currentFrame]);
}

void VulkanRenderer::submitComputeCommands(const std::vector<VkCommandBuffer>& commandBuffers) {
    if (!m_config.performance.enableAsyncCompute) return;
    
    VkSubmitInfo submitInfo{};
    submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.commandBufferCount = static_cast<uint32_t>(commandBuffers.size());
    submitInfo.pCommandBuffers = commandBuffers.data();
    
    vkQueueSubmit(m_queues.compute[0], 1, &submitInfo, VK_NULL_HANDLE);
}

void VulkanRenderer::submitTransferCommands(const std::vector<VkCommandBuffer>& commandBuffers) {
    if (!m_config.performance.enableAsyncTransfer) return;
    
    VkSubmitInfo submitInfo{};
    submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.commandBufferCount = static_cast<uint32_t>(commandBuffers.size());
    submitInfo.pCommandBuffers = commandBuffers.data();
    
    vkQueueSubmit(m_queues.transfer[0], 1, &submitInfo, VK_NULL_HANDLE);
}

} // namespace gpu 