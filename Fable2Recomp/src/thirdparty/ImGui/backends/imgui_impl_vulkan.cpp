#include "imgui.h"
#include "imgui_impl_vulkan.h"
#include <vulkan/vulkan.h>

// Vulkan data
struct ImGui_ImplVulkan_Data
{
    VkAllocationCallbacks* Allocator;
    VkInstance Instance;
    VkPhysicalDevice PhysicalDevice;
    VkDevice Device;
    uint32_t QueueFamily;
    VkQueue Queue;
    VkDebugReportCallbackEXT DebugReport;
    VkPipelineCache PipelineCache;
    VkDescriptorPool DescriptorPool;
    ImGui_ImplVulkan_InitInfo InitInfo;
    VkCommandPool CommandPool;
    VkCommandBuffer CommandBuffer;
    VkFence Fence;
    VkDeviceMemory FontMemory;
    VkImage FontImage;
    VkImageView FontView;
    VkSampler Sampler;
    VkDescriptorSetLayout DescriptorSetLayout;
    VkPipelineLayout PipelineLayout;
    VkPipeline Pipeline;
    VkDescriptorSet DescriptorSet;
    VkRenderPass RenderPass;
    VkCommandBuffer* CommandBuffers;
    VkFence* Fences;
    bool UseDynamicRendering;
};

// Backend data stored in io.BackendRendererUserData to allow support for multiple Dear ImGui contexts
static ImGui_ImplVulkan_Data* ImGui_ImplVulkan_GetBackendData()
{
    return ImGui::GetCurrentContext() ? (ImGui_ImplVulkan_Data*)ImGui::GetIO().BackendRendererUserData : nullptr;
}

static void check_vk_result(VkResult err)
{
    if (err == 0)
        return;
    fprintf(stderr, "[vulkan] Error: VkResult = %d\n", err);
    if (err < 0)
        abort();
}

bool ImGui_ImplVulkan_Init(ImGui_ImplVulkan_InitInfo* info, VkRenderPass render_pass)
{
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.BackendRendererUserData == nullptr && "Already initialized a renderer backend!");

    // Setup backend capabilities flags
    io.BackendRendererName = "imgui_impl_vulkan";
    io.BackendFlags |= ImGui::ImGuiBackendFlags_RendererHasVtxOffset;

    // Setup backend data
    ImGui_ImplVulkan_Data* bd = IM_NEW(ImGui_ImplVulkan_Data)();
    io.BackendRendererUserData = (void*)bd;

    // Store Vulkan objects
    bd->Allocator = info->Allocator;
    bd->Instance = info->Instance;
    bd->PhysicalDevice = info->PhysicalDevice;
    bd->Device = info->Device;
    bd->QueueFamily = info->QueueFamily;
    bd->Queue = info->Queue;
    bd->PipelineCache = info->PipelineCache;
    bd->DescriptorPool = info->DescriptorPool;
    bd->RenderPass = render_pass;
    bd->UseDynamicRendering = info->UseDynamicRendering;

    // Create command pool
    VkCommandPoolCreateInfo cmd_pool_info = {};
    cmd_pool_info.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    cmd_pool_info.queueFamilyIndex = bd->QueueFamily;
    cmd_pool_info.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    VkResult err = vkCreateCommandPool(bd->Device, &cmd_pool_info, bd->Allocator, &bd->CommandPool);
    check_vk_result(err);

    // Create command buffer
    VkCommandBufferAllocateInfo cmd_buffer_info = {};
    cmd_buffer_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    cmd_buffer_info.commandPool = bd->CommandPool;
    cmd_buffer_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cmd_buffer_info.commandBufferCount = 1;
    err = vkAllocateCommandBuffers(bd->Device, &cmd_buffer_info, &bd->CommandBuffer);
    check_vk_result(err);

    // Create fence
    VkFenceCreateInfo fence_info = {};
    fence_info.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    fence_info.flags = VK_FENCE_CREATE_SIGNALED_BIT;
    err = vkCreateFence(bd->Device, &fence_info, bd->Allocator, &bd->Fence);
    check_vk_result(err);

    // Create descriptor set layout
    VkDescriptorSetLayoutBinding binding[1] = {};
    binding[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    binding[0].descriptorCount = 1;
    binding[0].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo layout_info = {};
    layout_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    layout_info.bindingCount = 1;
    layout_info.pBindings = binding;
    err = vkCreateDescriptorSetLayout(bd->Device, &layout_info, bd->Allocator, &bd->DescriptorSetLayout);
    check_vk_result(err);

    // Create pipeline layout
    VkPipelineLayoutCreateInfo pipeline_layout_info = {};
    pipeline_layout_info.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    pipeline_layout_info.setLayoutCount = 1;
    pipeline_layout_info.pSetLayouts = &bd->DescriptorSetLayout;
    err = vkCreatePipelineLayout(bd->Device, &pipeline_layout_info, bd->Allocator, &bd->PipelineLayout);
    check_vk_result(err);

    // Create pipeline
    VkGraphicsPipelineCreateInfo pipeline_info = {};
    pipeline_info.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    pipeline_info.layout = bd->PipelineLayout;
    pipeline_info.renderPass = bd->RenderPass;
    err = vkCreateGraphicsPipelines(bd->Device, bd->PipelineCache, 1, &pipeline_info, bd->Allocator, &bd->Pipeline);
    check_vk_result(err);

    // Create descriptor set
    VkDescriptorSetAllocateInfo desc_set_info = {};
    desc_set_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    desc_set_info.descriptorPool = bd->DescriptorPool;
    desc_set_info.descriptorSetCount = 1;
    desc_set_info.pSetLayouts = &bd->DescriptorSetLayout;
    err = vkAllocateDescriptorSets(bd->Device, &desc_set_info, &bd->DescriptorSet);
    check_vk_result(err);

    return true;
}

