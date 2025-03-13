#pragma once

#include "assets.h"
#include <vulkan/vulkan.h>
#include <string>
#include <vector>

namespace assets {

class ShaderAsset : public Asset {
public:
    ShaderAsset();
    ~ShaderAsset();

    AssetType GetType() const override { return AssetType::Shader; }
    bool Load(const std::string& path) override;
    void Unload() override;

    VkShaderModule GetModule() const { return m_module; }
    VkShaderStageFlagBits GetStage() const { return m_stage; }

private:
    bool CreateShaderModule(const std::vector<uint32_t>& code);
    bool CompileShader(const std::string& source_code, std::vector<uint32_t>& spirv_code);
    VkShaderStageFlagBits DetermineShaderStage(const std::string& path);

    VkShaderModule m_module;
    VkShaderStageFlagBits m_stage;
};

} // namespace assets 