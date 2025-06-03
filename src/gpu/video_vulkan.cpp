#include "video_vulkan.h"

#include <volk.h>

#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#include <spdlog/spdlog.h>
#include <kernel/function.h>
#include <kernel/heap.h>
#include <hid/hid.h>
#include <kernel/memory.h>
#include <kernel/xdbf.h>
#include <gpu/shader/shaderc_util.h>
#include <vector>
#include <cassert>

namespace VideoVulkan {

static VkSwapchainKHR g_swapchain = VK_NULL_HANDLE;
static std::vector<VkImage> g_swapchainImages;
static std::vector<VkImageView> g_swapchainImageViews;
static uint32_t g_currentImageIndex = 0;
static VkInstance g_instance = VK_NULL_HANDLE;
static VkSurfaceKHR g_surface = VK_NULL_HANDLE;
static VkPhysicalDevice g_physicalDevice = VK_NULL_HANDLE;
static VkDevice g_device = VK_NULL_HANDLE;
alignas(16) uint8_t g_vulkanPushConstants[40] = {};
bool g_pushConstantsDirty = false;
static VkQueue g_graphicsQueue = VK_NULL_HANDLE;
static VkRenderPass g_renderPass = VK_NULL_HANDLE;
static std::vector<VkFramebuffer> g_framebuffers;
static VkFormat g_swapchainImageFormat = VK_FORMAT_B8G8R8A8_UNORM; // will update from chosenFormat
static VkCommandPool g_commandPool = VK_NULL_HANDLE;
static std::vector<VkCommandBuffer> g_commandBuffers;
static std::vector<uint8_t> g_vertexBufferCPU;
static std::vector<uint8_t> g_indexBufferCPU;
static uint32_t g_vertexCount = 0;
static uint32_t g_indexCount = 0;
VkCommandBuffer g_commandBuffer = VK_NULL_HANDLE;
VkPipelineLayout g_pipelineLayout = VK_NULL_HANDLE;
static VkPipeline g_pipeline = VK_NULL_HANDLE;
VkSemaphore g_imageAvailableSemaphore = VK_NULL_HANDLE;
VkSemaphore g_renderFinishedSemaphore = VK_NULL_HANDLE;
VkQueue g_presentQueue = VK_NULL_HANDLE;
VkExtent2D g_swapchainExtent = {};

static const char* kVertexShaderGLSL = R"glsl(
#version 450
layout(location = 0) out vec3 fragColor;
vec2 positions[3] = vec2[](
    vec2(0.0, -0.5),
    vec2(0.5, 0.5),
    vec2(-0.5, 0.5)
);
vec3 colors[3] = vec3[](
    vec3(1.0, 0.0, 0.0),
    vec3(0.0, 1.0, 0.0),
    vec3(0.0, 0.0, 1.0)
);
void main() {
    gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0);
    fragColor = colors[gl_VertexIndex];
}
)glsl";

static const char* kFragmentShaderGLSL = R"glsl(
#version 450
layout(location = 0) in vec3 fragColor;
layout(location = 0) out vec4 outColor;
void main() {
    outColor = vec4(fragColor, 1.0);
}
)glsl";

extern "C" void CopyShaderConstants(PPCContext& ctx) {
    spdlog::info("🎯 CopyShaderConstants called");
    uint64_t addr = ctx.r4.u64;  // Assuming r4 is the address source in sub_83046D28
    void* src = g_memory.Translate(addr);
    if (src) {
        memcpy(g_vulkanPushConstants, src, 40);
        g_pushConstantsDirty = true;
    }
}

