#include "asset_manager.hpp"
#include "asset_types.hpp"
#include <thread>
#include <future>
#include <chrono>
#include <type_traits>
#include <filesystem>
#include <iostream>
#include <iomanip>

namespace vfs {

// Helper functions to calculate asset sizes
size_t CalculateModelAssetSize(const ModelAsset* asset) {
    size_t size = sizeof(ModelAsset);
    size += asset->name.size();
    for (const auto& mesh : asset->meshes) {
        size += mesh.vertices.size() * sizeof(Vertex);
        size += mesh.indices.size() * sizeof(uint32_t);
        size += mesh.material_name.size();
    }
    for (const auto& bone : asset->bones) {
        size += bone.name.size();
    }
    return size;
}

size_t CalculateTextureAssetSize(const TextureAsset* asset) {
    size_t size = sizeof(TextureAsset);
    size += asset->name.size();
    for (const auto& mip : asset->mip_levels) {
        size += sizeof(TextureMipLevel);
        size += mip.data.size();
    }
    return size;
}

size_t CalculateAnimationAssetSize(const AnimationAsset* asset) {
    size_t size = sizeof(AnimationAsset);
    size += asset->name.size();
    for (const auto& channel : asset->channels) {
        size += channel.bone_name.size();
        size += channel.key_frames.size() * sizeof(KeyFrame);
    }
    return size;
}

size_t CalculateSoundAssetSize(const SoundAsset* asset) {
    size_t size = sizeof(SoundAsset);
    size += asset->name.size();
    size += asset->data.size();
    return size;
}

size_t CalculateScriptAssetSize(const ScriptAsset* asset) {
    size_t size = sizeof(ScriptAsset);
    size += asset->name.size();
    size += asset->source.size();
    size += asset->bytecode.size();
    return size;
}

bool AssetManager::Initialize(const ::std::string& vfs_config_path) {
    std::cout << "AssetManager::Initialize: Loading VFS config from " << vfs_config_path << std::endl;
    
    // Load VFS config
    if (!m_vfs.LoadConfig(vfs_config_path)) {
        std::cerr << "AssetManager::Initialize: Failed to load VFS config" << std::endl;
        return false;
    }

    std::cout << "AssetManager::Initialize: Successfully loaded VFS config" << std::endl;

    // Create shader bank
    m_shader_bank = ::std::make_unique<gpu::shader::ShaderBank>();
    std::cout << "AssetManager::Initialize: Created shader bank" << std::endl;

    // Start async loading thread
    ::std::thread([this]() {
        while (true) {
            ::std::this_thread::sleep_for(::std::chrono::milliseconds(16));
            ProcessAsyncLoads();
            UpdateCache();
        }
    }).detach();
    std::cout << "AssetManager::Initialize: Started async loading thread" << std::endl;

    return true;
}

bool AssetManager::LoadInitialBanks() {
    std::cout << "AssetManager::LoadInitialBanks: Loading initial banks" << std::endl;
    
    const auto& initial_banks = m_vfs.GetInitialBanks();
    std::cout << "AssetManager::LoadInitialBanks: Found " << initial_banks.size() << " initial banks" << std::endl;
    
    for (const auto& bank : initial_banks) {
        std::cout << "AssetManager::LoadInitialBanks: Loading bank " << bank.path << std::endl;
        if (!LoadBankInternal(bank)) {
            std::cerr << "AssetManager::LoadInitialBanks: Failed to load bank " << bank.path << std::endl;
            return false;
        }
        std::cout << "AssetManager::LoadInitialBanks: Successfully loaded bank " << bank.path << std::endl;
    }
    
    std::cout << "AssetManager::LoadInitialBanks: Successfully loaded all initial banks" << std::endl;
    return true;
}

bool AssetManager::LoadAsset(const std::string& name, bool async, std::function<void(const BankEntry*)> callback) {
    // Check if the asset is already loaded
    auto it = m_loaded_assets.find(name);
    if (it != m_loaded_assets.end()) {
        std::cout << "AssetManager::LoadAsset: Asset " << name << " already loaded" << std::endl;
        callback(it->second);
        return true;
    }

    // Search for the asset in all loaded banks
    const BankEntry* found_entry = nullptr;
    for (const auto& [path, loader] : m_bank_loaders) {
        std::cout << "AssetManager::LoadAsset: Searching for " << name << " in bank " << path << std::endl;
        found_entry = loader->GetEntry(name);
        if (found_entry) {
            std::cout << "AssetManager::LoadAsset: Found " << name << " in bank " << path << " with type " << static_cast<int>(found_entry->type) << std::endl;
            break;  // Exit the loop once we find the entry
        }
    }

    if (!found_entry) {
        std::cout << "AssetManager::LoadAsset: Failed to find " << name << " in any bank" << std::endl;
        callback(nullptr);
        return false;
    }

    if (async) {
        // Queue the asset for async loading
        m_async_load_queue.push({name, found_entry, callback});
        return true;
    }

    // Parse the asset synchronously
    if (ParseAsset(found_entry)) {
        m_loaded_assets[name] = found_entry;
        callback(found_entry);
        return true;
    }

    std::cout << "AssetManager::LoadAsset: Failed to parse " << name << std::endl;
    callback(nullptr);
    return false;
}

bool AssetManager::ParseAsset(const BankEntry* entry) {
    if (!entry || entry->data.empty()) {
        std::cerr << "AssetManager::ParseAsset: Invalid entry or empty data" << std::endl;
        return false;
    }

    std::cout << "AssetManager::ParseAsset: Parsing " << entry->name << " with type " << static_cast<int>(entry->type) << std::endl;
    std::cout << "AssetManager::ParseAsset: Data size: " << entry->data.size() << std::endl;
    std::cout << "AssetManager::ParseAsset: Raw data: ";
    for (size_t i = 0; i < entry->data.size(); ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(entry->data[i]) << " ";
        if ((i + 1) % 16 == 0) {
            std::cout << std::endl << "                                  ";
        }
    }
    std::cout << std::dec << std::endl;

    bool success = false;
    switch (entry->type) {
        case BankEntryType::Model: {
            std::cout << "AssetManager::ParseAsset: Parsing model asset" << std::endl;
            auto result = AssetParser::ParseModel(entry->data.data(), entry->data.size());
            if (result) {
                m_model_cache[entry->name] = result;
                success = true;
            }
            break;
        }
        case BankEntryType::Texture: {
            std::cout << "AssetManager::ParseAsset: Parsing texture asset" << std::endl;
            auto result = AssetParser::ParseTexture(entry->data.data(), entry->data.size());
            if (result) {
                m_texture_cache[entry->name] = result;
                success = true;
            }
            break;
        }
        case BankEntryType::Animation: {
            std::cout << "AssetManager::ParseAsset: Parsing animation asset" << std::endl;
            auto result = AssetParser::ParseAnimation(entry->data.data(), entry->data.size());
            if (result) {
                m_animation_cache[entry->name] = result;
                success = true;
            }
            break;
        }
        case BankEntryType::Sound: {
            std::cout << "AssetManager::ParseAsset: Parsing sound asset" << std::endl;
            auto result = AssetParser::ParseSound(entry->data.data(), entry->data.size());
            if (result) {
                m_sound_cache[entry->name] = result;
                success = true;
            }
            break;
        }
        case BankEntryType::Script: {
            std::cout << "AssetManager::ParseAsset: Parsing script asset" << std::endl;
            auto result = AssetParser::ParseScript(entry->data.data(), entry->data.size());
            if (result) {
                m_script_cache[entry->name] = result;
                success = true;
            }
            break;
        }
        default:
            std::cerr << "AssetManager::ParseAsset: Invalid asset type " << static_cast<int>(entry->type) << std::endl;
            return false;
    }

    if (!success) {
        std::cerr << "AssetManager::ParseAsset: Failed to parse asset " << entry->name << std::endl;
    }
    return success;
}

template<typename T>
::std::shared_ptr<T> AssetManager::ParseAsset(const BankEntry* entry) {
    if (!entry || entry->data.empty()) {
        std::cerr << "AssetManager::ParseAsset: Invalid entry or empty data" << std::endl;
        return nullptr;
    }

    std::cout << "AssetManager::ParseAsset: Parsing " << entry->name << " with type " << static_cast<int>(entry->type) << std::endl;
    std::cout << "AssetManager::ParseAsset: Data size: " << entry->data.size() << std::endl;
    std::cout << "AssetManager::ParseAsset: Raw data: ";
    for (size_t i = 0; i < entry->data.size(); ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(entry->data[i]) << " ";
        if ((i + 1) % 16 == 0) {
            std::cout << std::endl << "                                  ";
        }
    }
    std::cout << std::dec << std::endl;

    if constexpr (::std::is_same_v<T, ModelAsset>) {
        if (entry->type != BankEntryType::Model) {
            std::cerr << "AssetManager::ParseAsset: Expected model asset but got type " << static_cast<int>(entry->type) << std::endl;
            return nullptr;
        }
        std::cout << "AssetManager::ParseAsset: Parsing model asset" << std::endl;
        return AssetParser::ParseModel(entry->data.data(), entry->data.size());
    } else if constexpr (::std::is_same_v<T, TextureAsset>) {
        if (entry->type != BankEntryType::Texture) {
            std::cerr << "AssetManager::ParseAsset: Expected texture asset but got type " << static_cast<int>(entry->type) << std::endl;
            return nullptr;
        }
        std::cout << "AssetManager::ParseAsset: Parsing texture asset" << std::endl;
        auto result = AssetParser::ParseTexture(entry->data.data(), entry->data.size());
        if (!result) {
            std::cerr << "AssetManager::ParseAsset: Failed to parse texture asset" << std::endl;
        }
        return result;
    } else if constexpr (::std::is_same_v<T, AnimationAsset>) {
        if (entry->type != BankEntryType::Animation) {
            std::cerr << "AssetManager::ParseAsset: Expected animation asset but got type " << static_cast<int>(entry->type) << std::endl;
            return nullptr;
        }
        std::cout << "AssetManager::ParseAsset: Parsing animation asset" << std::endl;
        return AssetParser::ParseAnimation(entry->data.data(), entry->data.size());
    } else if constexpr (::std::is_same_v<T, SoundAsset>) {
        if (entry->type != BankEntryType::Sound) {
            std::cerr << "AssetManager::ParseAsset: Expected sound asset but got type " << static_cast<int>(entry->type) << std::endl;
            return nullptr;
        }
        std::cout << "AssetManager::ParseAsset: Parsing sound asset" << std::endl;
        return AssetParser::ParseSound(entry->data.data(), entry->data.size());
    } else if constexpr (::std::is_same_v<T, ScriptAsset>) {
        if (entry->type != BankEntryType::Script) {
            std::cerr << "AssetManager::ParseAsset: Expected script asset but got type " << static_cast<int>(entry->type) << std::endl;
            return nullptr;
        }
        std::cout << "AssetManager::ParseAsset: Parsing script asset" << std::endl;
        return AssetParser::ParseScript(entry->data.data(), entry->data.size());
    }

    std::cerr << "AssetManager::ParseAsset: Invalid asset type for template type " << typeid(T).name() << std::endl;
    return nullptr;
}

AssetHandle<ModelAsset> AssetManager::LoadModel(const ::std::string& name, bool async, ModelLoadCallback callback) {
    return LoadAsset<ModelAsset>(name, BankEntryType::Model, async, callback);
}

AssetHandle<TextureAsset> AssetManager::LoadTexture(const ::std::string& name, bool async, TextureLoadCallback callback) {
    return LoadAsset<TextureAsset>(name, BankEntryType::Texture, async, callback);
}

AssetHandle<AnimationAsset> AssetManager::LoadAnimation(const ::std::string& name, bool async, AnimationLoadCallback callback) {
    return LoadAsset<AnimationAsset>(name, BankEntryType::Animation, async, callback);
}

AssetHandle<SoundAsset> AssetManager::LoadSound(const ::std::string& name, bool async, SoundLoadCallback callback) {
    return LoadAsset<SoundAsset>(name, BankEntryType::Sound, async, callback);
}

AssetHandle<ScriptAsset> AssetManager::LoadScript(const ::std::string& name, bool async, ScriptLoadCallback callback) {
    return LoadAsset<ScriptAsset>(name, BankEntryType::Script, async, callback);
}

gpu::shader::ShaderEntry* AssetManager::GetShader(const ::std::string& name) {
    if (!m_shader_bank) {
        return nullptr;
    }
    return const_cast<gpu::shader::ShaderEntry*>(m_shader_bank->GetShader(name));
}

bool AssetManager::LoadBank(const ::std::string& path, bool async) {
    // Convert to absolute path
    ::std::filesystem::path bank_path = ::std::filesystem::absolute(path);

    // Check if bank is already loaded
    if (m_bank_loaders.find(bank_path.string()) != m_bank_loaders.end()) {
        return true;
    }

    // Get bank info from VFS
    const Bank* bank = m_vfs.GetBankByPath(bank_path.string());
    if (!bank) {
        return false;
    }

    if (async) {
        // Queue async load
        m_async_load_queue.push({
            bank_path.string(),
            nullptr,
            [this, bank](const BankEntry*) {
                LoadBankInternal(*bank);
            }
        });
        return true;
    }

    // Load bank synchronously
    return LoadBankInternal(*bank);
}

bool AssetManager::UnloadBank(const ::std::string& path) {
    // Convert to absolute path
    ::std::filesystem::path bank_path = ::std::filesystem::absolute(path);

    // Find bank
    auto it = m_bank_loaders.find(bank_path.string());
    if (it == m_bank_loaders.end()) {
        return false;
    }

    // Remove bank loader
    m_bank_loaders.erase(it);
    return true;
}

bool AssetManager::IsBankLoaded(const ::std::string& path) const {
    // Convert to absolute path
    ::std::filesystem::path bank_path = ::std::filesystem::absolute(path);
    return m_bank_loaders.find(bank_path.string()) != m_bank_loaders.end();
}

void AssetManager::SetCacheSize(size_t max_size_mb) {
    m_max_cache_size = max_size_mb * 1024 * 1024;
}

void AssetManager::ClearCache() {
    m_model_cache.clear();
    m_texture_cache.clear();
    m_animation_cache.clear();
    m_sound_cache.clear();
    m_script_cache.clear();
}

void AssetManager::UnloadUnusedAssets() {
    auto remove_unused = [](auto& cache) {
        for (auto it = cache.begin(); it != cache.end();) {
            if (it->second.use_count() == 1) {
                it = cache.erase(it);
            } else {
                ++it;
            }
        }
    };

    remove_unused(m_model_cache);
    remove_unused(m_texture_cache);
    remove_unused(m_animation_cache);
    remove_unused(m_sound_cache);
    remove_unused(m_script_cache);
}

bool AssetManager::LoadBankInternal(const Bank& bank) {
    std::cout << "AssetManager::LoadBankInternal: Loading bank " << bank.path << std::endl;
    
    // Convert to absolute path
    std::filesystem::path bank_path = std::filesystem::absolute(bank.path);
    std::cout << "AssetManager::LoadBankInternal: Absolute path is " << bank_path << std::endl;
    
    // Check if bank is already loaded
    if (m_bank_loaders.find(bank_path.string()) != m_bank_loaders.end()) {
        std::cout << "AssetManager::LoadBankInternal: Bank already loaded" << std::endl;
        return true;
    }
    
    // Load required banks first
    for (uint32_t required_id : bank.required_banks) {
        std::cout << "AssetManager::LoadBankInternal: Loading required bank " << required_id << std::endl;
        const Bank* required_bank = m_vfs.GetBankById(required_id);
        if (!required_bank) {
            std::cerr << "AssetManager::LoadBankInternal: Failed to find required bank " << required_id << std::endl;
            return false;
        }
        if (!LoadBankInternal(*required_bank)) {
            std::cerr << "AssetManager::LoadBankInternal: Failed to load required bank " << required_bank->path << std::endl;
            return false;
        }
        std::cout << "AssetManager::LoadBankInternal: Successfully loaded required bank " << required_bank->path << std::endl;
    }

    // Load optional banks
    for (uint32_t optional_id : bank.optional_banks) {
        std::cout << "AssetManager::LoadBankInternal: Loading optional bank " << optional_id << std::endl;
        const Bank* optional_bank = m_vfs.GetBankById(optional_id);
        if (!optional_bank) {
            std::cerr << "AssetManager::LoadBankInternal: Failed to find optional bank " << optional_id << std::endl;
            continue;
        }
        if (!LoadBankInternal(*optional_bank)) {
            std::cerr << "AssetManager::LoadBankInternal: Failed to load optional bank " << optional_bank->path << std::endl;
            continue;
        }
        std::cout << "AssetManager::LoadBankInternal: Successfully loaded optional bank " << optional_bank->path << std::endl;
    }

    // Create bank loader
    auto loader = ::std::make_unique<BankLoader>();
    if (!loader->LoadFromFile(bank_path.string())) {
        std::cerr << "AssetManager::LoadBankInternal: Failed to load bank file " << bank_path.string() << std::endl;
        return false;
    }

    // Store bank loader
    m_bank_loaders[bank_path.string()] = ::std::move(loader);
    std::cout << "AssetManager::LoadBankInternal: Successfully loaded bank " << bank_path.string() << std::endl;
    return true;
}

void AssetManager::ProcessAsyncLoads() {
    while (!m_async_load_queue.empty()) {
        auto request = m_async_load_queue.front();
        m_async_load_queue.pop();

        std::cout << "AssetManager::ProcessAsyncLoads: Processing " << request.name << std::endl;

        if (!request.entry) {
            std::cout << "AssetManager::ProcessAsyncLoads: No entry provided for " << request.name << std::endl;
            request.callback(nullptr);
            continue;
        }

        // Parse the asset
        if (ParseAsset(request.entry)) {
            m_loaded_assets[request.name] = request.entry;
            std::cout << "AssetManager::ProcessAsyncLoads: Successfully loaded " << request.name << std::endl;
            request.callback(request.entry);
        } else {
            std::cout << "AssetManager::ProcessAsyncLoads: Failed to parse " << request.name << std::endl;
            request.callback(nullptr);
        }
    }
}

void AssetManager::UpdateCache() {
    size_t total_size = 0;

    // Calculate total size of cached assets
    for (const auto& [name, asset] : m_model_cache) {
        total_size += CalculateModelAssetSize(asset.get());
    }

    for (const auto& [name, asset] : m_texture_cache) {
        total_size += CalculateTextureAssetSize(asset.get());
    }

    for (const auto& [name, asset] : m_animation_cache) {
        total_size += CalculateAnimationAssetSize(asset.get());
    }

    for (const auto& [name, asset] : m_sound_cache) {
        total_size += CalculateSoundAssetSize(asset.get());
    }

    for (const auto& [name, asset] : m_script_cache) {
        total_size += CalculateScriptAssetSize(asset.get());
    }

    // If cache size exceeds limit, unload unused assets
    if (total_size > m_max_cache_size) {
        UnloadUnusedAssets();
    }
}

template<typename T>
::std::unordered_map<::std::string, ::std::shared_ptr<T>>& AssetManager::GetCache() {
    if constexpr (::std::is_same_v<T, ModelAsset>) {
        return m_model_cache;
    } else if constexpr (::std::is_same_v<T, TextureAsset>) {
        return m_texture_cache;
    } else if constexpr (::std::is_same_v<T, AnimationAsset>) {
        return m_animation_cache;
    } else if constexpr (::std::is_same_v<T, SoundAsset>) {
        return m_sound_cache;
    } else if constexpr (::std::is_same_v<T, ScriptAsset>) {
        return m_script_cache;
    }
    static ::std::unordered_map<::std::string, ::std::shared_ptr<T>> empty;
    return empty;
}

template<typename T>
AssetHandle<T> AssetManager::LoadAsset(const std::string& name, BankEntryType type, bool async, std::function<void(AssetHandle<T>)> callback) {
    // Create a wrapper callback that converts BankEntry* to AssetHandle<T>
    auto wrapper_callback = [this, name, type, callback](const BankEntry* entry) {
        if (!entry) {
            std::cerr << "AssetManager::LoadAsset: Entry is null for " << name << std::endl;
            if (callback) {
                callback(AssetHandle<T>());
            }
            return;
        }

        // Check if the entry type matches the expected type
        if (entry->type != type) {
            std::cerr << "AssetManager::LoadAsset: Entry type mismatch for " << name << ". Expected " 
                      << static_cast<int>(type) << " but got " << static_cast<int>(entry->type) << std::endl;
            if (callback) {
                callback(AssetHandle<T>());
            }
            return;
        }

        // Parse the asset based on its type
        std::shared_ptr<T> asset = nullptr;
        if constexpr (std::is_same_v<T, ModelAsset>) {
            std::cout << "AssetManager::LoadAsset: Parsing model asset " << name << std::endl;
            asset = AssetParser::ParseModel(entry->data.data(), entry->data.size());
        } else if constexpr (std::is_same_v<T, TextureAsset>) {
            std::cout << "AssetManager::LoadAsset: Parsing texture asset " << name << std::endl;
            asset = AssetParser::ParseTexture(entry->data.data(), entry->data.size());
        } else if constexpr (std::is_same_v<T, AnimationAsset>) {
            std::cout << "AssetManager::LoadAsset: Parsing animation asset " << name << std::endl;
            asset = AssetParser::ParseAnimation(entry->data.data(), entry->data.size());
        } else if constexpr (std::is_same_v<T, SoundAsset>) {
            std::cout << "AssetManager::LoadAsset: Parsing sound asset " << name << std::endl;
            asset = AssetParser::ParseSound(entry->data.data(), entry->data.size());
        } else if constexpr (std::is_same_v<T, ScriptAsset>) {
            std::cout << "AssetManager::LoadAsset: Parsing script asset " << name << std::endl;
            asset = AssetParser::ParseScript(entry->data.data(), entry->data.size());
        }

        if (asset) {
            auto& cache = GetCache<T>();
            cache[name] = asset;
            if (callback) {
                callback(AssetHandle<T>(asset));
            }
        } else {
            std::cerr << "AssetManager::LoadAsset: Failed to parse " << name << std::endl;
            if (callback) {
                callback(AssetHandle<T>());
            }
        }
    };

    // Call the non-templated version
    if (LoadAsset(name, async, wrapper_callback)) {
        if (!async) {
            auto& cache = GetCache<T>();
            auto it = cache.find(name);
            if (it != cache.end()) {
                return AssetHandle<T>(it->second);
            }
        }
    }

    return AssetHandle<T>();
}

// Explicit template instantiations
template AssetHandle<ModelAsset> AssetManager::LoadAsset<ModelAsset>(const ::std::string&, BankEntryType, bool, ::std::function<void(AssetHandle<ModelAsset>)>);
template AssetHandle<TextureAsset> AssetManager::LoadAsset<TextureAsset>(const ::std::string&, BankEntryType, bool, ::std::function<void(AssetHandle<TextureAsset>)>);
template AssetHandle<AnimationAsset> AssetManager::LoadAsset<AnimationAsset>(const ::std::string&, BankEntryType, bool, ::std::function<void(AssetHandle<AnimationAsset>)>);
template AssetHandle<SoundAsset> AssetManager::LoadAsset<SoundAsset>(const ::std::string&, BankEntryType, bool, ::std::function<void(AssetHandle<SoundAsset>)>);
template AssetHandle<ScriptAsset> AssetManager::LoadAsset<ScriptAsset>(const ::std::string&, BankEntryType, bool, ::std::function<void(AssetHandle<ScriptAsset>)>);

template ::std::shared_ptr<ModelAsset> AssetManager::ParseAsset<ModelAsset>(const BankEntry*);
template ::std::shared_ptr<TextureAsset> AssetManager::ParseAsset<TextureAsset>(const BankEntry*);
template ::std::shared_ptr<AnimationAsset> AssetManager::ParseAsset<AnimationAsset>(const BankEntry*);
template ::std::shared_ptr<SoundAsset> AssetManager::ParseAsset<SoundAsset>(const BankEntry*);
template ::std::shared_ptr<ScriptAsset> AssetManager::ParseAsset<ScriptAsset>(const BankEntry*);

} // namespace vfs 