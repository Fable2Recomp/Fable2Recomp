#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <filesystem>

namespace xe {
namespace vfs {

class FileSystem {
public:
    static FileSystem& GetInstance();
    
    bool MountDirectory(const std::string& path);
    bool UnmountDirectory(const std::string& path);
    bool ReadFile(const std::string& path, std::vector<uint8_t>& out_data);
    bool WriteFile(const std::string& path, const std::vector<uint8_t>& data);
    bool FileExists(const std::string& path);
    bool DirectoryExists(const std::string& path);
    std::vector<std::string> ListDirectory(const std::string& path);
    
private:
    FileSystem() = default;
    ~FileSystem() = default;
    
    std::unordered_map<std::string, std::filesystem::path> m_mount_points;
    std::unordered_map<std::string, std::vector<uint8_t>> m_file_cache;
};

// Global functions
bool MountDirectory(const std::string& path);
bool UnmountDirectory(const std::string& path);
bool ReadFile(const std::string& path, std::vector<uint8_t>& out_data);
bool WriteFile(const std::string& path, const std::vector<uint8_t>& data);
bool FileExists(const std::string& path);
bool DirectoryExists(const std::string& path);
std::vector<std::string> ListDirectory(const std::string& path);

} // namespace vfs
} // namespace xe 