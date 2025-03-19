#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <chrono>
#include "vfs/asset_manager.hpp"
#include "vfs/bank_loader.hpp"
#include "assets/assets_texture.hpp"

void PrintTextureInfo(const std::shared_ptr<TextureAsset>& texture) {
    if (!texture) {
        std::cout << "Failed to load texture" << std::endl;
        return;
    }

    std::cout << "\nTexture Information:" << std::endl;
    std::cout << "Name: " << texture->name << std::endl;
    std::cout << "Dimensions: " << texture->width << "x" << texture->height << "x" << texture->depth << std::endl;
    std::cout << "Format: " << texture->format << std::endl;
    std::cout << "Mip levels: " << texture->mip_levels.size() << std::endl;

    for (size_t i = 0; i < texture->mip_levels.size(); ++i) {
        const auto& mip = texture->mip_levels[i];
        std::cout << "\nMip Level " << i << ":" << std::endl;
        std::cout << "  Dimensions: " << mip.width << "x" << mip.height << "x" << mip.depth << std::endl;
        std::cout << "  Format: " << mip.format << std::endl;
        std::cout << "  Data size: " << mip.data.size() << " bytes" << std::endl;

        // Print first few pixels of the texture
        if (!mip.data.empty()) {
            std::cout << "  First few pixels (RGBA):" << std::endl;
            for (size_t j = 0; j < std::min(mip.data.size(), size_t(16)); j += 4) {
                std::cout << "    Pixel " << j/4 << ": R=" << (int)mip.data[j] 
                         << " G=" << (int)mip.data[j+1] 
                         << " B=" << (int)mip.data[j+2] 
                         << " A=" << (int)mip.data[j+3] << std::endl;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <vfs_config_path>" << std::endl;
        return 1;
    }

    std::cout << "Initializing asset manager..." << std::endl;
    auto asset_manager = std::make_shared<AssetManager>();
    
    if (!asset_manager->Initialize(argv[1])) {
        std::cerr << "Failed to initialize asset manager" << std::endl;
        return 1;
    }

    std::cout << "Loading initial banks..." << std::endl;
    if (!asset_manager->LoadInitialBanks()) {
        std::cerr << "Failed to load initial banks" << std::endl;
        return 1;
    }

    std::cout << "\nLoading test texture..." << std::endl;
    bool load_complete = false;
    std::shared_ptr<TextureAsset> texture;

    asset_manager->LoadAsset<TextureAsset>("test_texture", 
        [&load_complete, &texture](const std::shared_ptr<TextureAsset>& loaded_texture) {
            texture = loaded_texture;
            load_complete = true;
        });

    // Wait for the texture to load
    while (!load_complete) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Print texture information
    PrintTextureInfo(texture);

    std::cout << "\nTest complete!" << std::endl;
    return 0;
} 