extern "C" void GuestDrawSetup(PPCContext& ctx) {
    spdlog::info("🎯 GuestDrawSetup called");
    uint32_t out = ctx.r3.u32;
    uint32_t name = ctx.r4.u32;
    int32_t nameLen = ctx.r5.s32;
    uint32_t renderState = ctx.r6.u32;
    uint32_t drawFlags = ctx.r7.u32;
    uint32_t vtx = ctx.r8.u32;
    uint32_t idx = ctx.r9.u32;

    if (!vtx || !idx) {
        ctx.r3.u32 = 0x80004005;
        return;
    }

    const char* nameStr = reinterpret_cast<const char*>(g_memory.Translate(name));
    std::string safeName = nameStr && nameLen > 0 ? std::string(nameStr, nameLen) : "[unnamed]";

    spdlog::info("[DrawSetup] name={}, vtx=0x{:X}, idx=0x{:X}", safeName, vtx, idx);

    g_vertexCount = 3;
    g_indexCount = 3;
    g_vertexBufferCPU.resize(g_vertexCount * sizeof(float) * 4);
    g_indexBufferCPU.resize(g_indexCount * sizeof(uint16_t));

    void* vtxData = g_memory.Translate(vtx);
    void* idxData = g_memory.Translate(idx);
    if (vtxData && idxData) {
        memcpy(g_vertexBufferCPU.data(), vtxData, g_vertexBufferCPU.size());
        memcpy(g_indexBufferCPU.data(), idxData, g_indexBufferCPU.size());
    }

    ctx.r3.u32 = 0;  // success

if (vtxData) {
    spdlog::info("Vertex buffer dump:");
    auto* bytes = reinterpret_cast<const uint8_t*>(vtxData);
    for (size_t i = 0; i < 64; i += 16) {
        spdlog::info("{:02X} {:02X} {:02X} {:02X}  {:02X} {:02X} {:02X} {:02X}  {:02X} {:02X} {:02X} {:02X}  {:02X} {:02X} {:02X} {:02X}",
            bytes[i], bytes[i+1], bytes[i+2], bytes[i+3],
            bytes[i+4], bytes[i+5], bytes[i+6], bytes[i+7],
            bytes[i+8], bytes[i+9], bytes[i+10], bytes[i+11],
            bytes[i+12], bytes[i+13], bytes[i+14], bytes[i+15]
        );
    }
}
}

extern "C" void GuestDrawSubmit(PPCContext& ctx) {
    spdlog::info("🎯 GuestDrawSubmit called");
    uint32_t src = ctx.r5.u32;
    uint32_t size = ctx.r6.u32;
    void* data = g_memory.Translate(src);

    if (data && size < 0x10000) {
        spdlog::info("[DrawSubmit] Uploading draw data: 0x{:08X} size=0x{:X}", src, size);
        // TODO: GPU buffer write/upload
    }

    ctx.r3.u32 = 0;
}

bool GetSDLVulkanExtensions(std::vector<const char*>& outExtensionPtrs, std::vector<std::string>& outOwnedExtensions) {

    Uint32 extensionCount = 0;
    const char* const* sdlExtensions = SDL_Vulkan_GetInstanceExtensions(&extensionCount);
    if (!sdlExtensions || extensionCount == 0) {
        spdlog::error("SDL_Vulkan_GetInstanceExtensions failed or returned no extensions: {}", SDL_GetError());
        return false;
    }

    outOwnedExtensions.clear();
    outExtensionPtrs.clear();

    spdlog::info("Raw SDL Vulkan extensions ({}):", extensionCount);
    for (Uint32 i = 0; i < extensionCount; ++i) {
        const char* ext = sdlExtensions[i];
        if (ext && std::strlen(ext) > 0) {
            spdlog::info("  [{}] {}", i, ext);
            outOwnedExtensions.emplace_back(ext);
        } else {
            spdlog::warn("Skipping invalid or empty SDL Vulkan extension [{}]: '{}'", i, ext ? ext : "<null>");
        }
    }

    // Build the final pointer list after vector is stable
    outExtensionPtrs.reserve(outOwnedExtensions.size());
    for (const auto& s : outOwnedExtensions)
        outExtensionPtrs.push_back(s.c_str());

    if (outExtensionPtrs.empty()) {
        spdlog::error("No valid Vulkan instance extensions were found.");
        return false;
    }

    spdlog::info("Final Vulkan instance extension list ({}):", outExtensionPtrs.size());
    for (size_t i = 0; i < outExtensionPtrs.size(); ++i) {
        spdlog::info("  [{}] {}", i, outExtensionPtrs[i]);
    }

    return true;
}

