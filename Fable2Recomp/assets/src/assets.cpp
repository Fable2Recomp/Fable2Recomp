#include "assets.h"
#include <filesystem>
#include <fstream>

namespace assets {

bool AssetManager::Initialize(const std::string& data_path) {
    if (!IsValidDataPath(data_path)) {
        fprintf(stderr, "Invalid data path: %s\n", data_path.c_str());
        return false;
    }

    m_data_path = NormalizePath(data_path);

    // Load manifest file if it exists
    std::string manifest_path = m_data_path + "/dir.manifest";
    std::ifstream manifest(manifest_path);
    if (manifest.is_open()) {
        // TODO: Parse manifest file to get asset information
        manifest.close();
    }

    return true;
}

void AssetManager::Shutdown() {
    UnloadAllAssets();
}

void AssetManager::UnloadAsset(const std::string& path) {
    auto it = m_assets.find(path);
    if (it != m_assets.end()) {
        it->second->Unload();
        m_assets.erase(it);
    }
}

void AssetManager::UnloadAllAssets() {
    for (auto& pair : m_assets) {
        pair.second->Unload();
    }
    m_assets.clear();
}

bool AssetManager::SetDataPath(const std::string& path) {
    if (!IsValidDataPath(path)) {
        fprintf(stderr, "Invalid data path: %s\n", path.c_str());
        return false;
    }

    // Unload all assets before changing path
    UnloadAllAssets();
    m_data_path = NormalizePath(path);
    return true;
}

bool AssetManager::IsValidDataPath(const std::string& path) {
    namespace fs = std::filesystem;

    // Check if path exists and is a directory
    if (!fs::exists(path) || !fs::is_directory(path)) {
        return false;
    }

    // Check for required subdirectories
    std::vector<std::string> required_dirs = {
        "art",
        "audio",
        "entity",
        "Globals",
        "language",
        "scripts",
        "Shaders",
        "worlds"
    };

    for (const auto& dir : required_dirs) {
        if (!fs::exists(path + "/" + dir) || !fs::is_directory(path + "/" + dir)) {
            return false;
        }
    }

    // Check for required files
    std::vector<std::string> required_files = {
        "dir.manifest",
        "startup.vfsconfig",
        "levels.bnk",
        "streaming.bnk"
    };

    for (const auto& file : required_files) {
        if (!fs::exists(path + "/" + file) || !fs::is_regular_file(path + "/" + file)) {
            return false;
        }
    }

    return true;
}

std::string AssetManager::NormalizePath(const std::string& path) {
    namespace fs = std::filesystem;
    return fs::path(path).lexically_normal().string();
}

} // namespace assets 