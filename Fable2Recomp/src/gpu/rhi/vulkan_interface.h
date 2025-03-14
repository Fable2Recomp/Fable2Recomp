#pragma once

// Define VK_NO_PROTOTYPES before including any Vulkan headers
#define VK_NO_PROTOTYPES
#define VK_USE_PLATFORM_XLIB_KHR

// Include base headers first
#include "plume_render_interface.h"
#include <SDL3/SDL.h>

// Include Volk before SDL Vulkan
#include <volk.h>
#include <SDL3/SDL_vulkan.h>

namespace plume {

class VulkanInterface : public RenderInterface {
public:
    VulkanInterface(SDL_Window* window);
    ~VulkanInterface() override;

    bool Initialize() override;
    void Shutdown() override;
    bool isValid() const override;
    void* getNativeInterface() const override;
    RenderDevice* createDevice(const char* name) override;

private:
    VkInstance m_instance;
    VkDebugUtilsMessengerEXT m_debugMessenger;
    bool m_isValid;
    SDL_Window* m_window;
};

class VulkanRenderDevice : public RenderDevice {
public:
    VulkanRenderDevice(VulkanInterface* interface);
    ~VulkanRenderDevice() override;

    bool Initialize() override;
    void Shutdown() override;
    bool isValid() const override;
    void waitIdle() override;
    void* getNativeDevice() const override;
    void* getNativePhysicalDevice() const override;
    void* getNativeDescriptorPool() const override;
    void* getNativeRenderPass() const override;
    RenderCommandQueue* createCommandQueue(RenderCommandListType type) override;
    RenderCommandList* createCommandList(RenderCommandListType type) override;
    RenderQueryPool* createQueryPool(RenderQueryType type, uint32_t count) override;

private:
    VulkanInterface* m_interface;
    VkDevice m_device;
    VkPhysicalDevice m_physicalDevice;
    VkDescriptorPool m_descriptorPool;
    VkRenderPass m_renderPass;
    bool m_isValid;
};

} // namespace plume 