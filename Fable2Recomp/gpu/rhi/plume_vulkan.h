#pragma once

#include "plume_render_interface.h"
#include <SDL3/SDL.h>
#include <vulkan/vulkan.h>

namespace plume {

class VulkanRenderDevice;

class VulkanInterface : public RenderInterface {
public:
    explicit VulkanInterface(SDL_Window* window);
    ~VulkanInterface() override;

    bool Initialize() override;
    void Shutdown() override;
    bool isValid() const override;
    void* getNativeInterface() const override;
    RenderDevice* createDevice(const char* name) override;

private:
    SDL_Window* m_window;
    VkInstance m_instance;
    VkDevice m_device;
    VkPhysicalDevice m_physical_device;
    VkSurfaceKHR m_surface;
    bool m_isValid;
    VulkanRenderDevice* m_renderDevice;
};

class VulkanRenderDevice : public RenderDevice {
public:
    VulkanRenderDevice(VkDevice device, VkPhysicalDevice physicalDevice);
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
    VkDevice m_device;
    VkPhysicalDevice m_physical_device;
    VkDescriptorPool m_descriptorPool;
    VkRenderPass m_renderPass;
    bool m_isValid;
};

} // namespace plume 