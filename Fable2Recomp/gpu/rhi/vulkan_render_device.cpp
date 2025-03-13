#include "vulkan_interface.h"
#include <vulkan/vulkan.h>
#include "os/logger.h"
#include <vector>
#include <string>

namespace plume {

VulkanRenderDevice::VulkanRenderDevice(VulkanInterface* interface)
    : m_interface(interface)
    , m_device(VK_NULL_HANDLE)
    , m_physical_device(VK_NULL_HANDLE)
    , m_descriptorPool(VK_NULL_HANDLE)
    , m_renderPass(VK_NULL_HANDLE)
    , m_valid(false)
{
    LOGN("Creating Vulkan render device");
    if (!Initialize()) {
        LOGN_ERROR("Failed to initialize Vulkan render device");
        return;
    }
    m_valid = true;
}

VulkanRenderDevice::~VulkanRenderDevice() {
    LOGN("Destroying Vulkan render device");
    Shutdown();
    m_valid = false;
}

bool VulkanRenderDevice::Initialize() {
    // Select physical device
    uint32_t device_count = 0;
    vkEnumeratePhysicalDevices(m_interface->getNativeInstance(), &device_count, nullptr);
    if (device_count == 0) {
        LOGN_ERROR("No Vulkan-capable physical devices found");
        return false;
    }

    std::vector<VkPhysicalDevice> devices(device_count);
    vkEnumeratePhysicalDevices(m_interface->getNativeInstance(), &device_count, devices.data());
    m_physical_device = devices[0]; // Just take the first one for now

    // Log the selected physical device
    VkPhysicalDeviceProperties device_properties;
    vkGetPhysicalDeviceProperties(m_physical_device, &device_properties);
    LOGN("Selected physical device: {}", device_properties.deviceName);

    // Find a graphics queue family
    uint32_t queue_family_count = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(m_physical_device, &queue_family_count, nullptr);
    std::vector<VkQueueFamilyProperties> queue_families(queue_family_count);
    vkGetPhysicalDeviceQueueFamilyProperties(m_physical_device, &queue_family_count, queue_families.data());

    uint32_t graphics_queue_family = UINT32_MAX;
    for (uint32_t i = 0; i < queue_family_count; i++) {
        if (queue_families[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            graphics_queue_family = i;
            break;
        }
    }

    if (graphics_queue_family == UINT32_MAX) {
        LOGN_ERROR("Failed to find a graphics queue family");
        return false;
    }

    // Create logical device
    float queue_priority = 1.0f;
    VkDeviceQueueCreateInfo queue_create_info = {};
    queue_create_info.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queue_create_info.queueFamilyIndex = graphics_queue_family;
    queue_create_info.queueCount = 1;
    queue_create_info.pQueuePriorities = &queue_priority;

    VkDeviceCreateInfo device_create_info = {};
    device_create_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    device_create_info.queueCreateInfoCount = 1;
    device_create_info.pQueueCreateInfos = &queue_create_info;

    // Enable device features
    VkPhysicalDeviceFeatures device_features = {};
    device_features.samplerAnisotropy = VK_TRUE;
    device_features.fillModeNonSolid = VK_TRUE;
    device_features.wideLines = VK_TRUE;
    device_create_info.pEnabledFeatures = &device_features;

    // Add required extensions
    const char* device_extensions[] = {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME,
        VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME
    };
    device_create_info.enabledExtensionCount = 3;
    device_create_info.ppEnabledExtensionNames = device_extensions;
    device_create_info.enabledLayerCount = 0;

    // Enable dynamic rendering
    VkPhysicalDeviceDynamicRenderingFeatures dynamic_rendering_feature = {};
    dynamic_rendering_feature.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;
    dynamic_rendering_feature.dynamicRendering = VK_TRUE;
    device_create_info.pNext = &dynamic_rendering_feature;

    if (vkCreateDevice(m_physical_device, &device_create_info, nullptr, &m_device) != VK_SUCCESS) {
        LOGN_ERROR("Failed to create logical device");
        return false;
    }

    // Create descriptor pool
    VkDescriptorPoolSize pool_sizes[] = {
        { VK_DESCRIPTOR_TYPE_SAMPLER, 1000 },
        { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 2000 },
        { VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, 1000 },
        { VK_DESCRIPTOR_TYPE_STORAGE_IMAGE, 1000 },
        { VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER, 1000 },
        { VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER, 1000 },
        { VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1000 },
        { VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1000 },
        { VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, 1000 },
        { VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC, 1000 },
        { VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT, 1000 }
    };

    VkDescriptorPoolCreateInfo pool_info = {};
    pool_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    pool_info.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    pool_info.maxSets = 1000 * std::size(pool_sizes);
    pool_info.poolSizeCount = std::size(pool_sizes);
    pool_info.pPoolSizes = pool_sizes;

    if (vkCreateDescriptorPool(m_device, &pool_info, nullptr, &m_descriptorPool) != VK_SUCCESS) {
        LOGN_ERROR("Failed to create descriptor pool");
        return false;
    }

    // Create render pass
    VkAttachmentDescription color_attachment = {};
    color_attachment.format = VK_FORMAT_B8G8R8A8_UNORM;
    color_attachment.samples = VK_SAMPLE_COUNT_1_BIT;
    color_attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    color_attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    color_attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    color_attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    color_attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    color_attachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

    VkAttachmentReference color_attachment_ref = {};
    color_attachment_ref.attachment = 0;
    color_attachment_ref.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpass = {};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &color_attachment_ref;

    VkSubpassDependency dependency = {};
    dependency.srcSubpass = VK_SUBPASS_EXTERNAL;
    dependency.dstSubpass = 0;
    dependency.srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependency.srcAccessMask = 0;
    dependency.dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;

    VkRenderPassCreateInfo render_pass_info = {};
    render_pass_info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    render_pass_info.attachmentCount = 1;
    render_pass_info.pAttachments = &color_attachment;
    render_pass_info.subpassCount = 1;
    render_pass_info.pSubpasses = &subpass;
    render_pass_info.dependencyCount = 1;
    render_pass_info.pDependencies = &dependency;

    if (vkCreateRenderPass(m_device, &render_pass_info, nullptr, &m_renderPass) != VK_SUCCESS) {
        LOGN_ERROR("Failed to create render pass");
        return false;
    }

    LOGN("Vulkan render device initialized successfully");
    return true;
}

void VulkanRenderDevice::Shutdown() {
    if (m_renderPass != VK_NULL_HANDLE) {
        vkDestroyRenderPass(m_device, m_renderPass, nullptr);
        m_renderPass = VK_NULL_HANDLE;
    }

    if (m_descriptorPool != VK_NULL_HANDLE) {
        vkDestroyDescriptorPool(m_device, m_descriptorPool, nullptr);
        m_descriptorPool = VK_NULL_HANDLE;
    }

    if (m_device != VK_NULL_HANDLE) {
        vkDestroyDevice(m_device, nullptr);
        m_device = VK_NULL_HANDLE;
    }

    m_physical_device = VK_NULL_HANDLE;
}

bool VulkanRenderDevice::isValid() const {
    return m_valid;
}

void VulkanRenderDevice::waitIdle() {
    if (m_device != VK_NULL_HANDLE) {
        vkDeviceWaitIdle(m_device);
    }
}

void* VulkanRenderDevice::getNativeDevice() const {
    return m_device;
}

void* VulkanRenderDevice::getNativePhysicalDevice() const {
    return m_physical_device;
}

void* VulkanRenderDevice::getNativeDescriptorPool() const {
    return m_descriptorPool;
}

void* VulkanRenderDevice::getNativeRenderPass() const {
    return m_renderPass;
}

RenderCommandQueue* VulkanRenderDevice::createCommandQueue(RenderCommandListType type) {
    // TODO: Implement command queue creation
    return nullptr;
}

RenderCommandList* VulkanRenderDevice::createCommandList(RenderCommandListType type) {
    // TODO: Implement command list creation
    return nullptr;
}

RenderQueryPool* VulkanRenderDevice::createQueryPool(RenderQueryType type, uint32_t count) {
    // TODO: Implement query pool creation
    return nullptr;
}

} // namespace plume 