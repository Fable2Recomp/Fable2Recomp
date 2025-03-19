#pragma once
#include "imgui.h"      // IMGUI_IMPL_API
#include <vulkan/vulkan.h>

// Initialization data, for ImGui_ImplVulkan_Init()
struct ImGui_ImplVulkan_InitInfo
{
    VkInstance          Instance;
    VkPhysicalDevice    PhysicalDevice;
    VkDevice           Device;
    uint32_t           QueueFamily;
    VkQueue            Queue;
    VkPipelineCache    PipelineCache;
    VkDescriptorPool   DescriptorPool;
    uint32_t           MinImageCount;          // >= 2
    uint32_t           ImageCount;             // >= MinImageCount
    VkSampleCountFlagBits        MSAASamples;  // >= VK_SAMPLE_COUNT_1_BIT
    const VkAllocationCallbacks* Allocator;
    void                (*CheckVkResultFn)(VkResult err);
};

IMGUI_IMPL_API bool     ImGui_ImplVulkan_Init(ImGui_ImplVulkan_InitInfo* info, VkRenderPass render_pass);
IMGUI_IMPL_API void     ImGui_ImplVulkan_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplVulkan_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplVulkan_RenderDrawData(ImDrawData* draw_data, VkCommandBuffer command_buffer, VkPipeline pipeline = VK_NULL_HANDLE);
IMGUI_IMPL_API bool     ImGui_ImplVulkan_CreateFontsTexture(VkCommandBuffer command_buffer);
IMGUI_IMPL_API void     ImGui_ImplVulkan_DestroyFontUploadObjects();
IMGUI_IMPL_API void     ImGui_ImplVulkan_SetMinImageCount(uint32_t min_image_count); // To override MinImageCount after initialization (e.g. if swap chain is recreated) 