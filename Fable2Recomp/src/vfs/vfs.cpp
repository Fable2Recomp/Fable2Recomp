#include "vfs.h"
#include <filesystem>
#include <fstream>
#include <sstream>

bool VFS::mount(const std::string& mountPoint, const std::string& path) {
    if (!std::filesystem::exists(path)) {
        return false;
    }
    m_basePath = path;
    return true;
}

std::optional<std::vector<uint8_t>> VFS::readFile(const std::string& path) {
    std::filesystem::path fullPath = std::filesystem::path(m_basePath) / path;
    if (!std::filesystem::exists(fullPath)) {
        return std::nullopt;
    }

    std::ifstream file(fullPath, std::ios::binary);
    if (!file.is_open()) {
        return std::nullopt;
    }

    // Get file size
    file.seekg(0, std::ios::end);
    size_t size = file.tellg();
    file.seekg(0, std::ios::beg);

    // Read file content
    std::vector<uint8_t> buffer(size);
    file.read(reinterpret_cast<char*>(buffer.data()), size);

    if (!file) {
        return std::nullopt;
    }

    return buffer;
} 