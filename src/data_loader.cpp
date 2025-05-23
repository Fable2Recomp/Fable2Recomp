#include "stdafx.h"
#include "data_loader.h"
#include "vfs/vfs.h"
#include "os/logger.h"
#include <fstream>
#include <filesystem>

namespace xe {

DataLoader& DataLoader::GetInstance() {
    static DataLoader instance;
    return instance;
}

bool DataLoader::Initialize(const std::string& data_path) {
    m_data_path = data_path;
    
    // Create data directory if it doesn't exist
    if (!std::filesystem::exists(m_data_path)) {
        std::filesystem::create_directories(m_data_path);
    }
    
    return MountGameFiles();
}

bool DataLoader::LoadRecompiledCode(const std::string& filename, std::vector<uint8_t>& out_data) {
    std::string full_path = m_data_path + "/recompiled/" + filename;
    return LoadFromVFS(full_path, out_data);
}

bool DataLoader::LoadGameAssets() {
    // Load game assets from VFS
    std::vector<std::string> asset_files = {
        "textures.bnk",
        "models.bnk",
        "animations.bnk",
        "effects.bnk"
    };
    
    for (const auto& file : asset_files) {
        std::vector<uint8_t> data;
        if (!LoadFromVFS("assets/" + file, data)) {
            LOG_ERROR("Failed to load asset file: {}", file);
            return false;
        }
        m_file_cache[file] = std::move(data);
    }
    
    return true;
}

bool DataLoader::LoadGameScripts() {
    // Load game scripts from VFS
    std::vector<std::string> script_files = {
        "main.lua",
        "game.lua",
        "ui.lua",
        "world.lua"
    };
    
    for (const auto& file : script_files) {
        std::string content;
        if (!LoadScript("scripts/" + file, content)) {
            LOG_ERROR("Failed to load script file: {}", file);
            return false;
        }
        m_script_cache[file] = std::move(content);
    }
    
    return true;
}

bool DataLoader::LoadFile(const std::string& filename, std::vector<uint8_t>& out_data) {
    return LoadFromVFS(filename, out_data);
}

bool DataLoader::LoadScript(const std::string& filename, std::string& out_content) {
    std::vector<uint8_t> data;
    if (!LoadFromVFS(filename, data)) {
        return false;
    }
    
    out_content.assign(data.begin(), data.end());
    return true;
}

bool DataLoader::LoadWorldData(const std::string& filename, std::vector<uint8_t>& out_data) {
    return LoadFromVFS("world/" + filename, out_data);
}

bool DataLoader::LoadXboxFile(const std::string& filename, X_FILE_ATTRIBUTES* attrs) {
    if (!attrs) return false;
    
    std::vector<uint8_t> data;
    if (!LoadFromXbox(filename, data)) {
        return false;
    }
    
    // Parse Xbox file attributes
    attrs->FileAttributes = 0; // Default attributes
    attrs->FileSize = data.size();
    
    return true;
}

bool DataLoader::LoadXboxString(const std::string& filename, X_UNICODE_STRING* str) {
    if (!str) return false;
    
    std::vector<uint8_t> data;
    if (!LoadFromXbox(filename, data)) {
        return false;
    }
    
    // Convert to Unicode string
    str->Length = data.size();
    str->MaximumLength = data.size() + 1;
    str->Buffer = reinterpret_cast<wchar_t*>(data.data());
    
    return true;
}

bool DataLoader::LoadXboxOverlapped(const std::string& filename, X_IO_STATUS_BLOCK* overlapped) {
    if (!overlapped) return false;
    
    std::vector<uint8_t> data;
    if (!LoadFromXbox(filename, data)) {
        return false;
    }
    
    // Parse overlapped structure
    overlapped->Status = 0; // Success
    overlapped->Information = data.size();
    
    return true;
}

bool DataLoader::MountGameFiles() {
    // Mount game files from data directory
    return vfs::MountDirectory(m_data_path);
}

bool DataLoader::UnmountGameFiles() {
    // Unmount game files
    return vfs::UnmountDirectory(m_data_path);
}

bool DataLoader::LoadFromVFS(const std::string& path, std::vector<uint8_t>& out_data) {
    return vfs::ReadFile(path, out_data);
}

bool DataLoader::LoadFromXbox(const std::string& path, std::vector<uint8_t>& out_data) {
    // Convert Xbox path to VFS path
    std::string vfs_path = "xbox/" + path;
    return LoadFromVFS(vfs_path, out_data);
}

} // namespace xe 
