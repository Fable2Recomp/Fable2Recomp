#include "asset_manager.hpp"
#include "asset_types.hpp"
#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

// Add stream operator for ShaderType
std::ostream& operator<<(std::ostream& os, const gpu::shader::ShaderType& type) {
    switch (type) {
        case gpu::shader::ShaderType::Vertex:   return os << "Vertex";
        case gpu::shader::ShaderType::Pixel:    return os << "Pixel";
        case gpu::shader::ShaderType::Compute:  return os << "Compute";
        case gpu::shader::ShaderType::Geometry: return os << "Geometry";
        case gpu::shader::ShaderType::Hull:     return os << "Hull";
        case gpu::shader::ShaderType::Domain:   return os << "Domain";
        default:                                return os << "Unknown";
    }
}

void PrintModelInfo(const vfs::ModelAsset& model) {
    std::cout << "Model: " << model.name << "\n";
    std::cout << "  Flags: 0x" << std::hex << model.flags << std::dec << "\n";
    std::cout << "  Meshes: " << model.meshes.size() << "\n";
    std::cout << "  Bones: " << model.bones.size() << "\n";
    std::cout << "  Bounding Box: ["
              << model.bounding_box[0] << ", " << model.bounding_box[1] << ", " << model.bounding_box[2] << "] - ["
              << model.bounding_box[3] << ", " << model.bounding_box[4] << ", " << model.bounding_box[5] << "]\n\n";
}

void PrintTextureInfo(const vfs::TextureAsset& texture) {
    std::cout << "Texture: " << texture.name << "\n";
    std::cout << "  Format: " << static_cast<int>(texture.format) << "\n";
    std::cout << "  Size: " << texture.width << "x" << texture.height;
    if (texture.depth > 1) {
        std::cout << "x" << texture.depth;
    }
    std::cout << "\n";
    std::cout << "  Mip Levels: " << texture.mip_levels.size() << "\n";
    for (size_t i = 0; i < texture.mip_levels.size(); ++i) {
        const auto& mip = texture.mip_levels[i];
        std::cout << "    Level " << i << ": " << mip.width << "x" << mip.height;
        if (mip.depth > 1) {
            std::cout << "x" << mip.depth;
        }
        std::cout << ", " << mip.data.size() << " bytes\n";
    }
    std::cout << "\n";
}

void PrintAnimationInfo(const vfs::AnimationAsset& animation) {
    std::cout << "Animation: " << animation.name << "\n";
    std::cout << "  Duration: " << animation.duration << "s\n";
    std::cout << "  Channels: " << animation.channels.size() << "\n";
    for (const auto& channel : animation.channels) {
        std::cout << "    Channel: " << channel.bone_name << "\n";
        std::cout << "      Key Frames: " << channel.key_frames.size() << "\n";
    }
    std::cout << "\n";
}

void PrintSoundInfo(const vfs::SoundAsset& sound) {
    std::cout << "Sound: " << sound.name << "\n";
    std::cout << "  Format: " << static_cast<int>(sound.format) << "\n";
    std::cout << "  Sample Rate: " << sound.sample_rate << "Hz\n";
    std::cout << "  Channels: " << sound.channels << "\n";
    std::cout << "  Bits/Sample: " << sound.bits_per_sample << "\n";
    std::cout << "  Data Size: " << sound.data.size() << " bytes\n\n";
}

void PrintScriptInfo(const vfs::ScriptAsset& script) {
    std::cout << "Script: " << script.name << "\n";
    std::cout << "  Source Size: " << script.source.size() << " bytes\n";
    std::cout << "  Bytecode Size: " << script.bytecode.size() << " bytes\n\n";
}

