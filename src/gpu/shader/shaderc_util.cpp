#include "shaderc_util.h"
#include <spdlog/spdlog.h>

namespace ShaderUtil {

shaderc_shader_kind ToShadercKind(ShaderType type) {
    switch (type) {
        case ShaderType::Vertex:   return shaderc_glsl_vertex_shader;
        case ShaderType::Fragment: return shaderc_glsl_fragment_shader;
    }
    return shaderc_glsl_infer_from_source;
}

std::vector<uint32_t> CompileGLSL(const std::string& source, ShaderType type, const std::string& name) {
    shaderc::Compiler compiler;
    shaderc::CompileOptions options;

    options.SetTargetEnvironment(shaderc_target_env_vulkan, shaderc_env_version_vulkan_1_1);
    options.SetOptimizationLevel(shaderc_optimization_level_performance);

    shaderc::SpvCompilationResult result =
        compiler.CompileGlslToSpv(source, ToShadercKind(type), name.c_str(), options);

    if (result.GetCompilationStatus() != shaderc_compilation_status_success) {
        spdlog::error("Shader compilation failed for '{}': {}", name, result.GetErrorMessage());
        return {};
    }

    return { result.cbegin(), result.cend() };
}

VkShaderModule CreateShaderModule(VkDevice device, const std::vector<uint32_t>& spirv) {
    VkShaderModuleCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    info.codeSize = spirv.size() * sizeof(uint32_t);
    info.pCode = spirv.data();

    VkShaderModule module;
    if (vkCreateShaderModule(device, &info, nullptr, &module) != VK_SUCCESS) {
        spdlog::error("Failed to create Vulkan shader module.");
        return VK_NULL_HANDLE;
    }

    return module;
}

}

