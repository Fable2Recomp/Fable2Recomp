#include "data_loader.h"

std::optional<std::vector<uint8_t>> DataLoader::loadFile(const std::string& path) {
    return m_vfs->readFile(path);
} 