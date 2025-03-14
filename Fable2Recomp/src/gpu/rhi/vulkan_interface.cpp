#define VK_NO_PROTOTYPES
#include "vulkan_interface.h"
#include "os/logger.h"
#include <vector>
#include <string>
#include <iostream>
#include <SDL3/SDL_vulkan.h>

namespace plume {

VulkanInterface::VulkanInterface(SDL_Window* window)
    : m_instance(VK_NULL_HANDLE)
    , m_debugMessenger(VK_NULL_HANDLE)
    , m_isValid(false)
    , m_window(window)
{
    Initialize();
}

VulkanInterface::~VulkanInterface()
{
    Shutdown();
}

bool VulkanInterface::Initialize()
{
    // Initialize Volk
    VkResult volkResult = volkInitialize();
    if (volkResult != VK_SUCCESS) {
        std::cerr << "Failed to initialize Volk" << std::endl;
        return false;
    }

    // Get required instance extensions from SDL
    uint32_t extensionCount = 0;
    if (!SDL_Vulkan_GetInstanceExtensions(&extensionCount, nullptr)) {
        std::cerr << "Failed to get Vulkan instance extension count from SDL" << std::endl;
        return false;
    }

    std::vector<const char*> extensions(extensionCount);
    if (!SDL_Vulkan_GetInstanceExtensions(&extensionCount, extensions.data())) {
        std::cerr << "Failed to get Vulkan instance extensions from SDL" << std::endl;
        return false;
    }

    // Add debug utils extension in debug builds
#ifdef _DEBUG
    extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
#endif

    // Create Vulkan instance
    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Fable 2 Recompiled";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "Plume";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_3;

    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
    createInfo.ppEnabledExtensionNames = extensions.data();

    // Enable validation layers in debug builds
#ifdef _DEBUG
    const char* validationLayers[] = {"VK_LAYER_KHRONOS_validation"};
    createInfo.enabledLayerCount = 1;
    createInfo.ppEnabledLayerNames = validationLayers;

    VkDebugUtilsMessengerCreateInfoEXT debugCreateInfo{};
    debugCreateInfo.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
    debugCreateInfo.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT |
                                    VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
                                    VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
    debugCreateInfo.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
    debugCreateInfo.pfnUserCallback = [](VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                       VkDebugUtilsMessageTypeFlagsEXT messageType,
                                       const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData,
                                       void* pUserData) -> VkBool32 {
        std::cerr << "Validation layer: " << pCallbackData->pMessage << std::endl;
        return VK_FALSE;
    };
    createInfo.pNext = &debugCreateInfo;
#else
    createInfo.enabledLayerCount = 0;
    createInfo.pNext = nullptr;
#endif

    if (vkCreateInstance(&createInfo, nullptr, &m_instance) != VK_SUCCESS) {
        std::cerr << "Failed to create Vulkan instance" << std::endl;
        return false;
    }

    // Load instance-level functions
    volkLoadInstance(m_instance);

#ifdef _DEBUG
    // Create debug messenger
    auto vkCreateDebugUtilsMessengerEXT = reinterpret_cast<PFN_vkCreateDebugUtilsMessengerEXT>(
        vkGetInstanceProcAddr(m_instance, "vkCreateDebugUtilsMessengerEXT"));
    if (vkCreateDebugUtilsMessengerEXT) {
        if (vkCreateDebugUtilsMessengerEXT(m_instance, &debugCreateInfo, nullptr, &m_debugMessenger) != VK_SUCCESS) {
            std::cerr << "Failed to create debug messenger" << std::endl;
            return false;
        }
    }
#endif

    m_isValid = true;
    return true;
}

void VulkanInterface::Shutdown()
{
    if (m_instance != VK_NULL_HANDLE) {
#ifdef _DEBUG
        if (m_debugMessenger != VK_NULL_HANDLE) {
            auto vkDestroyDebugUtilsMessengerEXT = reinterpret_cast<PFN_vkDestroyDebugUtilsMessengerEXT>(
                vkGetInstanceProcAddr(m_instance, "vkDestroyDebugUtilsMessengerEXT"));
            if (vkDestroyDebugUtilsMessengerEXT) {
                vkDestroyDebugUtilsMessengerEXT(m_instance, m_debugMessenger, nullptr);
            }
            m_debugMessenger = VK_NULL_HANDLE;
        }
#endif
        vkDestroyInstance(m_instance, nullptr);
        m_instance = VK_NULL_HANDLE;
    }
    m_isValid = false;
}

bool VulkanInterface::isValid() const {
    return m_isValid;
}

void* VulkanInterface::getNativeInterface() const {
    return m_instance;
}

RenderDevice* VulkanInterface::createDevice(const char* name) {
    auto device = new VulkanRenderDevice(this);
    if (!device->Initialize()) {
        delete device;
        return nullptr;
    }
    return device;
}

VulkanRenderDevice::VulkanRenderDevice(VulkanInterface* interface)
    : m_interface(interface)
    , m_device(VK_NULL_HANDLE)
    , m_physicalDevice(VK_NULL_HANDLE)
    , m_descriptorPool(VK_NULL_HANDLE)
    , m_renderPass(VK_NULL_HANDLE)
    , m_isValid(false)
{
    Initialize();
}

VulkanRenderDevice::~VulkanRenderDevice()
{
    Shutdown();
}

bool VulkanRenderDevice::Initialize()
{
    // Get Vulkan instance
    VkInstance instance = static_cast<VkInstance>(m_interface->getNativeInterface());
    if (instance == VK_NULL_HANDLE) {
        std::cerr << "Invalid Vulkan instance" << std::endl;
        return false;
    }

    // Select physical device
    uint32_t deviceCount = 0;
    vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr);
    if (deviceCount == 0) {
        std::cerr << "Failed to find GPUs with Vulkan support" << std::endl;
        return false;
    }