bool Init(SDL_Window* window) {

    if (volkInitialize() != VK_SUCCESS) {
        spdlog::error("Failed to initialize Volk.");
        return false;
    }

    const char* requiredDeviceExtensions[] = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };

    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Fable2 Vulkan";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "Fable2Recomp";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_1;


    // Get Vulkan instance extensions from SDL

    std::vector<std::string> ownedExtensions;
    std::vector<const char*> extensionPtrs;

    if (!GetSDLVulkanExtensions(extensionPtrs, ownedExtensions)) {
        return false;
    }

    // Create Vulkan instance
    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.enabledExtensionCount = static_cast<uint32_t>(extensionPtrs.size());
    createInfo.ppEnabledExtensionNames = extensionPtrs.data();

    VkResult res = vkCreateInstance(&createInfo, nullptr, &g_instance);
    if (res != VK_SUCCESS) {
        spdlog::error("vkCreateInstance failed with code {}", static_cast<int>(res));
        return false;
    }

    volkLoadInstance(g_instance); // Load Vulkan instance functions

    spdlog::info("Vulkan instance created");

    uint32_t deviceCount = 0;
    vkEnumeratePhysicalDevices(g_instance, &deviceCount, nullptr);
    if (deviceCount == 0) {
        spdlog::error("No Vulkan-capable GPUs found.");
        return false;
    }
    std::vector<VkPhysicalDevice> devices(deviceCount);
    vkEnumeratePhysicalDevices(g_instance, &deviceCount, devices.data());

    g_physicalDevice = devices[0]; // For now just pick the first

    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(g_physicalDevice, &queueFamilyCount, nullptr);
    std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(g_physicalDevice, &queueFamilyCount, queueFamilies.data());

    int graphicsQueueIndex = -1;
    for (uint32_t i = 0; i < queueFamilies.size(); ++i) {
        if (queueFamilies[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            graphicsQueueIndex = i;
            break;
        }
    }
    if (graphicsQueueIndex == -1) {
        spdlog::error("No graphics queue found.");
        return false;
    }

    float queuePriority = 1.0f;
    VkDeviceQueueCreateInfo queueCreateInfo{};
    queueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queueCreateInfo.queueFamilyIndex = graphicsQueueIndex;
    queueCreateInfo.queueCount = 1;
    queueCreateInfo.pQueuePriorities = &queuePriority;

    uint32_t deviceExtensionCount = 0;
    vkEnumerateDeviceExtensionProperties(g_physicalDevice, nullptr, &deviceExtensionCount, nullptr);
    std::vector<VkExtensionProperties> availableExtensions(deviceExtensionCount);
    vkEnumerateDeviceExtensionProperties(g_physicalDevice, nullptr, &deviceExtensionCount, availableExtensions.data());

    bool found = false;
    for (const auto& ext : availableExtensions) {
        if (strcmp(ext.extensionName, VK_KHR_SWAPCHAIN_EXTENSION_NAME) == 0) {
            found = true;
            break;
        }
    }
    if (!found) {
        spdlog::error("VK_KHR_swapchain not supported by physical device.");
        return false;
    }

    //VkDeviceCreate
    VkDeviceCreateInfo deviceCreateInfo{};
    deviceCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    deviceCreateInfo.queueCreateInfoCount = 1;
    deviceCreateInfo.pQueueCreateInfos = &queueCreateInfo;
    deviceCreateInfo.enabledExtensionCount = 1;
    deviceCreateInfo.ppEnabledExtensionNames = requiredDeviceExtensions;

    res = vkCreateDevice(g_physicalDevice, &deviceCreateInfo, nullptr, &g_device);
    if (res != VK_SUCCESS) {
        spdlog::error("Failed to create Vulkan device.");
        return false;
    }

    volkLoadDevice(g_device); // <-- Load Vulkan device functions
    vkGetDeviceQueue(g_device, graphicsQueueIndex, 0, &g_graphicsQueue);
    g_presentQueue = g_graphicsQueue;  // Use same queue for now


    // Create surface from SDL window
    if (!SDL_Vulkan_CreateSurface(window, g_instance, nullptr, &g_surface)) {
        spdlog::error("SDL_Vulkan_CreateSurface failed: {}", SDL_GetError());
        return false;
    }

    spdlog::info("Vulkan surface created successfully");

    // 1. Query surface capabilities
    VkSurfaceCapabilitiesKHR surfaceCapabilities;
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR(g_physicalDevice, g_surface, &surfaceCapabilities);

    // 2. Get available surface formats
    uint32_t formatCount;
    vkGetPhysicalDeviceSurfaceFormatsKHR(g_physicalDevice, g_surface, &formatCount, nullptr);
    std::vector<VkSurfaceFormatKHR> surfaceFormats(formatCount);
    vkGetPhysicalDeviceSurfaceFormatsKHR(g_physicalDevice, g_surface, &formatCount, surfaceFormats.data());

    // Pick preferred format
    VkSurfaceFormatKHR chosenFormat = surfaceFormats[0];
    for (const auto& format : surfaceFormats) {
        if (format.format == VK_FORMAT_B8G8R8A8_UNORM && format.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR) {
            chosenFormat = format;
            break;
        }
    }

    // 3. Get present modes
    uint32_t presentModeCount;
    vkGetPhysicalDeviceSurfacePresentModesKHR(g_physicalDevice, g_surface, &presentModeCount, nullptr);
    std::vector<VkPresentModeKHR> presentModes(presentModeCount);
    vkGetPhysicalDeviceSurfacePresentModesKHR(g_physicalDevice, g_surface, &presentModeCount, presentModes.data());

    // Pick mailbox if available, else fallback to FIFO (always supported)
    VkPresentModeKHR chosenPresentMode = VK_PRESENT_MODE_FIFO_KHR;
    for (const auto& mode : presentModes) {
        if (mode == VK_PRESENT_MODE_MAILBOX_KHR) {
            chosenPresentMode = mode;
            break;
        }
    }

    int w = 0, h = 0;
    SDL_GetWindowSizeInPixels(window, &w, &h);

    if (surfaceCapabilities.currentExtent.width == UINT32_MAX) {
        // Manually specify the extent
        g_swapchainExtent.width = static_cast<uint32_t>(w);
        g_swapchainExtent.height = static_cast<uint32_t>(h);
    } else {
        g_swapchainExtent = surfaceCapabilities.currentExtent;
    }

    // 4. Create swapchain
    VkSwapchainCreateInfoKHR swapchainCreateInfo{};
    swapchainCreateInfo.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    swapchainCreateInfo.surface = g_surface;
    swapchainCreateInfo.minImageCount = surfaceCapabilities.minImageCount + 1;
    swapchainCreateInfo.imageFormat = chosenFormat.format;
    swapchainCreateInfo.imageColorSpace = chosenFormat.colorSpace;
    swapchainCreateInfo.imageExtent = g_swapchainExtent;
    swapchainCreateInfo.imageArrayLayers = 1;
    swapchainCreateInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    swapchainCreateInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    swapchainCreateInfo.preTransform = surfaceCapabilities.currentTransform;
    swapchainCreateInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    swapchainCreateInfo.presentMode = chosenPresentMode;
    swapchainCreateInfo.clipped = VK_TRUE;
    swapchainCreateInfo.oldSwapchain = VK_NULL_HANDLE;

    VkResult result = vkCreateSwapchainKHR(g_device, &swapchainCreateInfo, nullptr, &g_swapchain);
    if (result != VK_SUCCESS) {
        spdlog::error("Failed to create Vulkan swapchain (code {})", static_cast<int>(result));
        return false;
    }

    spdlog::info("Vulkan swapchain created successfully");

    // Get swapchain images
    uint32_t imageCount = 0;
    vkGetSwapchainImagesKHR(g_device, g_swapchain, &imageCount, nullptr);
    g_swapchainImages.resize(imageCount);
    vkGetSwapchainImagesKHR(g_device, g_swapchain, &imageCount, g_swapchainImages.data());

    // Create image views
    g_swapchainImageViews.resize(imageCount);

    for (size_t i = 0; i < imageCount; ++i) {
        VkImageViewCreateInfo viewInfo{};
        viewInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        viewInfo.image = g_swapchainImages[i];
        viewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
        viewInfo.format = chosenFormat.format;
        viewInfo.components = { VK_COMPONENT_SWIZZLE_IDENTITY };
        viewInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        viewInfo.subresourceRange.baseMipLevel = 0;
        viewInfo.subresourceRange.levelCount = 1;
        viewInfo.subresourceRange.baseArrayLayer = 0;
        viewInfo.subresourceRange.layerCount = 1;

        if (vkCreateImageView(g_device, &viewInfo, nullptr, &g_swapchainImageViews[i]) != VK_SUCCESS) {
            spdlog::error("Failed to create image view for swapchain image {}", i);
            return false;
        }
    }

    g_swapchainImageFormat = chosenFormat.format;

    VkAttachmentDescription colorAttachment{};
    colorAttachment.format = g_swapchainImageFormat;  // MUST match swapchain format
    colorAttachment.samples = VK_SAMPLE_COUNT_1_BIT;
    colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    colorAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    colorAttachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    colorAttachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;;

    VkAttachmentReference colorAttachmentRef{};
    colorAttachmentRef.attachment = 0;
    colorAttachmentRef.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &colorAttachmentRef;

    VkRenderPassCreateInfo renderPassInfo{};
    renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    renderPassInfo.attachmentCount = 1;
    renderPassInfo.pAttachments = &colorAttachment;
    renderPassInfo.subpassCount = 1;
    renderPassInfo.pSubpasses = &subpass;

    if (vkCreateRenderPass(g_device, &renderPassInfo, nullptr, &g_renderPass) != VK_SUCCESS) {
        spdlog::error("Failed to create render pass");
        return false;
    }

    g_framebuffers.resize(imageCount);

    for (size_t i = 0; i < imageCount; ++i) {
        VkImageView attachments[] = { g_swapchainImageViews[i] };

    VkFramebufferCreateInfo framebufferInfo{};
    framebufferInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    framebufferInfo.renderPass = g_renderPass;
    framebufferInfo.attachmentCount = 1;
    framebufferInfo.pAttachments = &g_swapchainImageViews[i];
    framebufferInfo.width = g_swapchainExtent.width;
    framebufferInfo.height = g_swapchainExtent.height;
    framebufferInfo.layers = 1;

        if (vkCreateFramebuffer(g_device, &framebufferInfo, nullptr, &g_framebuffers[i]) != VK_SUCCESS) {
            spdlog::error("Failed to create framebuffer {}", i);
            return false;
        }   
    }

    VkCommandPoolCreateInfo poolInfo{};
    poolInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    poolInfo.queueFamilyIndex = graphicsQueueIndex;
    poolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;

    if (vkCreateCommandPool(g_device, &poolInfo, nullptr, &g_commandPool) != VK_SUCCESS) {
        spdlog::error("Failed to create command pool");
        return false;
    }

    g_commandBuffers.resize(g_framebuffers.size());

    VkCommandBufferAllocateInfo allocInfo{};
    allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    allocInfo.commandPool = g_commandPool;
    allocInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocInfo.commandBufferCount = static_cast<uint32_t>(g_commandBuffers.size());

    if (vkAllocateCommandBuffers(g_device, &allocInfo, g_commandBuffers.data()) != VK_SUCCESS) {
        spdlog::error("Failed to allocate command buffers");
        return false;
    }

    VkSemaphoreCreateInfo semaphoreInfo{};
    semaphoreInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;

    if (vkCreateSemaphore(g_device, &semaphoreInfo, nullptr, &g_imageAvailableSemaphore) != VK_SUCCESS ||
        vkCreateSemaphore(g_device, &semaphoreInfo, nullptr, &g_renderFinishedSemaphore) != VK_SUCCESS) {
        spdlog::error("Failed to create synchronization semaphores");
        return false;
    }

    return true;
}

