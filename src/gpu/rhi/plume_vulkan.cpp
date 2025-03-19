#include "plume_vulkan.h"
#include <SDL3/SDL_vulkan.h>
#include <iostream> // Include for logging
#include <vector>   // For std::vector
#include "os/logger.h"

namespace plume {

VulkanInterface::VulkanInterface(SDL_Window* window)
    : m_window(window)
    , m_instance(VK_NULL_HANDLE)
    , m_device(VK_NULL_HANDLE)
    , m_physical_device(VK_NULL_HANDLE)
    , m_surface(VK_NULL_HANDLE)
    , m_isValid(false)
{
    std::cerr << "VulkanInterface constructor called" << std::endl;
    Initialize();
}

VulkanInterface::~VulkanInterface() {
    std::cerr << "VulkanInterface destructor called" << std::endl;
    Shutdown();
}

bool VulkanInterface::Initialize() {
    std::cerr << "VulkanInterface::Initialize() called" << std::endl;
    
    // Get required instance extensions from SDL
    uint32_t extensionCount = 0;
    if (!SDL_Vulkan_GetInstanceExtensions(&extensionCount, nullptr)) {
        std::cerr << "Failed to get instance extensions count from SDL" << std::endl;
        return false;
    }

    std::vector<const char*> extensions(extensionCount);
    if (!SDL_Vulkan_GetInstanceExtensions(&extensionCount, extensions.data())) {
        std::cerr << "Failed to get instance extensions from SDL" << std::endl;
        return false;
    }

    std::cerr << "Required Vulkan extensions: " << extensionCount << std::endl;
    for (uint32_t i = 0; i < extensionCount; i++) {
        std::cerr << "  " << extensions[i] << std::endl;
    }

    // Create Vulkan instance
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Fable 2 GOTY";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "Plume";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo createInfo = {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
    createInfo.ppEnabledExtensionNames = extensions.data();
    createInfo.enabledLayerCount = 0;

    VkResult result = vkCreateInstance(&createInfo, nullptr, &m_instance);
    if (result != VK_SUCCESS) {
        std::cerr << "Failed to create Vulkan instance: " << result << std::endl;
        return false;
    }

    std::cerr << "Vulkan instance created successfully" << std::endl;

    // Create surface
    if (!SDL_Vulkan_CreateSurface(m_window, m_instance, nullptr, &m_surface)) {
        std::cerr << "Failed to create SDL surface" << std::endl;
        vkDestroyInstance(m_instance, nullptr);
        return false;
    }

    std::cerr << "SDL surface created successfully" << std::endl;

    // Select physical device
    uint32_t deviceCount = 0;
    vkEnumeratePhysicalDevices(m_instance, &deviceCount, nullptr);
    if (deviceCount == 0) {
        std::cerr << "No Vulkan-capable physical devices found" << std::endl;
        vkDestroySurfaceKHR(m_instance, m_surface, nullptr);
        vkDestroyInstance(m_instance, nullptr);
        return false;
    }

    std::vector<VkPhysicalDevice> devices(deviceCount);
    vkEnumeratePhysicalDevices(m_instance, &deviceCount, devices.data());
    m_physical_device = devices[0]; // Just take the first one for now

    // Log the selected physical device
    VkPhysicalDeviceProperties deviceProperties;
    vkGetPhysicalDeviceProperties(m_physical_device, &deviceProperties);
    std::cerr << "Selected physical device: " << deviceProperties.deviceName << std::endl;

    // Find queue family that supports graphics
    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(m_physical_device, &queueFamilyCount, nullptr);
    std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(m_physical_device, &queueFamilyCount, queueFamilies.data());

    uint32_t graphicsQueueFamilyIndex = UINT32_MAX;
    for (uint32_t i = 0; i < queueFamilyCount; i++) {
        if (queueFamilies[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            graphicsQueueFamilyIndex = i;
            break;
        }
    }

    if (graphicsQueueFamilyIndex == UINT32_MAX) {
        std::cerr << "No graphics queue family found" << std::endl;
        vkDestroySurfaceKHR(m_instance, m_surface, nullptr);
        vkDestroyInstance(m_instance, nullptr);
        return false;
    }

    // Create logical device
    float queuePriority = 1.0f;
    VkDeviceQueueCreateInfo queueCreateInfo = {};
    queueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queueCreateInfo.queueFamilyIndex = graphicsQueueFamilyIndex;
    queueCreateInfo.queueCount = 1;
    queueCreateInfo.pQueuePriorities = &queuePriority;

    VkPhysicalDeviceFeatures deviceFeatures = {};

    VkDeviceCreateInfo deviceCreateInfo = {};
    deviceCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    deviceCreateInfo.pQueueCreateInfos = &queueCreateInfo;
    deviceCreateInfo.queueCreateInfoCount = 1;
    deviceCreateInfo.pEnabledFeatures = &deviceFeatures;
    deviceCreateInfo.enabledExtensionCount = 0;
    deviceCreateInfo.enabledLayerCount = 0;

    result = vkCreateDevice(m_physical_device, &deviceCreateInfo, nullptr, &m_device);
    if (result != VK_SUCCESS) {
        std::cerr << "Failed to create logical device: " << result << std::endl;
        vkDestroySurfaceKHR(m_instance, m_surface, nullptr);
        vkDestroyInstance(m_instance, nullptr);
        return false;
    }

    std::cerr << "Logical device created successfully" << std::endl;

    m_isValid = true;
    return true;
}

void VulkanInterface::Shutdown() {
    std::cerr << "VulkanInterface::Shutdown() called" << std::endl;
    
    if (m_device != VK_NULL_HANDLE) {
        vkDestroyDevice(m_device, nullptr);
        m_device = VK_NULL_HANDLE;
    }
    
    if (m_surface != VK_NULL_HANDLE) {
        vkDestroySurfaceKHR(m_instance, m_surface, nullptr);
        m_surface = VK_NULL_HANDLE;
    }
    
    if (m_instance != VK_NULL_HANDLE) {
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
    LOGF("Creating Vulkan device with name: {}", name ? name : "null");

    if (!m_device) {
        LOGN_ERROR("Vulkan device not initialized");
        return nullptr;
    }

    auto* device = new VulkanRenderDevice(m_device, m_physical_device);
    if (!device->Initialize()) {
        LOGN_ERROR("Failed to initialize Vulkan render device");
        delete device;
        return nullptr;
    }

    LOGF("Successfully created Vulkan device with name: {}", name ? name : "null");
    return device;
}

VulkanRenderDevice::VulkanRenderDevice(VkDevice device, VkPhysicalDevice physicalDevice)
    : m_device(device)
    , m_physical_device(physicalDevice)
{
    LOGF("Creating VulkanRenderDevice with device: {}", (void*)device);
}

VulkanRenderDevice::~VulkanRenderDevice()
{
    LOGF("Destroying VulkanRenderDevice with device: {}", (void*)m_device);
}

bool VulkanRenderDevice::Initialize()
{
    LOGF("Initializing VulkanRenderDevice with device: {}", (void*)m_device);
    return true;
}

void VulkanRenderDevice::Shutdown()
{
    LOGF("Shutting down VulkanRenderDevice with device: {}", (void*)m_device);
}

bool VulkanRenderDevice::isValid() const
{
    return m_device != VK_NULL_HANDLE;
}

void VulkanRenderDevice::waitIdle()
{
    if (m_device)
    {
        vkDeviceWaitIdle(m_device);
    }
}

void* VulkanRenderDevice::getNativeDevice() const
{
    return m_device;
}

void* VulkanRenderDevice::getNativePhysicalDevice() const
{
    return m_physical_device;
}

void* VulkanRenderDevice::getNativeDescriptorPool() const
{
    return nullptr;
}

void* VulkanRenderDevice::getNativeRenderPass() const
{
    return nullptr;
}

RenderCommandQueue* VulkanRenderDevice::createCommandQueue(RenderCommandListType type)
{
    return nullptr;
}

RenderCommandList* VulkanRenderDevice::createCommandList(RenderCommandListType type)
{
    return nullptr;
}

RenderQueryPool* VulkanRenderDevice::createQueryPool(RenderQueryType type, uint32_t count)
{
    return nullptr;
}

} // namespace plume 