#pragma once

#include <string>
#include <vector>
#include <map>
#include <cstdint>
#include <filesystem>

namespace xe {
namespace vfs {

struct Bank {
    uint32_t id;
    std::string path;
    std::vector<uint32_t> required_banks;
    std::vector<uint32_t> optional_banks;
};

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
    FileSystem(const FileSystem&) = delete;
    FileSystem& operator=(const FileSystem&) = delete;

    std::map<std::string, std::filesystem::path> m_mount_points;
    std::map<std::string, std::vector<uint8_t>> m_file_cache;
};

class VirtualFileSystem {
public:
    bool LoadConfig(const std::string& config_path);
    const Bank* GetBankById(uint32_t id) const;
    const Bank* GetBankByPath(const std::string& path) const;

private:
    bool ValidateConfig() const;

    std::vector<Bank> m_banks;
    std::vector<Bank> m_initial_banks;
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