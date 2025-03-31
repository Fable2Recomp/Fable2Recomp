#include "stdafx.h"
#include "asset_manager.hpp"
#include "bank_loader.hpp"
#include "asset_types.hpp"
#include <iostream>

using namespace vfs;

void TestAsyncTextureLoading() {
    std::cout << "\nTesting asynchronous texture loading:\n===================================\n\n";

    auto& asset_manager = vfs::AssetManager::Get();

    // Load texture asynchronously
    asset_manager.LoadTexture("test_texture", true, [](AssetHandle<vfs::TextureAsset> texture) {
        if (!texture.IsValid()) {
            std::cout << "Failed to load test_texture asynchronously\n";
            return;
        }
        std::cout << "Successfully loaded test_texture asynchronously\n";
        std::cout << "Texture dimensions: " << texture->width << "x" << texture->height << "\n";
    });

    // Process async loads by loading another asset
    asset_manager.LoadTexture("test_texture", false, nullptr);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <config_file>\n";
        return 1;
    }

    auto& asset_manager = vfs::AssetManager::Get();

    // Initialize asset manager
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

    // Test async texture loading
    TestAsyncTextureLoading();

    return 0;
} 