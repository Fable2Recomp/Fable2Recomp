#pragma once
#include "vfs.hpp"
#include "bank_loader.hpp"
#include "../gpu/shader/shader_bank.hpp"
#include <memory>
#include <unordered_map>
#include <functional>
#include <future>
#include <mutex>
#include <vector>
#include <queue>

namespace vfs {

// Forward declarations of specific asset types
struct ModelAsset;
struct TextureAsset;
struct AnimationAsset;
struct SoundAsset;
struct ScriptAsset;

// Asset handle to track loaded assets
template<typename T>
class AssetHandle {
public:
    AssetHandle() = default;
    explicit AssetHandle(::std::shared_ptr<T> asset) : m_asset(asset) {}
    
    T* operator->() { return m_asset.get(); }
    const T* operator->() const { return m_asset.get(); }
    T& operator*() { return *m_asset; }
    const T& operator*() const { return *m_asset; }
    bool IsValid() const { return m_asset != nullptr; }

private:
    ::std::shared_ptr<T> m_asset;
};

// Asset loading callbacks
using ModelLoadCallback = ::std::function<void(AssetHandle<ModelAsset>)>;
using TextureLoadCallback = ::std::function<void(AssetHandle<TextureAsset>)>;
using AnimationLoadCallback = ::std::function<void(AssetHandle<AnimationAsset>)>;
using SoundLoadCallback = ::std::function<void(AssetHandle<SoundAsset>)>;
using ScriptLoadCallback = ::std::function<void(AssetHandle<ScriptAsset>)>;

class AssetManager {
public:
    static AssetManager& Get() {
        static AssetManager instance;
        return instance;
    }

    // Initialize the asset manager with VFS config
    bool Initialize(const ::std::string& vfs_config_path);

    // Load initial banks specified in VFS config
    bool LoadInitialBanks();

    // Asset loading functions
    AssetHandle<ModelAsset> LoadModel(const ::std::string& name, bool async = false, ModelLoadCallback callback = nullptr);
    AssetHandle<TextureAsset> LoadTexture(const ::std::string& name, bool async = false, TextureLoadCallback callback = nullptr);
    AssetHandle<AnimationAsset> LoadAnimation(const ::std::string& name, bool async = false, AnimationLoadCallback callback = nullptr);
    AssetHandle<SoundAsset> LoadSound(const ::std::string& name, bool async = false, SoundLoadCallback callback = nullptr);
    AssetHandle<ScriptAsset> LoadScript(const ::std::string& name, bool async = false, ScriptLoadCallback callback = nullptr);

    // Shader management
    gpu::shader::ShaderEntry* GetShader(const ::std::string& name);
    
    // Bank management
    bool LoadBank(const ::std::string& path, bool async = false);
    bool UnloadBank(const ::std::string& path);
    bool IsBankLoaded(const ::std::string& path) const;

    // Asset cache management
    void SetCacheSize(size_t max_size_mb);
    void ClearCache();
    void UnloadUnusedAssets();

private:
    AssetManager() = default;
    ~AssetManager() = default;
    AssetManager(const AssetManager&) = delete;
    AssetManager& operator=(const AssetManager&) = delete;

    // Internal loading functions
    template<typename T>
    AssetHandle<T> LoadAsset(const ::std::string& name, BankEntryType type, 
                            bool async, ::std::function<void(AssetHandle<T>)> callback);

    bool LoadAsset(const ::std::string& name, bool async, ::std::function<void(const BankEntry*)> callback);

    template<typename T>
    ::std::shared_ptr<T> ParseAsset(const BankEntry* entry);

    bool ParseAsset(const BankEntry* entry);

    template<typename T>
    ::std::unordered_map<::std::string, ::std::shared_ptr<T>>& GetCache();

    bool LoadBankInternal(const Bank& info);
    void ProcessAsyncLoads();
    void UpdateCache();

    VirtualFileSystem m_vfs;
    ::std::unique_ptr<gpu::shader::ShaderBank> m_shader_bank;
    ::std::unordered_map<::std::string, ::std::unique_ptr<BankLoader>> m_bank_loaders;

    // Asset caches
    ::std::unordered_map<::std::string, ::std::shared_ptr<ModelAsset>> m_model_cache;
    ::std::unordered_map<::std::string, ::std::shared_ptr<TextureAsset>> m_texture_cache;
    ::std::unordered_map<::std::string, ::std::shared_ptr<AnimationAsset>> m_animation_cache;
    ::std::unordered_map<::std::string, ::std::shared_ptr<SoundAsset>> m_sound_cache;
    ::std::unordered_map<::std::string, ::std::shared_ptr<ScriptAsset>> m_script_cache;

    // Async loading
    struct AsyncLoadRequest {
        ::std::string name;
        const BankEntry* entry;
        ::std::function<void(const BankEntry*)> callback;
    };
    ::std::queue<AsyncLoadRequest> m_async_load_queue;
    ::std::mutex m_async_mutex;

    // Cache management
    size_t m_max_cache_size = 1024 * 1024 * 1024; // 1GB default
    ::std::mutex m_cache_mutex;

    // Loaded assets map
    ::std::unordered_map<::std::string, const BankEntry*> m_loaded_assets;
}; 

} // namespace vfs 