void BeginFrame() {
    
    VkResult res = vkAcquireNextImageKHR(
        g_device,
        g_swapchain,
        UINT64_MAX,
        g_imageAvailableSemaphore,
        VK_NULL_HANDLE,
        &g_currentImageIndex
    );

    if (res != VK_SUCCESS) {
        spdlog::error("vkAcquireNextImageKHR failed with {}", static_cast<int>(res));
        return;
    }

    VkCommandBuffer cmd = g_commandBuffers[g_currentImageIndex];

    // Begin command buffer recording
    VkCommandBufferBeginInfo beginInfo{};
    beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;

    VkResult beginResult = vkBeginCommandBuffer(cmd, &beginInfo);
    if (beginResult != VK_SUCCESS) {
        spdlog::error("vkBeginCommandBuffer failed: {}", static_cast<int>(beginResult));
        return;
    }

    // Use a distinct background to verify framebuffer contents (e.g., magenta)
    VkClearValue clearColor = { {{1.0f, 0.0f, 1.0f, 1.0f}} };

    VkRenderPassBeginInfo renderPassInfo{};
    renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    renderPassInfo.renderPass = g_renderPass;
    renderPassInfo.framebuffer = g_framebuffers[g_currentImageIndex];
    renderPassInfo.renderArea.offset = {0, 0};
    renderPassInfo.renderArea.extent = g_swapchainExtent;
    renderPassInfo.clearValueCount = 1;
    renderPassInfo.pClearValues = &clearColor;

    vkCmdBeginRenderPass(cmd, &renderPassInfo, VK_SUBPASS_CONTENTS_INLINE);

    if (g_pipeline != VK_NULL_HANDLE) {
        vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, g_pipeline);

        VkViewport viewport{};
        viewport.x = 0.0f;
        viewport.y = 0.0f;
        viewport.width = (float)g_swapchainExtent.width;
        viewport.height = (float)g_swapchainExtent.height;
        viewport.minDepth = 0.0f;
        viewport.maxDepth = 1.0f;
        vkCmdSetViewport(cmd, 0, 1, &viewport);

        VkRect2D scissor{};
        scissor.offset = {0, 0};
        scissor.extent = g_swapchainExtent;
        vkCmdSetScissor(cmd, 0, 1, &scissor);

VkClearAttachment clearAttachment{};
clearAttachment.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
clearAttachment.colorAttachment = 0;
clearAttachment.clearValue.color = {{0.0f, 1.0f, 0.0f, 1.0f}}; // bright green

VkClearRect clearRect{};
clearRect.rect.offset = {0, 0};
clearRect.rect.extent = g_swapchainExtent;
clearRect.baseArrayLayer = 0;
clearRect.layerCount = 1;

vkCmdClearAttachments(cmd, 1, &clearAttachment, 1, &clearRect);

        // Issue draw call for 3 vertices, 1 instance
        vkCmdDraw(cmd, 3, 1, 0, 0);
    } else {
        spdlog::warn("No pipeline bound — skipping draw");
    }

    // Do NOT call vkEndCommandBuffer() here — it's handled in EndFrame()
}


