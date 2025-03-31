#pragma once

#include <vulkan/vulkan.h>
#include <SDL3/SDL.h>
#include <imgui.h>
#include <backends/imgui_impl_sdl3.h>
#include <backends/imgui_impl_vulkan.h>
#include <string>
#include <vector>
#include <memory>

namespace xe {
namespace gpu {

class GPUDevice {
public:
    static GPUDevice& GetInstance();

    bool Initialize();
    void Shutdown();

    VkDevice GetDevice() const { return m_device; }
    VkPhysicalDevice GetPhysicalDevice() const { return m_physical_device; }
    VkQueue GetGraphicsQueue() const { return m_graphics_queue; }
    uint32_t GetGraphicsQueueFamily() const { return m_graphics_queue_family; }

private:
    GPUDevice() = default;
    ~GPUDevice() = default;
    GPUDevice(const GPUDevice&) = delete;
    GPUDevice& operator=(const GPUDevice&) = delete;

    bool CreateInstance();
    bool SelectPhysicalDevice();
    bool CreateLogicalDevice();

    VkInstance m_instance = VK_NULL_HANDLE;
    VkDevice m_device = VK_NULL_HANDLE;
    VkPhysicalDevice m_physical_device = VK_NULL_HANDLE;
    VkQueue m_graphics_queue = VK_NULL_HANDLE;
    uint32_t m_graphics_queue_family = 0;
};

bool Init();
void Shutdown();

} // namespace gpu
} // namespace xe 