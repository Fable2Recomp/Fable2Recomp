#pragma once

#include "assets.h"
#include <vulkan/vulkan.h>

namespace assets {

class TextureAsset : public Asset {
public:
    TextureAsset();
    ~TextureAsset() override;

    AssetType GetType() const override { return AssetType::Texture; }
    bool Load(const std::string& path) override;
    void Unload() override;

    VkImage GetImage() const { return m_image; }
    VkImageView GetImageView() const { return m_image_view; }
    VkSampler GetSampler() const { return m_sampler; }
    uint32_t GetWidth() const { return m_width; }
    uint32_t GetHeight() const { return m_height; }

private:
    bool CreateImage(const void* data, VkDeviceSize size);
    bool CreateImageView();
    bool CreateSampler();

    VkImage m_image;
    VkDeviceMemory m_memory;
    VkImageView m_image_view;
    VkSampler m_sampler;
    uint32_t m_width;
    uint32_t m_height;
    VkFormat m_format;
};

} // namespace assets 