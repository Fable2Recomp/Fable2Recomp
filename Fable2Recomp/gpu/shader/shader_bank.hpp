#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <cstdint>

namespace gpu::shader {

enum class ShaderType {
    Vertex,
    Pixel,
    Compute,
    Geometry,
    Hull,
    Domain
};

struct ShaderEntry {
    ::std::string name;
    ShaderType type;
    ::std::string version;
    ::std::vector<uint8_t> bytecode;
};

class ShaderBank {
public:
    static constexpr const char* MAGIC = "ShaderBankFile";
    static constexpr uint32_t SUPPORTED_VERSION_MAJOR = 3;
    static constexpr uint32_t SUPPORTED_VERSION_MINOR = 1;

    ShaderBank() = default;
    ~ShaderBank() = default;

    // Load shader bank from file
    bool LoadFromFile(const ::std::string& path);
    
    // Load shader bank from memory
    bool LoadFromMemory(const uint8_t* data, size_t size);

    // Get shader by name
    const ShaderEntry* GetShader(const ::std::string& name) const;

    // Get all shaders
    const ::std::vector<ShaderEntry>& GetShaders() const { return m_shaders; }

private:
    bool ParseHeader(const uint8_t* data, size_t size);
    bool ParseShaders(const uint8_t* data, size_t size);

    ::std::vector<ShaderEntry> m_shaders;
    uint32_t m_version_major = 0;
    uint32_t m_version_minor = 0;
};

} // namespace gpu::shader 