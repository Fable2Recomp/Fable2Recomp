#include "data_loader.h"
#include "os/logger.h"
#include <fstream>
#include <iostream>

namespace xe {

bool DataLoader::Initialize(const std::string& base_path) {
    base_path_ = base_path;
    return true;
}

bool DataLoader::LoadFile(const std::string& filename, std::vector<uint8_t>& out_data) {
    // Check cache first
    auto it = file_cache_.find(filename);
    if (it != file_cache_.end()) {
        out_data = it->second;
        return true;
    }

    // Load from disk
    std::string full_path = base_path_ + "/" + filename;
    std::ifstream file(full_path, std::ios::binary);
    if (!file) {
        std::cerr << "Failed to open file: " << full_path << std::endl;
        return false;
    }

    file.seekg(0, std::ios::end);
    size_t size = file.tellg();
    file.seekg(0, std::ios::beg);

    out_data.resize(size);
    file.read(reinterpret_cast<char*>(out_data.data()), size);
    
    // Cache the loaded data
    file_cache_[filename] = out_data;
    return true;
}

bool DataLoader::LoadScript(const std::string& filename, std::string& out_script) {
    std::vector<uint8_t> data;
    if (!LoadFile(filename, data)) {
        return false;
    }

    out_script.assign(data.begin(), data.end());
    return true;
}

bool DataLoader::LoadWorldData(const std::string& world_name, std::vector<uint8_t>& out_data) {
    std::string filename = "worlds/" + world_name + ".bin";
    return LoadFile(filename, out_data);
}

bool DataLoader::LoadRecompiledCode(const std::string& filename) {
    // Check cache first
    auto it = recompiled_code_cache_.find(filename);
    if (it != recompiled_code_cache_.end()) {
        return true;
    }

    std::vector<uint8_t> data;
    std::string full_path = base_path_ + "/ppc/" + filename;
    if (!LoadFile(full_path, data)) {
        return false;
    }

    recompiled_code_cache_[filename] = data;
    return true;
}

const std::vector<uint8_t>& DataLoader::GetRecompiledCode(const std::string& filename) const {
    static const std::vector<uint8_t> empty;
    auto it = recompiled_code_cache_.find(filename);
    return it != recompiled_code_cache_.end() ? it->second : empty;
}

bool DataLoader::LoadXboxFile(const std::string& filename, X_FILE_ATTRIBUTES* out_attributes) {
    std::vector<uint8_t> data;
    if (!LoadFile(filename, data)) {
        return false;
    }

    return ParseXboxFileAttributes(data, out_attributes);
}

bool DataLoader::LoadXboxString(const std::string& filename, xe::X_UNICODE_STRING* out_string) {
    std::vector<uint8_t> data;
    if (!LoadFile(filename, data)) {
        return false;
    }

    return ParseXboxString(data, out_string);
}

bool DataLoader::LoadXboxOverlapped(const std::string& filename, X_IO_STATUS_BLOCK* out_overlapped) {
    std::vector<uint8_t> data;
    if (!LoadFile(filename, data)) {
        return false;
    }

    return ParseXboxOverlapped(data, out_overlapped);
}

bool DataLoader::ParseXboxFileAttributes(const std::vector<uint8_t>& data, X_FILE_ATTRIBUTES* out_attributes) {
    if (data.size() < sizeof(uint32_t)) {
        return false;
    }

    uint32_t attributes;
    Memory::Copy(&attributes, data.data(), sizeof(uint32_t));
    
    // Create a temporary buffer for endianness conversion
    std::vector<uint8_t> temp_buffer(sizeof(uint32_t));
    Memory::Copy(temp_buffer.data(), &attributes, sizeof(uint32_t));
    ConvertEndianness(temp_buffer);
    Memory::Copy(&attributes, temp_buffer.data(), sizeof(uint32_t));
    
    *out_attributes = static_cast<X_FILE_ATTRIBUTES>(attributes);
    return true;
}

bool DataLoader::ParseXboxString(const std::vector<uint8_t>& data, xe::X_UNICODE_STRING* out_string) {
    if (data.size() < sizeof(xe::X_UNICODE_STRING)) {
        return false;
    }

    Memory::Copy(out_string, data.data(), sizeof(xe::X_UNICODE_STRING));
    
    // Create a temporary buffer for endianness conversion
    std::vector<uint8_t> temp_buffer(sizeof(xe::X_UNICODE_STRING));
    Memory::Copy(temp_buffer.data(), out_string, sizeof(xe::X_UNICODE_STRING));
    ConvertEndianness(temp_buffer);
    Memory::Copy(out_string, temp_buffer.data(), sizeof(xe::X_UNICODE_STRING));
    
    return true;
}

bool DataLoader::ParseXboxOverlapped(const std::vector<uint8_t>& data, X_IO_STATUS_BLOCK* out_overlapped) {
    if (data.size() < sizeof(X_IO_STATUS_BLOCK)) {
        return false;
    }

    Memory::Copy(out_overlapped, data.data(), sizeof(X_IO_STATUS_BLOCK));
    
    // Create a temporary buffer for endianness conversion
    std::vector<uint8_t> temp_buffer(sizeof(X_IO_STATUS_BLOCK));
    Memory::Copy(temp_buffer.data(), out_overlapped, sizeof(X_IO_STATUS_BLOCK));
    ConvertEndianness(temp_buffer);
    Memory::Copy(out_overlapped, temp_buffer.data(), sizeof(X_IO_STATUS_BLOCK));
    
    return true;
}

void DataLoader::ConvertEndianness(std::vector<uint8_t>& data) {
    // Xbox 360 is big-endian, so we need to swap bytes if we're on a little-endian system
    #if defined(__LITTLE_ENDIAN__) || defined(_LITTLE_ENDIAN)
    for (size_t i = 0; i < data.size(); i += 4) {
        if (i + 3 < data.size()) {
            std::swap(data[i], data[i + 3]);
            std::swap(data[i + 1], data[i + 2]);
        }
    }
    #endif
}

} // namespace xe 