void EndFrame() {
    VkCommandBuffer cmd = g_commandBuffers[g_currentImageIndex];

    // End render pass and command buffer (should only happen here)
    vkCmdEndRenderPass(cmd);
    vkEndCommandBuffer(cmd);

    VkSemaphore waitSemaphores[] = { g_imageAvailableSemaphore };
    VkPipelineStageFlags waitStages[] = { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
    VkSemaphore signalSemaphores[] = { g_renderFinishedSemaphore };

    VkSubmitInfo submitInfo{};
    submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submitInfo.waitSemaphoreCount = 1;
    submitInfo.pWaitSemaphores = waitSemaphores;
    submitInfo.pWaitDstStageMask = waitStages;
    submitInfo.commandBufferCount = 1;
    submitInfo.pCommandBuffers = &cmd;
    submitInfo.signalSemaphoreCount = 1;
    submitInfo.pSignalSemaphores = signalSemaphores;

    if (vkQueueSubmit(g_graphicsQueue, 1, &submitInfo, VK_NULL_HANDLE) != VK_SUCCESS) {
        spdlog::error("vkQueueSubmit failed");
        return;
    }

    VkPresentInfoKHR presentInfo{};
    presentInfo.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    presentInfo.waitSemaphoreCount = 1;
    presentInfo.pWaitSemaphores = signalSemaphores;
    presentInfo.swapchainCount = 1;
    presentInfo.pSwapchains = &g_swapchain;
    presentInfo.pImageIndices = &g_currentImageIndex;

    if (vkQueuePresentKHR(g_graphicsQueue, &presentInfo) != VK_SUCCESS) {
        spdlog::error("vkQueuePresentKHR failed");
    }

    // Optional: temporary sync (slow)
    vkQueueWaitIdle(g_graphicsQueue);
}


void PrecompilePipelines() {
    spdlog::info("PrecompilePipelines: compiling stub triangle pipeline...");

    static const char* kVertexShaderGLSL = R"glsl(
        #version 450
        layout(location = 0) out vec3 fragColor;
        vec2 positions[3] = vec2[](
            vec2(0.0, -0.5),
            vec2(0.5, 0.5),
            vec2(-0.5, 0.5)
        );
        vec3 colors[3] = vec3[](
            vec3(1.0, 0.0, 0.0),
            vec3(0.0, 1.0, 0.0),
            vec3(0.0, 0.0, 1.0)
        );
        void main() {
            gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0);
            fragColor = colors[gl_VertexIndex];
        }
    )glsl";

    static const char* kFragmentShaderGLSL = R"glsl(
    #version 450
    layout(location = 0) out vec4 outColor;
    void main() {
        outColor = vec4(1.0, 0.0, 1.0, 1.0); // BRIGHT MAGENTA
    }
    )glsl";

    auto vertSpirv = ShaderUtil::CompileGLSL(kVertexShaderGLSL, ShaderType::Vertex, "triangle.vert");
    auto fragSpirv = ShaderUtil::CompileGLSL(kFragmentShaderGLSL, ShaderType::Fragment, "triangle.frag");
    if (vertSpirv.empty() || fragSpirv.empty()) {
        spdlog::error("Failed to compile triangle shaders.");
        return;
    }

    VkShaderModule vertModule = ShaderUtil::CreateShaderModule(g_device, vertSpirv);
    VkShaderModule fragModule = ShaderUtil::CreateShaderModule(g_device, fragSpirv);

    if (vertModule == VK_NULL_HANDLE || fragModule == VK_NULL_HANDLE) {
        spdlog::error("Failed to create shader modules.");
        return;
    }

    VkPipelineShaderStageCreateInfo stages[2]{};
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = vertModule;
    stages[0].pName = "main";

    stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = fragModule;
    stages[1].pName = "main";

    // No vertex input (using gl_VertexIndex)
    VkPipelineVertexInputStateCreateInfo vertexInput{};
    vertexInput.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

    VkPipelineInputAssemblyStateCreateInfo inputAssembly{};
    inputAssembly.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    inputAssembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    VkViewport viewport{};
    viewport.x = 0.0f;
    viewport.y = 0.0f;
    viewport.width = static_cast<float>(g_swapchainExtent.width);
    viewport.height = static_cast<float>(g_swapchainExtent.height);
    viewport.minDepth = 0.0f;
    viewport.maxDepth = 1.0f;

    VkRect2D scissor{};
    scissor.offset = {0, 0};
    scissor.extent = g_swapchainExtent;

    VkPipelineViewportStateCreateInfo viewportState{};
    viewportState.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewportState.viewportCount = 1;
    viewportState.pViewports = &viewport;
    viewportState.scissorCount = 1;
    viewportState.pScissors = &scissor;

    VkPipelineRasterizationStateCreateInfo rasterizer{};
    rasterizer.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    rasterizer.polygonMode = VK_POLYGON_MODE_FILL;
    rasterizer.cullMode = VK_CULL_MODE_BACK_BIT;
    rasterizer.frontFace = VK_FRONT_FACE_CLOCKWISE;
    rasterizer.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo multisampling{};
    multisampling.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    multisampling.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineColorBlendAttachmentState colorBlendAttachment{};
    colorBlendAttachment.colorWriteMask =
        VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
        VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
    colorBlendAttachment.blendEnable = VK_FALSE;

    VkPipelineColorBlendStateCreateInfo colorBlending{};
    colorBlending.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    colorBlending.attachmentCount = 1;
    colorBlending.pAttachments = &colorBlendAttachment;

    VkPipelineLayoutCreateInfo pipelineLayoutInfo{};
    pipelineLayoutInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    pipelineLayoutInfo.pushConstantRangeCount = 0;
    pipelineLayoutInfo.pPushConstantRanges = nullptr;

    if (vkCreatePipelineLayout(g_device, &pipelineLayoutInfo, nullptr, &g_pipelineLayout) != VK_SUCCESS) {
        spdlog::error("Failed to create pipeline layout.");
        return;
    }

    VkGraphicsPipelineCreateInfo pipelineInfo{};
    pipelineInfo.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    pipelineInfo.stageCount = 2;
    pipelineInfo.pStages = stages;
    pipelineInfo.pVertexInputState = &vertexInput;
    pipelineInfo.pInputAssemblyState = &inputAssembly;
    pipelineInfo.pViewportState = &viewportState;
    pipelineInfo.pRasterizationState = &rasterizer;
    pipelineInfo.pMultisampleState = &multisampling;
    pipelineInfo.pColorBlendState = &colorBlending;
    pipelineInfo.layout = g_pipelineLayout;
    pipelineInfo.renderPass = g_renderPass;
    pipelineInfo.subpass = 0;

    if (vkCreateGraphicsPipelines(g_device, VK_NULL_HANDLE, 1, &pipelineInfo, nullptr, &g_pipeline) != VK_SUCCESS) {
        spdlog::error("Failed to create graphics pipeline.");
        return;
    }

    spdlog::info("Stub triangle graphics pipeline created successfully.");
}


void WaitOnSwapChain() {
    spdlog::debug("WaitOnSwapChain (stub)");
}

void WaitForGPU() {
    spdlog::debug("WaitForGPU (stub)");
}

void UpdateViewport() {
    spdlog::debug("UpdateViewport (stub)");
}

} // namespace VideoVulkan

GUEST_FUNCTION_HOOK(sub_83046D28, VideoVulkan::CopyShaderConstants);
GUEST_FUNCTION_HOOK(sub_83023320, VideoVulkan::GuestDrawSetup);
GUEST_FUNCTION_HOOK(sub_830F6C28, VideoVulkan::GuestDrawSubmit)