void ImGui_ImplVulkan_Shutdown()
{
    ImGui_ImplVulkan_Data* bd = ImGui_ImplVulkan_GetBackendData();
    IM_ASSERT(bd != nullptr && "No renderer backend to shutdown, or already shutdown?");
    ImGuiIO& io = ImGui::GetIO();
    io.BackendRendererName = nullptr;
    io.BackendRendererUserData = nullptr;
    io.BackendFlags &= ~ImGui::ImGuiBackendFlags_RendererHasVtxOffset;

    // Destroy Vulkan objects
    vkDestroyDescriptorSetLayout(bd->Device, bd->DescriptorSetLayout, bd->Allocator);
    vkDestroyPipelineLayout(bd->Device, bd->PipelineLayout, bd->Allocator);
    vkDestroyPipeline(bd->Device, bd->Pipeline, bd->Allocator);
    vkDestroyDescriptorPool(bd->Device, bd->DescriptorPool, bd->Allocator);
    vkDestroyCommandPool(bd->Device, bd->CommandPool, bd->Allocator);
    vkDestroyFence(bd->Device, bd->Fence, bd->Allocator);

    IM_DELETE(bd);
}

void ImGui_ImplVulkan_NewFrame()
{
    ImGui_ImplVulkan_Data* bd = ImGui_ImplVulkan_GetBackendData();
    IM_ASSERT(bd != nullptr && "Did you call ImGui_ImplVulkan_Init()?");
}

