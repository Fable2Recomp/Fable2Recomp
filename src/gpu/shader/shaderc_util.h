#pragma once

#include <string>
#include <vector>
#include <volk.h>
#include <shaderc/shaderc.hpp>

enum class ShaderType {
    Vertex,
    Fragment
};

namespace ShaderUtil {

shaderc_shader_kind ToShadercKind(ShaderType type);

std::vector<uint32_t> CompileGLSL(const std::string& source, ShaderType type, const std::string& name);

VkShaderModule CreateShaderModule(VkDevice device, const std::vector<uint32_t>& spirv);

} // namespace ShaderUtil

