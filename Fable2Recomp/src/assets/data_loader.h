#pragma once

#include <string>
#include <memory>
#include <optional>
#include <vector>
#include "../vfs/vfs.h"

class DataLoader {
public:
    explicit DataLoader(VFS* vfs) : m_vfs(vfs) {}
    ~DataLoader() = default;

    std::optional<std::vector<uint8_t>> loadFile(const std::string& path);

private:
    VFS* m_vfs;
}; 