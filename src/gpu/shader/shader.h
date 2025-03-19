#pragma once

#include "../rhi/plume_render_interface.h"
#include <memory>
#include <string>
#include <vector>
#include <mutex>
#include <unordered_map>

namespace shader {

// Shader types
enum class ShaderType {
    VERTEX,
    PIXEL,
    COMPUTE,
    GEOMETRY
};

// Shader stage flags (matching Vulkan flags)
enum ShaderStageFlags {
    SHADER_STAGE_VERTEX = 0x00000001,
    SHADER_STAGE_PIXEL = 0x00000010,
    SHADER_STAGE_COMPUTE = 0x00000020,
    SHADER_STAGE_GEOMETRY = 0x00000008,
    SHADER_STAGE_ALL = 0x7FFFFFFF
};

// Shader cache entry for compiled shaders
struct ShaderCacheEntry {
    uint32_t spirvOffset;
    uint32_t spirvSize;
    uint32_t dxilOffset;
    uint32_t dxilSize;
    uint32_t specConstantsMask;
};

// Guest shader class for managing shaders
class GuestShader {
public:
    GuestShader() = default;
    ~GuestShader() = default;

    // Initialize shader from SPIR-V binary
    bool InitFromSPIRV(const void* data, size_t size);
    
    // Initialize shader from cached data
    bool InitFromCache(const ShaderCacheEntry* entry);
    
    // Get or create the shader variant with specified spec constants
    plume::RenderShader* GetVariant(uint32_t specConstants = 0);

    // Shader metadata
    ShaderType type;
    std::string entryPoint;
    uint32_t specConstantsMask;

    // Shader resources
    std::unique_ptr<plume::RenderShader> shader;
    std::mutex mutex;
    const ShaderCacheEntry* shaderCacheEntry;

private:
    std::unordered_map<uint32_t, std::unique_ptr<plume::RenderShader>> variants;
};

// Shader manager class
class ShaderManager {
public:
    static bool Initialize();
    static void Shutdown();

    // Shader creation
    static std::unique_ptr<GuestShader> CreateShaderFromSPIRV(const void* data, size_t size, ShaderType type);
    static std::unique_ptr<GuestShader> CreateShaderFromCache(const ShaderCacheEntry* entry, ShaderType type);

    // Shader cache management
    static bool LoadShaderCache(const std::string& cachePath);
    static bool SaveShaderCache(const std::string& cachePath);
    static void ClearShaderCache();

private:
    static std::vector<uint8_t> shaderCache;
    static std::unordered_map<std::string, ShaderCacheEntry> shaderCacheEntries;
};

// Common shader utilities
namespace utils {
    // SPIR-V compilation helpers
    bool CompileSPIRV(const std::string& source, ShaderType type, std::vector<uint32_t>& spirv);
    bool DecodeSPIRV(const void* data, size_t size, std::vector<uint32_t>& decoded);
    
    // Shader reflection
    bool GetShaderResources(const std::vector<uint32_t>& spirv, ShaderType type, 
                           std::vector<plume::RenderDescriptorSetDesc>& descriptorSets);
}

} // namespace shader 