#include "assets_texture.h"
#include "gpu/gpu.h"
#include <fstream>

namespace assets {

TextureAsset::TextureAsset()
    : m_image(VK_NULL_HANDLE)
    , m_memory(VK_NULL_HANDLE)
    , m_image_view(VK_NULL_HANDLE)
    , m_sampler(VK_NULL_HANDLE)
    , m_width(0)
    , m_height(0)
    , m_format(VK_FORMAT_R8G8B8A8_UNORM)
{
}

TextureAsset::~TextureAsset() {
    Unload();
}

bool TextureAsset::Load(const std::string& path) {
    // Read texture file
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        fprintf(stderr, "Failed to open texture file: %s\n", path.c_str());
        return false;
    }

    // Get file size and read data
    size_t file_size = file.tellg();
    file.seekg(0);
    std::vector<char> buffer(file_size);
    file.read(buffer.data(), file_size);
    file.close();

    // TODO: Parse texture format and dimensions
    // For now, assume RGBA8 format and 256x256 dimensions
    m_width = 256;
    m_height = 256;
    m_format = VK_FORMAT_R8G8B8A8_UNORM;

    // Create Vulkan resources
    if (!CreateImage(buffer.data(), buffer.size()) ||
        !CreateImageView() ||
        !CreateSampler()) {
        Unload();
        return false;
    }

    return true;
}

void TextureAsset::Unload() {
    VkDevice device = gpu::GetDevice();
    if (device) {
        if (m_sampler) vkDestroySampler(device, m_sampler, nullptr);
        if (m_image_view) vkDestroyImageView(device, m_image_view, nullptr);
        if (m_image) vkDestroyImage(device, m_image, nullptr);
        if (m_memory) vkFreeMemory(device, m_memory, nullptr);
    }

    m_sampler = VK_NULL_HANDLE;
    m_image_view = VK_NULL_HANDLE;
    m_image = VK_NULL_HANDLE;
    m_memory = VK_NULL_HANDLE;
}

bool TextureAsset::CreateImage(const void* data, VkDeviceSize size) {
    VkDevice device = gpu::GetDevice();

    // Create image
    VkImageCreateInfo image_info = {};
    image_info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = m_format;
    image_info.extent.width = m_width;
    image_info.extent.height = m_height;
    image_info.extent.depth = 1;
    image_info.mipLevels = 1;
    image_info.arrayLayers = 1;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
    image_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

    if (vkCreateImage(device, &image_info, nullptr, &m_image) != VK_SUCCESS) {
        return false;
    }

    // Get memory requirements
    VkMemoryRequirements mem_reqs;
    vkGetImageMemoryRequirements(device, m_image, &mem_reqs);

    // Allocate memory
    VkMemoryAllocateInfo alloc_info = {};
    alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    alloc_info.allocationSize = mem_reqs.size;
    alloc_info.memoryTypeIndex = gpu::FindMemoryType(
        mem_reqs.memoryTypeBits,
        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
    );

    if (vkAllocateMemory(device, &alloc_info, nullptr, &m_memory) != VK_SUCCESS) {
        return false;
    }

    // Bind memory
    if (vkBindImageMemory(device, m_image, m_memory, 0) != VK_SUCCESS) {
        return false;
    }

    // TODO: Upload texture data using staging buffer
    // For now, we just create the image without data

    return true;
}

bool TextureAsset::CreateImageView() {
    VkDevice device = gpu::GetDevice();

    VkImageViewCreateInfo view_info = {};
    view_info.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    view_info.image = m_image;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = m_format;
    view_info.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
    view_info.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
    view_info.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
    view_info.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
    view_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    view_info.subresourceRange.baseMipLevel = 0;
    view_info.subresourceRange.levelCount = 1;
    view_info.subresourceRange.baseArrayLayer = 0;
    view_info.subresourceRange.layerCount = 1;

    return vkCreateImageView(device, &view_info, nullptr, &m_image_view) == VK_SUCCESS;
}

bool TextureAsset::CreateSampler() {
    VkDevice device = gpu::GetDevice();

    VkSamplerCreateInfo sampler_info = {};
    sampler_info.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    sampler_info.magFilter = VK_FILTER_LINEAR;
    sampler_info.minFilter = VK_FILTER_LINEAR;
    sampler_info.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
    sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler_info.anisotropyEnable = VK_TRUE;
    sampler_info.maxAnisotropy = 16.0f;
    sampler_info.borderColor = VK_BORDER_COLOR_INT_OPAQUE_BLACK;
    sampler_info.unnormalizedCoordinates = VK_FALSE;
    sampler_info.compareEnable = VK_FALSE;
    sampler_info.compareOp = VK_COMPARE_OP_ALWAYS;
    sampler_info.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
    sampler_info.minLod = 0.0f;
    sampler_info.maxLod = 0.0f;
    sampler_info.mipLodBias = 0.0f;

    return vkCreateSampler(device, &sampler_info, nullptr, &m_sampler) == VK_SUCCESS;
}

} // namespace assets 