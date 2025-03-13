#include "assets_script.h"
#include <fstream>
#include <cstring>

namespace assets {

ScriptAsset::ScriptAsset() {
}

ScriptAsset::~ScriptAsset() {
    Unload();
}

bool ScriptAsset::Load(const std::string& path) {
    // Check file extension
    if (path.substr(path.find_last_of(".") + 1) == "bnk") {
        return LoadFromBNK(path);
    }

    fprintf(stderr, "Unsupported script format: %s\n", path.c_str());
    return false;
}

void ScriptAsset::Unload() {
    m_functions.clear();
    m_function_map.clear();
}

bool ScriptAsset::LoadFromBNK(const std::string& path) {
    // Open BNK file
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        fprintf(stderr, "Failed to open BNK file: %s\n", path.c_str());
        return false;
    }

    // Get file size and read data
    size_t file_size = file.tellg();
    file.seekg(0);
    std::vector<uint8_t> buffer(file_size);
    file.read(reinterpret_cast<char*>(buffer.data()), file_size);
    file.close();

    // Parse script data
    size_t offset = 0;
    if (!ParseScriptHeader(buffer, offset)) {
        return false;
    }

    // Parse functions until we reach the end of the file
    while (offset < buffer.size()) {
        if (!ParseScriptFunction(buffer, offset)) {
            return false;
        }
    }

    return true;
}

bool ScriptAsset::ParseScriptHeader(const std::vector<uint8_t>& data, size_t& offset) {
    // TODO: Implement actual BNK script header parsing
    // For now, we'll just check for a minimum file size and a magic number

    if (data.size() < 8) {
        fprintf(stderr, "Script file too small\n");
        return false;
    }

    // Check for magic number (example: "BNKS")
    const uint32_t expected_magic = 0x534B4E42; // "BNKS" in little endian
    uint32_t magic;
    memcpy(&magic, data.data() + offset, sizeof(magic));
    offset += sizeof(magic);

    if (magic != expected_magic) {
        fprintf(stderr, "Invalid script file magic number\n");
        return false;
    }

    // Read version
    uint32_t version;
    memcpy(&version, data.data() + offset, sizeof(version));
    offset += sizeof(version);

    // TODO: Add version check when we know the actual format

    return true;
}

bool ScriptAsset::ParseScriptFunction(const std::vector<uint8_t>& data, size_t& offset) {
    // TODO: Implement actual BNK script function parsing
    // For now, we'll create a dummy function for testing

    if (offset >= data.size()) {
        return false;
    }

    ScriptFunction function;
    
    // Read function name length (assuming it's stored as a uint32_t)
    uint32_t name_length;
    memcpy(&name_length, data.data() + offset, sizeof(name_length));
    offset += sizeof(name_length);

    if (offset + name_length > data.size()) {
        fprintf(stderr, "Invalid function name length\n");
        return false;
    }

    // Read function name
    function.name = std::string(reinterpret_cast<const char*>(data.data() + offset), name_length);
    offset += name_length;

    // Read stack size and local count
    memcpy(&function.stack_size, data.data() + offset, sizeof(function.stack_size));
    offset += sizeof(function.stack_size);

    memcpy(&function.local_count, data.data() + offset, sizeof(function.local_count));
    offset += sizeof(function.local_count);

    // Read bytecode length
    uint32_t bytecode_length;
    memcpy(&bytecode_length, data.data() + offset, sizeof(bytecode_length));
    offset += sizeof(bytecode_length);

    if (offset + bytecode_length > data.size()) {
        fprintf(stderr, "Invalid bytecode length\n");
        return false;
    }

    // Read bytecode
    function.bytecode.resize(bytecode_length);
    memcpy(function.bytecode.data(), data.data() + offset, bytecode_length);
    offset += bytecode_length;

    // Add function to collections
    m_function_map[function.name] = m_functions.size();
    m_functions.push_back(std::move(function));

    return true;
}

} // namespace assets 