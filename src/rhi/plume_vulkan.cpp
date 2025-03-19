#include "plume_vulkan.h"
#include <SDL2/SDL_vulkan.h>
#include <iostream> // Include for logging
#include <vector>   // For std::vector

namespace plume {

VulkanInterface::VulkanInterface(SDL_Window* window) : window(window), is_valid(false) {
    VkResult result;

    // Create Vulkan instance
    VkApplicationInfo app_info = {};
    app_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    app_info.pApplicationName = "Fable 2 GOTY";
    app_info.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    app_info.pEngineName = "No Engine";
    app_info.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    app_info.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo create_info = {};
    create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    create_info.pApplicationInfo = &app_info;

    // Get required extensions from SDL
    uint32_t extension_count = 0;
    SDL_Vulkan_GetInstanceExtensions(window, &extension_count, nullptr);
    std::vector<const char*> extensions(extension_count);
    SDL_Vulkan_GetInstanceExtensions(window, &extension_count, extensions.data());

    create_info.enabledExtensionCount = extension_count;
    create_info.ppEnabledExtensionNames = extensions.data();

    // Enable validation layers in debug builds
    #ifdef DEBUG
    const char* validation_layers[] = { "VK_LAYER_KHRONOS_validation" };
    create_info.enabledLayerCount = 1;
    create_info.ppEnabledLayerNames = validation_layers;
    #else
    create_info.enabledLayerCount = 0;
    #endif

    result = vkCreateInstance(&create_info, nullptr, &instance);
    if (result != VK_SUCCESS) {
        std::cerr << "Vulkan Error: Failed to create instance: " << result << std::endl;
        return;
    }

    // Create surface
    if (!SDL_Vulkan_CreateSurface(window, instance, &surface)) {
        std::cerr << "Vulkan Error: Failed to create SDL surface" << std::endl;
        vkDestroyInstance(instance, nullptr);
        return;
    }

    // Select physical device
    uint32_t device_count = 0;
    vkEnumeratePhysicalDevices(instance, &device_count, nullptr);
    if (device_count == 0) {
        std::cerr << "Vulkan Error: No physical devices found" << std::endl;
        vkDestroySurfaceKHR(instance, surface, nullptr);
        vkDestroyInstance(instance, nullptr);
        return;
    }

    std::vector<VkPhysicalDevice> devices(device_count);
    vkEnumeratePhysicalDevices(instance, &device_count, devices.data());
    physical_device = devices[0]; // Just take the first one for now

    // Log the selected physical device
    VkPhysicalDeviceProperties device_properties;
    vkGetPhysicalDeviceProperties(physical_device, &device_properties);
    std::cerr << "Selected Physical Device: " << device_properties.deviceName << std::endl;

    // Create logical device
    float queue_priority = 1.0f;
    VkDeviceQueueCreateInfo queue_create_info = {};
    queue_create_info.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queue_create_info.queueFamilyIndex = 0; // Assuming graphics queue is at index 0
    queue_create_info.queueCount = 1;
    queue_create_info.pQueuePriorities = &queue_priority;

    VkDeviceCreateInfo device_create_info = {};
    device_create_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    device_create_info.queueCreateInfoCount = 1;
    device_create_info.pQueueCreateInfos = &queue_create_info;
    device_create_info.enabledExtensionCount = 0;
    device_create_info.enabledLayerCount = 0;

    result = vkCreateDevice(physical_device, &device_create_info, nullptr, &device);
    if (result != VK_SUCCESS) {
        std::cerr << "Vulkan Error: Failed to create logical device: " << result << std::endl;
        vkDestroySurfaceKHR(instance, surface, nullptr);
        vkDestroyInstance(instance, nullptr);
        return;
    }

    is_valid = true;
}

VulkanInterface::~VulkanInterface() {
    if (is_valid) {
        vkDestroyDevice(device, nullptr);
        vkDestroySurfaceKHR(instance, surface, nullptr);
        vkDestroyInstance(instance, nullptr);
    }
}

// ... rest of the VulkanInterface implementation ...

} // namespace plume