void ImGui_ImplVulkan_RenderDrawData(ImDrawData* draw_data, VkCommandBuffer command_buffer, VkPipeline pipeline)
{
    ImGui_ImplVulkan_Data* bd = ImGui_ImplVulkan_GetBackendData();
    IM_ASSERT(bd != nullptr && "Did you call ImGui_ImplVulkan_Init()?");

    // Record command buffer
    VkCommandBufferBeginInfo begin_info = {};
    begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    begin_info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    VkResult err = vkBeginCommandBuffer(command_buffer, &begin_info);
    check_vk_result(err);

    // Set viewport
    VkViewport viewport = {};
    viewport.width = draw_data->DisplaySize.x;
    viewport.height = draw_data->DisplaySize.y;
    viewport.minDepth = 0.0f;
    viewport.maxDepth = 1.0f;
    vkCmdSetViewport(command_buffer, 0, 1, &viewport);

    // Set scissor
    VkRect2D scissor = {};
    scissor.extent.width = (uint32_t)draw_data->DisplaySize.x;
    scissor.extent.height = (uint32_t)draw_data->DisplaySize.y;
    vkCmdSetScissor(command_buffer, 0, 1, &scissor);

    // Bind pipeline
    vkCmdBindPipeline(command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);

    // Bind descriptor set
    vkCmdBindDescriptorSets(command_buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, bd->PipelineLayout, 0, 1, &bd->DescriptorSet, 0, nullptr);

    // Draw command lists
    for (int n = 0; n < draw_data->CmdListsCount; n++) {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_buffer = cmd_list->VtxBuffer.Data;
        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;

        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++) {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback) {
                pcmd->UserCallback(cmd_list, pcmd);
            } else {
                VkRect2D scissor;
                scissor.offset.x = (int32_t)(pcmd->ClipRect.x - draw_data->DisplayPos.x);
                scissor.offset.y = (int32_t)(pcmd->ClipRect.y - draw_data->DisplayPos.y);
                scissor.extent.width = (uint32_t)(pcmd->ClipRect.z - pcmd->ClipRect.x);
                scissor.extent.height = (uint32_t)(pcmd->ClipRect.w - pcmd->ClipRect.y);
                vkCmdSetScissor(command_buffer, 0, 1, &scissor);

                vkCmdDrawIndexed(command_buffer, pcmd->ElemCount, 1, pcmd->IdxOffset + cmd_list->IdxBuffer.Offset, pcmd->VtxOffset + cmd_list->VtxBuffer.Offset, 0);
            }
        }
    }

    err = vkEndCommandBuffer(command_buffer);
    check_vk_result(err);
}

