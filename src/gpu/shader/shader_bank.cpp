#include "shader_bank.hpp"
#include <fstream>
#include <cstring>
#include <algorithm>
#include <vector>

namespace gpu::shader {

bool ShaderBank::LoadFromFile(const ::std::string& path) {
    ::std::ifstream file(path, ::std::ios::binary);
    if (!file) {
        return false;
    }

    // Get file size
    file.seekg(0, ::std::ios::end);
    size_t size = file.tellg();
    file.seekg(0, ::std::ios::beg);

    // Read file content
    ::std::vector<uint8_t> data(size);
    file.read(reinterpret_cast<char*>(data.data()), size);

    return LoadFromMemory(data.data(), size);
}

bool ShaderBank::LoadFromMemory(const uint8_t* data, size_t size) {
    if (!ParseHeader(data, size)) {
        return false;
    }

    return ParseShaders(data, size);
}

bool ShaderBank::ParseHeader(const uint8_t* data, size_t size) {
    if (size < ::std::strlen(MAGIC) + 8) {
        return false;
    }

    // Check magic number
    if (::std::memcmp(data, MAGIC, ::std::strlen(MAGIC)) != 0) {
        return false;
    }

    // Parse version
    size_t offset = ::std::strlen(MAGIC);
    m_version_minor = *reinterpret_cast<const uint32_t*>(data + offset);
    m_version_major = *reinterpret_cast<const uint32_t*>(data + offset + 4);

    // Verify version
    if (m_version_major != SUPPORTED_VERSION_MAJOR || 
        m_version_minor != SUPPORTED_VERSION_MINOR) {
        return false;
    }

    return true;
}

bool ShaderBank::ParseShaders(const uint8_t* data, size_t size) {
    size_t offset = ::std::strlen(MAGIC) + 8; // Skip magic and version

    // Read shader count
    if (offset + 4 > size) return false;
    uint32_t shader_count = *reinterpret_cast<const uint32_t*>(data + offset);
    offset += 4;

    m_shaders.clear();
    m_shaders.reserve(shader_count);

    // Parse each shader
    for (uint32_t i = 0; i < shader_count; ++i) {
        if (offset + 12 > size) return false;

        ShaderEntry entry;
        
        // Read shader type
        entry.type = static_cast<ShaderType>(*reinterpret_cast<const uint32_t*>(data + offset));
        offset += 4;

        // Read shader version
        uint32_t version = *reinterpret_cast<const uint32_t*>(data + offset);
        entry.version = ::std::to_string(version);
        offset += 4;

        // Read name length
        uint32_t name_length = *reinterpret_cast<const uint32_t*>(data + offset);
        offset += 4;

        // Read name
        if (offset + name_length > size) return false;
        entry.name.assign(reinterpret_cast<const char*>(data + offset), name_length);
        offset += name_length;

        // Read bytecode size
        if (offset + 4 > size) return false;
        uint32_t bytecode_size = *reinterpret_cast<const uint32_t*>(data + offset);
        offset += 4;

        // Read bytecode
        if (offset + bytecode_size > size) return false;
        entry.bytecode.assign(data + offset, data + offset + bytecode_size);
        offset += bytecode_size;

        m_shaders.push_back(::std::move(entry));
    }

    return true;
}

const ShaderEntry* ShaderBank::GetShader(const ::std::string& name) const {
    auto it = ::std::find_if(m_shaders.begin(), m_shaders.end(),
        [&name](const ShaderEntry& entry) { return entry.name == name; });
    return it != m_shaders.end() ? &(*it) : nullptr;
}

} // namespace gpu::shader 