void PrintShaderInfo(const gpu::shader::ShaderEntry& shader) {
    std::cout << "Shader: " << shader.name << "\n";
    std::cout << "  Type: " << shader.type << "\n";
    std::cout << "  Version: " << shader.version << "\n";
    std::cout << "  Bytecode Size: " << shader.bytecode.size() << " bytes\n\n";
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <vfs_config_path>\n";
        return 1;
    }

    auto& asset_manager = vfs::AssetManager::Get();
    if (!asset_manager.Initialize(argv[1])) {
        std::cerr << "Failed to initialize asset manager\n";
        return 1;
    }

    std::cout << "Successfully initialized asset manager\n\n";

    // Load initial banks
    if (!asset_manager.LoadInitialBanks()) {
        std::cerr << "Failed to load initial banks\n";
        return 1;
    }

    std::cout << "Successfully loaded initial banks\n\n";

    // Test synchronous loading
    std::cout << "Testing synchronous loading:\n";
    std::cout << "==========================\n\n";

    // Test loading existing assets
    {
        auto model = asset_manager.LoadModel("test_model");
        if (!model.IsValid()) {
            std::cerr << "Failed to load test_model\n";
            return 1;
        }
        PrintModelInfo(*model);

        auto texture = asset_manager.LoadTexture("test_texture");
        if (!texture.IsValid()) {
            std::cerr << "Failed to load test_texture\n";
            return 1;
        }
        PrintTextureInfo(*texture);
    }

    // Test loading non-existent assets
    {
        auto model = asset_manager.LoadModel("non_existent_model");
        if (model.IsValid()) {
            std::cerr << "Unexpectedly loaded non_existent_model\n";
            return 1;
        }
        std::cout << "Successfully handled non-existent model\n";

        auto texture = asset_manager.LoadTexture("non_existent_texture");
        if (texture.IsValid()) {
            std::cerr << "Unexpectedly loaded non_existent_texture\n";
            return 1;
        }
        std::cout << "Successfully handled non-existent texture\n";
    }

    // Test loading wrong asset types
    {
        auto model = asset_manager.LoadModel("test_texture");
        if (model.IsValid()) {
            std::cerr << "Unexpectedly loaded texture as model\n";
            return 1;
        }
        std::cout << "Successfully handled wrong asset type (texture as model)\n";

        auto texture = asset_manager.LoadTexture("test_model");
        if (texture.IsValid()) {
            std::cerr << "Unexpectedly loaded model as texture\n";
            return 1;
        }
        std::cout << "Successfully handled wrong asset type (model as texture)\n";
    }

    // Test loading the same asset multiple times (should return cached version)
    {
        auto model1 = asset_manager.LoadModel("test_model");
        if (!model1.IsValid()) {
            std::cerr << "Failed to load test_model first time\n";
            return 1;
        }

        auto model2 = asset_manager.LoadModel("test_model");
        if (!model2.IsValid()) {
            std::cerr << "Failed to load test_model second time\n";
            return 1;
        }

        if (&(*model1) != &(*model2)) {
            std::cerr << "Cached model not returned\n";
            return 1;
        }
        std::cout << "Successfully handled cached model\n";
    }

    // Test asynchronous loading
    std::cout << "\nTesting asynchronous loading:\n";
    std::cout << "===========================\n\n";

    // Test loading existing asset asynchronously
    {
        bool async_done = false;
        bool async_success = false;
        asset_manager.LoadModel("test_model", true, [&async_done, &async_success](auto model) {
            if (model.IsValid()) {
                PrintModelInfo(*model);
                async_success = true;
            }
            async_done = true;
        });

        // Wait for async load to complete
        while (!async_done) {
            std::this_thread::sleep_for(std::chrono::milliseconds(16));
        }

        if (!async_success) {
            std::cerr << "Failed to load test_model asynchronously\n";
            return 1;
        }
        std::cout << "Successfully loaded model asynchronously\n";
    }

    // Test loading non-existent asset asynchronously
    {
        bool async_done = false;
        bool async_failed = false;
        asset_manager.LoadModel("non_existent_model", true, [&async_done, &async_failed](auto model) {
            if (!model.IsValid()) {
                async_failed = true;
            }
            async_done = true;
        });

        // Wait for async load to complete
        while (!async_done) {
            std::this_thread::sleep_for(std::chrono::milliseconds(16));
        }

        if (!async_failed) {
            std::cerr << "Unexpectedly loaded non_existent_model asynchronously\n";
            return 1;
        }
        std::cout << "Successfully handled non-existent model asynchronously\n";
    }

    std::cout << "\nAll tests passed!\n";
    return 0;
} 