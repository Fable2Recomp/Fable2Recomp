#pragma once

#include <string>
#include <memory>
#include <optional>
#include <vector>

class VFS {
public:
    VFS() = default;
    ~VFS() = default;

    bool mount(const std::string& mountPoint, const std::string& path);
    std::optional<std::vector<uint8_t>> readFile(const std::string& path);

private:
    std::string m_basePath;
}; 