bool ImGui_ImplVulkan_CreateFontsTexture(VkCommandBuffer command_buffer)
{
    ImGuiIO& io = ImGui::GetIO();
    ImGui_ImplVulkan_Data* bd = ImGui_ImplVulkan_GetBackendData();
    IM_ASSERT(bd != nullptr && "Did you call ImGui_ImplVulkan_Init()?");

    // Create font image
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);

    // Create image
    VkImageCreateInfo image_info = {};
    image_info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = VK_FORMAT_R8G8B8A8_UNORM;
    image_info.extent.width = width;
    image_info.extent.height = height;
    image_info.extent.depth = 1;
    image_info.mipLevels = 1;
    image_info.arrayLayers = 1;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    image_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

    VkResult err = vkCreateImage(bd->Device, &image_info, bd->Allocator, &bd->FontImage);
    check_vk_result(err);

    // Get memory requirements
    VkMemoryRequirements mem_req;
    vkGetImageMemoryRequirements(bd->Device, bd->FontImage, &mem_req);

    // Allocate memory
    VkMemoryAllocateInfo alloc_info = {};
    alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    alloc_info.allocationSize = mem_req.size;
    alloc_info.memoryTypeIndex = 0; // TODO: Find suitable memory type

    err = vkAllocateMemory(bd->Device, &alloc_info, bd->Allocator, &bd->FontMemory);
    check_vk_result(err);

    // Bind memory
    err = vkBindImageMemory(bd->Device, bd->FontImage, bd->FontMemory, 0);
    check_vk_result(err);

    // Create image view
    VkImageViewCreateInfo view_info = {};
    view_info.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    view_info.image = bd->FontImage;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = VK_FORMAT_R8G8B8A8_UNORM;
    view_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    view_info.subresourceRange.levelCount = 1;
    view_info.subresourceRange.layerCount = 1;

    err = vkCreateImageView(bd->Device, &view_info, bd->Allocator, &bd->FontView);
    check_vk_result(err);

    // Create sampler
    VkSamplerCreateInfo sampler_info = {};
    sampler_info.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    sampler_info.magFilter = VK_FILTER_LINEAR;
    sampler_info.minFilter = VK_FILTER_LINEAR;
    sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler_info.anisotropyEnable = VK_TRUE;
    sampler_info.maxAnisotropy = 16.0f;
    sampler_info.borderColor = VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
    sampler_info.unnormalizedCoordinates = VK_FALSE;
    sampler_info.compareEnable = VK_FALSE;
    sampler_info.compareOp = VK_COMPARE_OP_ALWAYS;
    sampler_info.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
    sampler_info.mipLodBias = 0.0f;
    sampler_info.minLod = 0.0f;
    sampler_info.maxLod = 0.0f;

    err = vkCreateSampler(bd->Device, &sampler_info, bd->Allocator, &bd->Sampler);
    check_vk_result(err);

    // Update descriptor set
    VkDescriptorImageInfo desc_image = {};
    desc_image.sampler = bd->Sampler;
    desc_image.imageView = bd->FontView;
    desc_image.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;

    VkWriteDescriptorSet write_desc = {};
    write_desc.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    write_desc.dstSet = bd->DescriptorSet;
    write_desc.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    write_desc.descriptorCount = 1;
    write_desc.pImageInfo = &desc_image;

    vkUpdateDescriptorSets(bd->Device, 1, &write_desc, 0, nullptr);

    // Upload font data
    VkBufferCreateInfo buffer_info = {};
    buffer_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    buffer_info.size = width * height * 4;
    buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

    VkBuffer staging_buffer;
    err = vkCreateBuffer(bd->Device, &buffer_info, bd->Allocator, &staging_buffer);
    check_vk_result(err);

    VkMemoryRequirements staging_mem_req;
    vkGetBufferMemoryRequirements(bd->Device, staging_buffer, &staging_mem_req);

    VkMemoryAllocateInfo staging_alloc_info = {};
    staging_alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    staging_alloc_info.allocationSize = staging_mem_req.size;
    staging_alloc_info.memoryTypeIndex = 0; // TODO: Find suitable memory type

    VkDeviceMemory staging_memory;
    err = vkAllocateMemory(bd->Device, &staging_alloc_info, bd->Allocator, &staging_memory);
    check_vk_result(err);

    err = vkBindBufferMemory(bd->Device, staging_buffer, staging_memory, 0);
    check_vk_result(err);

    void* mapped;
    err = vkMapMemory(bd->Device, staging_memory, 0, staging_mem_req.size, 0, &mapped);
    check_vk_result(err);

    memcpy(mapped, pixels, width * height * 4);
    vkUnmapMemory(bd->Device, staging_memory);

    // Copy buffer to image
    VkImageMemoryBarrier copy_barrier = {};
    copy_barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    copy_barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    copy_barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    copy_barrier.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    copy_barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    copy_barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    copy_barrier.image = bd->FontImage;
    copy_barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    copy_barrier.subresourceRange.levelCount = 1;
    copy_barrier.subresourceRange.layerCount = 1;

    vkCmdPipelineBarrier(command_buffer, VK_PIPELINE_STAGE_HOST_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0, nullptr, 1, &copy_barrier);

    VkBufferImageCopy region = {};
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1;
    region.imageExtent.width = width;
    region.imageExtent.height = height;

    vkCmdCopyBufferToImage(command_buffer, staging_buffer, bd->FontImage, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);

    VkImageMemoryBarrier use_barrier = {};
    use_barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    use_barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    use_barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
    use_barrier.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    use_barrier.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    use_barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    use_barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    use_barrier.image = bd->FontImage;
    use_barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    use_barrier.subresourceRange.levelCount = 1;
    use_barrier.subresourceRange.layerCount = 1;

    vkCmdPipelineBarrier(command_buffer, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, nullptr, 0, nullptr, 1, &use_barrier);

    // Cleanup
    vkDestroyBuffer(bd->Device, staging_buffer, bd->Allocator);
    vkFreeMemory(bd->Device, staging_memory, bd->Allocator);

    return true;
}

void ImGui_ImplVulkan_DestroyFontUploadObjects()
{
    ImGui_ImplVulkan_Data* bd = ImGui_ImplVulkan_GetBackendData();
    if (bd->UploadBuffer)
    {
        vkDestroyBuffer(bd->Device, bd->UploadBuffer, bd->Allocator);
        bd->UploadBuffer = VK_NULL_HANDLE;
    }
    if (bd->UploadBufferMemory)
    {
        vkFreeMemory(bd->Device, bd->UploadBufferMemory, bd->Allocator);
        bd->UploadBufferMemory = VK_NULL_HANDLE;
    }
}

void ImGui_ImplVulkan_SetMinImageCount(uint32_t min_image_count)
{
    ImGui_ImplVulkan_Data* bd = ImGui_ImplVulkan_GetBackendData();
    IM_ASSERT(min_image_count >= 2);
    if (bd->VulkanInitInfo.MinImageCount == min_image_count)
        return;

    IM_ASSERT(0); // FIXME-VULKAN: This needs to be reimplemented
    bd->VulkanInitInfo.MinImageCount = min_image_count;
} 