#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <filesystem>

namespace assets {

// Asset types
enum class AssetType {
    Texture,
    Model,
    Animation,
    Sound,
    Script,
    Shader,
    Level,
    Unknown
};

// Base asset class
class Asset {
public:
    virtual ~Asset() = default;
    virtual AssetType GetType() const = 0;
    virtual bool Load(const std::string& path) = 0;
    virtual void Unload() = 0;
};

// Asset manager class
class AssetManager {
public:
    static AssetManager& Get() {
        static AssetManager instance;
        return instance;
    }

    bool Initialize(const std::string& data_path);
    void Shutdown();

    template<typename T>
    std::shared_ptr<T> LoadAsset(const std::string& path) {
        // Check if asset is already loaded
        auto it = m_assets.find(path);
        if (it != m_assets.end()) {
            return std::static_pointer_cast<T>(it->second);
        }

        // Create and load new asset
        auto asset = std::make_shared<T>();
        if (!asset->Load(m_data_path + "/" + path)) {
            return nullptr;
        }

        // Store and return asset
        m_assets[path] = asset;
        return asset;
    }

    void UnloadAsset(const std::string& path);
    void UnloadAllAssets();
    bool SetDataPath(const std::string& path);
    std::string GetDataPath() const { return m_data_path; }

private:
    AssetManager() = default;
    ~AssetManager() = default;
    AssetManager(const AssetManager&) = delete;
    AssetManager& operator=(const AssetManager&) = delete;

    bool IsValidDataPath(const std::string& path);
    std::string NormalizePath(const std::string& path);

    std::string m_data_path;
    std::unordered_map<std::string, std::shared_ptr<Asset>> m_assets;
};

// Helper functions
bool IsValidDataPath(const std::string& path);
std::string NormalizePath(const std::string& path);

} // namespace assets

// Include specific asset types
#include "assets_texture.h"
#include "assets_model.h"
#include "assets_shader.h"
#include "assets_script.h" 