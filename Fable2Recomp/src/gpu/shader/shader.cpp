#include "shader.h"
#include "../video.h"
#include <fstream>
#include <algorithm>
#include <spirv_cross/spirv_cross.hpp>
#include <spirv-tools/libspirv.h>
#include <smol-v/smolv.h>

namespace shader {

// Static member initialization
std::vector<uint8_t> ShaderManager::shaderCache;
std::unordered_map<std::string, ShaderCacheEntry> ShaderManager::shaderCacheEntries;

// GuestShader implementation
bool GuestShader::InitFromSPIRV(const void* data, size_t size) {
    std::vector<uint32_t> spirv;
    if (!utils::DecodeSPIRV(data, size, spirv)) {
        return false;
    }

    // Create the base shader
    shader = g_device->createShader(
        spirv.data(),
        spirv.size() * sizeof(uint32_t),
        entryPoint.c_str(),
        plume::RenderShaderFormat::SPIRV
    );

    if (!shader) {
        return false;
    }

    // Analyze shader for specialization constants
    spirv_cross::CompilerGLSL compiler(spirv);
    auto resources = compiler.get_shader_resources();
    
    // Get specialization constants
    auto spec_constants = compiler.get_specialization_constants();
    specConstantsMask = 0;
    for (auto& c : spec_constants) {
        specConstantsMask |= (1u << c.constant_id);
    }

    return true;
}

bool GuestShader::InitFromCache(const ShaderCacheEntry* entry) {
    shaderCacheEntry = entry;
    specConstantsMask = entry->specConstantsMask;
    return true;
}

plume::RenderShader* GuestShader::GetVariant(uint32_t specConstants) {
    // If no specialization constants are used, return the base shader
    if (specConstantsMask == 0) {
        return shader.get();
    }

    // Check if variant already exists
    {
        std::lock_guard<std::mutex> lock(mutex);
        auto it = variants.find(specConstants);
        if (it != variants.end()) {
            return it->second.get();
        }
    }

    // Create new variant
    auto variant = g_device->createShader(
        ShaderManager::shaderCache.data() + shaderCacheEntry->spirvOffset,
        shaderCacheEntry->spirvSize,
        entryPoint.c_str(),
        plume::RenderShaderFormat::SPIRV
    );

    if (!variant) {
        return nullptr;
    }

    // Store and return the new variant
    std::lock_guard<std::mutex> lock(mutex);
    variants[specConstants] = std::move(variant);
    return variants[specConstants].get();
}

// ShaderManager implementation
bool ShaderManager::Initialize() {
    return true;
}

void ShaderManager::Shutdown() {
    shaderCache.clear();
    shaderCacheEntries.clear();
}

std::unique_ptr<GuestShader> ShaderManager::CreateShaderFromSPIRV(const void* data, size_t size, ShaderType type) {
    auto shader = std::make_unique<GuestShader>();
    shader->type = type;
    shader->entryPoint = "main";

    if (!shader->InitFromSPIRV(data, size)) {
        return nullptr;
    }

    return shader;
}

std::unique_ptr<GuestShader> ShaderManager::CreateShaderFromCache(const ShaderCacheEntry* entry, ShaderType type) {
    auto shader = std::make_unique<GuestShader>();
    shader->type = type;
    shader->entryPoint = "main";

    if (!shader->InitFromCache(entry)) {
        return nullptr;
    }

    return shader;
}

bool ShaderManager::LoadShaderCache(const std::string& cachePath) {
    std::ifstream file(cachePath, std::ios::binary);
    if (!file) {
        return false;
    }

    // Read header
    uint32_t numEntries;
    file.read(reinterpret_cast<char*>(&numEntries), sizeof(numEntries));

    // Read entries
    for (uint32_t i = 0; i < numEntries; i++) {
        // Read entry name
        uint32_t nameLength;
        file.read(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
        
        std::string name(nameLength, '\0');
        file.read(&name[0], nameLength);

        // Read entry data
        ShaderCacheEntry entry;
        file.read(reinterpret_cast<char*>(&entry), sizeof(entry));
        
        shaderCacheEntries[name] = entry;
    }

    // Read shader binary data
    uint32_t cacheSize;
    file.read(reinterpret_cast<char*>(&cacheSize), sizeof(cacheSize));
    
    shaderCache.resize(cacheSize);
    file.read(reinterpret_cast<char*>(shaderCache.data()), cacheSize);

    return true;
}

bool ShaderManager::SaveShaderCache(const std::string& cachePath) {
    std::ofstream file(cachePath, std::ios::binary);
    if (!file) {
        return false;
    }

    // Write header
    uint32_t numEntries = static_cast<uint32_t>(shaderCacheEntries.size());
    file.write(reinterpret_cast<const char*>(&numEntries), sizeof(numEntries));

    // Write entries
    for (const auto& [name, entry] : shaderCacheEntries) {
        // Write entry name
        uint32_t nameLength = static_cast<uint32_t>(name.length());
        file.write(reinterpret_cast<const char*>(&nameLength), sizeof(nameLength));
        file.write(name.c_str(), nameLength);

        // Write entry data
        file.write(reinterpret_cast<const char*>(&entry), sizeof(entry));
    }

    // Write shader binary data
    uint32_t cacheSize = static_cast<uint32_t>(shaderCache.size());
    file.write(reinterpret_cast<const char*>(&cacheSize), sizeof(cacheSize));
    file.write(reinterpret_cast<const char*>(shaderCache.data()), shaderCache.size());

    return true;
}

void ShaderManager::ClearShaderCache() {
    shaderCache.clear();
    shaderCacheEntries.clear();
}

// Shader utilities implementation
namespace utils {

bool CompileSPIRV(const std::string& source, ShaderType type, std::vector<uint32_t>& spirv) {
    // Note: This is a placeholder. In a real implementation, you would use a shader compiler
    // like glslang, shaderc, or DXC to compile GLSL/HLSL to SPIR-V
    return false;
}

bool DecodeSPIRV(const void* data, size_t size, std::vector<uint32_t>& decoded) {
    // Use SMOL-V to decode compressed SPIR-V
    size_t decodedSize = smolv::GetDecodedBufferSize(data, size);
    if (decodedSize == 0) {
        return false;
    }

    decoded.resize(decodedSize / sizeof(uint32_t));
    return smolv::Decode(data, size, reinterpret_cast<uint8_t*>(decoded.data()), decodedSize);
}

bool GetShaderResources(const std::vector<uint32_t>& spirv, ShaderType type,
                       std::vector<plume::RenderDescriptorSetDesc>& descriptorSets) {
    try {
        spirv_cross::CompilerGLSL compiler(spirv);
        auto resources = compiler.get_shader_resources();

        // Analyze uniform buffers
        for (auto& ubo : resources.uniform_buffers) {
            uint32_t set = compiler.get_decoration(ubo.id, spv::DecorationDescriptorSet);
            uint32_t binding = compiler.get_decoration(ubo.id, spv::DecorationBinding);
            
            // Ensure descriptor set exists
            while (descriptorSets.size() <= set) {
                descriptorSets.emplace_back();
            }

            // Add buffer binding
            auto& setDesc = descriptorSets[set];
            setDesc.buffers.push_back({binding, 1, plume::RenderDescriptorType::CONSTANT_BUFFER});
        }

        // Analyze storage buffers
        for (auto& ssbo : resources.storage_buffers) {
            uint32_t set = compiler.get_decoration(ssbo.id, spv::DecorationDescriptorSet);
            uint32_t binding = compiler.get_decoration(ssbo.id, spv::DecorationBinding);
            
            while (descriptorSets.size() <= set) {
                descriptorSets.emplace_back();
            }

            auto& setDesc = descriptorSets[set];
            setDesc.buffers.push_back({binding, 1, plume::RenderDescriptorType::STORAGE_BUFFER});
        }

        // Analyze samplers and textures
        for (auto& image : resources.sampled_images) {
            uint32_t set = compiler.get_decoration(image.id, spv::DecorationDescriptorSet);
            uint32_t binding = compiler.get_decoration(image.id, spv::DecorationBinding);
            
            while (descriptorSets.size() <= set) {
                descriptorSets.emplace_back();
            }

            auto& setDesc = descriptorSets[set];
            setDesc.textures.push_back({binding, 1});
            setDesc.samplers.push_back({binding, 1});
        }

        return true;
    }
    catch (const std::exception& e) {
        fprintf(stderr, "Failed to analyze shader resources: %s\n", e.what());
        return false;
    }
}

} // namespace utils

} // namespace shader 