    std::vector<VkPhysicalDevice> devices(deviceCount);
    vkEnumeratePhysicalDevices(instance, &deviceCount, devices.data());

    // For now, just pick the first device
    m_physicalDevice = devices[0];

    // Get queue family index
    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(m_physicalDevice, &queueFamilyCount, nullptr);
    std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(m_physicalDevice, &queueFamilyCount, queueFamilies.data());

    // Find a queue family that supports graphics
    uint32_t queueFamilyIndex = UINT32_MAX;
    for (uint32_t i = 0; i < queueFamilyCount; i++) {
        if (queueFamilies[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            queueFamilyIndex = i;
            break;
        }
    }

    if (queueFamilyIndex == UINT32_MAX) {
        std::cerr << "Failed to find a queue family that supports graphics" << std::endl;
        return false;
    }

    // Create logical device
    float queuePriority = 1.0f;
    VkDeviceQueueCreateInfo queueCreateInfo{};
    queueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queueCreateInfo.queueFamilyIndex = queueFamilyIndex;
    queueCreateInfo.queueCount = 1;
    queueCreateInfo.pQueuePriorities = &queuePriority;

    // Enable device features
    VkPhysicalDeviceFeatures deviceFeatures{};

    // Enable required extensions
    std::vector<const char*> deviceExtensions = {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME
    };

    VkDeviceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    createInfo.queueCreateInfoCount = 1;
    createInfo.pQueueCreateInfos = &queueCreateInfo;
    createInfo.pEnabledFeatures = &deviceFeatures;
    createInfo.enabledExtensionCount = static_cast<uint32_t>(deviceExtensions.size());
    createInfo.ppEnabledExtensionNames = deviceExtensions.data();

    if (vkCreateDevice(m_physicalDevice, &createInfo, nullptr, &m_device) != VK_SUCCESS) {
        std::cerr << "Failed to create logical device" << std::endl;
        return false;
    }

    // Load device-level functions
    volkLoadDevice(m_device);

    // Create descriptor pool
    VkDescriptorPoolSize poolSizes[] = {
        { VK_DESCRIPTOR_TYPE_SAMPLER, 1000 },
        { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1000 },
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

    VkDescriptorPoolCreateInfo poolInfo{};
    poolInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    poolInfo.poolSizeCount = static_cast<uint32_t>(std::size(poolSizes));
    poolInfo.pPoolSizes = poolSizes;
    poolInfo.maxSets = 1000;

    if (vkCreateDescriptorPool(m_device, &poolInfo, nullptr, &m_descriptorPool) != VK_SUCCESS) {
        std::cerr << "Failed to create descriptor pool" << std::endl;
        return false;
    }

    m_isValid = true;
    return true;
}

void VulkanRenderDevice::Shutdown()
{
    if (m_device != VK_NULL_HANDLE) {
        if (m_descriptorPool != VK_NULL_HANDLE) {
            vkDestroyDescriptorPool(m_device, m_descriptorPool, nullptr);
            m_descriptorPool = VK_NULL_HANDLE;
        }
        vkDestroyDevice(m_device, nullptr);
        m_device = VK_NULL_HANDLE;
    }
    m_isValid = false;
}

bool VulkanRenderDevice::isValid() const {
    return m_isValid;
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
    return m_physicalDevice;
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