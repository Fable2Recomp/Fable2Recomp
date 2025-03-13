#include "assets_shader.h"
#include "gpu/gpu.h"
#include <fstream>
#include <sstream>
#include <shaderc/shaderc.hpp>

namespace assets {

ShaderAsset::ShaderAsset()
    : m_module(VK_NULL_HANDLE)
    , m_stage(VK_SHADER_STAGE_VERTEX_BIT)
{
}

ShaderAsset::~ShaderAsset() {
    Unload();
}

bool ShaderAsset::Load(const std::string& path) {
    // Read shader file
    std::ifstream file(path);
    if (!file.is_open()) {
        fprintf(stderr, "Failed to open shader file: %s\n", path.c_str());
        return false;
    }

    // Read file contents
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string source = buffer.str();
    file.close();

    // Determine shader stage
    m_stage = DetermineShaderStage(path);
    if (m_stage == VK_SHADER_STAGE_FLAG_BITS_MAX_ENUM) {
        fprintf(stderr, "Failed to determine shader stage for: %s\n", path.c_str());
        return false;
    }

    // Compile shader to SPIR-V
    std::vector<uint32_t> spirv_code;
    if (!CompileShader(source, spirv_code)) {
        return false;
    }

    // Create shader module
    return CreateShaderModule(spirv_code);
}

void ShaderAsset::Unload() {
    VkDevice device = gpu::GetDevice();
    if (device && m_module) {
        vkDestroyShaderModule(device, m_module, nullptr);
        m_module = VK_NULL_HANDLE;
    }
}

bool ShaderAsset::CreateShaderModule(const std::vector<uint32_t>& code) {
    VkDevice device = gpu::GetDevice();

    VkShaderModuleCreateInfo create_info = {};
    create_info.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    create_info.codeSize = code.size() * sizeof(uint32_t);
    create_info.pCode = code.data();

    if (vkCreateShaderModule(device, &create_info, nullptr, &m_module) != VK_SUCCESS) {
        fprintf(stderr, "Failed to create shader module\n");
        return false;
    }

    return true;
}

bool ShaderAsset::CompileShader(const std::string& source_code, std::vector<uint32_t>& spirv_code) {
    shaderc::Compiler compiler;
    shaderc::CompileOptions options;

    // Set compilation options
    options.SetOptimizationLevel(shaderc_optimization_level_performance);
    options.SetTargetEnvironment(shaderc_target_env_vulkan, shaderc_env_version_vulkan_1_0);

    // Determine shader kind based on stage
    shaderc_shader_kind kind;
    switch (m_stage) {
        case VK_SHADER_STAGE_VERTEX_BIT:
            kind = shaderc_vertex_shader;
            break;
        case VK_SHADER_STAGE_FRAGMENT_BIT:
            kind = shaderc_fragment_shader;
            break;
        case VK_SHADER_STAGE_COMPUTE_BIT:
            kind = shaderc_compute_shader;
            break;
        default:
            fprintf(stderr, "Unsupported shader stage\n");
            return false;
    }

    // Compile shader
    shaderc::SpvCompilationResult result = compiler.CompileGlslToSpv(
        source_code,
        kind,
        "shader",
        options
    );

    if (result.GetCompilationStatus() != shaderc_compilation_status_success) {
        fprintf(stderr, "Shader compilation failed: %s\n", result.GetErrorMessage().c_str());
        return false;
    }

    // Get compiled SPIR-V code
    spirv_code = std::vector<uint32_t>(result.cbegin(), result.cend());
    return true;
}

VkShaderStageFlagBits ShaderAsset::DetermineShaderStage(const std::string& path) {
    std::string extension = path.substr(path.find_last_of(".") + 1);
    
    if (extension == "vert") {
        return VK_SHADER_STAGE_VERTEX_BIT;
    }
    else if (extension == "frag") {
        return VK_SHADER_STAGE_FRAGMENT_BIT;
    }
    else if (extension == "comp") {
        return VK_SHADER_STAGE_COMPUTE_BIT;
    }
    
    return VK_SHADER_STAGE_FLAG_BITS_MAX_ENUM;
}

} // namespace assets 