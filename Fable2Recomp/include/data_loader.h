#pragma once

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>
#include "xbox.h"
#include "xbox_types.h"

namespace xe {

class DataLoader {
public:
    static DataLoader& GetInstance() {
        static DataLoader instance;
        return instance;
    }

    // Core functionality
    bool Initialize(const std::string& base_path);
    bool LoadFile(const std::string& filename, std::vector<uint8_t>& out_data);
    bool LoadScript(const std::string& filename, std::string& out_script);
    bool LoadWorldData(const std::string& world_name, std::vector<uint8_t>& out_data);
    
    // Recompiled code support
    bool LoadRecompiledCode(const std::string& filename);
    const std::vector<uint8_t>& GetRecompiledCode(const std::string& filename) const;
    
    // Xbox 360 specific data loading
    bool LoadXboxFile(const std::string& filename, X_FILE_ATTRIBUTES* out_attributes);
    bool LoadXboxString(const std::string& filename, xe::X_UNICODE_STRING* out_string);
    bool LoadXboxOverlapped(const std::string& filename, X_IO_STATUS_BLOCK* out_overlapped);

private:
    DataLoader() = default;
    ~DataLoader() = default;
    DataLoader(const DataLoader&) = delete;
    DataLoader& operator=(const DataLoader&) = delete;

    std::string base_path_;
    std::unordered_map<std::string, std::vector<uint8_t>> file_cache_;
    std::unordered_map<std::string, std::vector<uint8_t>> recompiled_code_cache_;
    
    bool ParseXboxFileAttributes(const std::vector<uint8_t>& data, X_FILE_ATTRIBUTES* out_attributes);
    bool ParseXboxString(const std::vector<uint8_t>& data, xe::X_UNICODE_STRING* out_string);
    bool ParseXboxOverlapped(const std::vector<uint8_t>& data, X_IO_STATUS_BLOCK* out_overlapped);
    void ConvertEndianness(std::vector<uint8_t>& data);
};

} // namespace xe 