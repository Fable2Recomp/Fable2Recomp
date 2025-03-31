#pragma once
#include "stdafx.h"
#include "xbox.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <memory>

namespace xe {

class DataLoader {
public:
    static DataLoader& GetInstance();
    
    bool Initialize(const std::string& data_path);
    
    // Game data loading
    bool LoadRecompiledCode(const std::string& filename, std::vector<uint8_t>& out_data);
    bool LoadGameAssets();
    bool LoadGameScripts();
    
    // File operations
    bool LoadFile(const std::string& filename, std::vector<uint8_t>& out_data);
    bool LoadScript(const std::string& filename, std::string& out_content);
    bool LoadWorldData(const std::string& filename, std::vector<uint8_t>& out_data);
    
    // Xbox-specific operations
    bool LoadXboxFile(const std::string& filename, X_FILE_ATTRIBUTES* attrs);
    bool LoadXboxString(const std::string& filename, X_UNICODE_STRING* str);
    bool LoadXboxOverlapped(const std::string& filename, X_IO_STATUS_BLOCK* overlapped);
    
    // VFS operations
    bool MountGameFiles();
    bool UnmountGameFiles();
    
private:
    DataLoader() = default;
    ~DataLoader() = default;
    
    std::string m_data_path;
    std::unordered_map<std::string, std::vector<uint8_t>> m_file_cache;
    std::unordered_map<std::string, std::string> m_script_cache;
    
    bool LoadFromVFS(const std::string& path, std::vector<uint8_t>& out_data);
    bool LoadFromXbox(const std::string& path, std::vector<uint8_t>& out_data);
};

} // namespace xe 