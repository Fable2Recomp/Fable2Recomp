#include <gtest/gtest.h>
#include <filesystem>
#include "../src/assets/data_loader.h"
#include "../src/vfs/vfs.h"

extern std::string g_data_dir;

class AssetLoadingTest : public testing::Test {
protected:
    void SetUp() override {
        vfs = std::make_unique<VFS>();
        vfs->mount("", g_data_dir);
        data_loader = std::make_unique<DataLoader>(vfs.get());
    }

    std::unique_ptr<VFS> vfs;
    std::unique_ptr<DataLoader> data_loader;
};

TEST_F(AssetLoadingTest, DirectoryExists) {
    ASSERT_TRUE(std::filesystem::exists(g_data_dir));
}

TEST_F(AssetLoadingTest, LoadVFSConfig) {
    auto data = vfs->readFile("startup.vfsconfig");
    ASSERT_TRUE(data.has_value()) << "Failed to load VFS config";
    EXPECT_FALSE(data->empty()) << "VFS config is empty";
}

TEST_F(AssetLoadingTest, LoadAnimationData) {
    auto data = vfs->readFile("fable2_anims.animation_data");
    ASSERT_TRUE(data.has_value()) << "Failed to load animation data";
    EXPECT_FALSE(data->empty()) << "Animation data is empty";
}

TEST_F(AssetLoadingTest, LoadAnimationTOC) {
    auto data = vfs->readFile("fable2_anims.animation_toc");
    ASSERT_TRUE(data.has_value()) << "Failed to load animation TOC";
    EXPECT_FALSE(data->empty()) << "Animation TOC is empty";
}

TEST_F(AssetLoadingTest, LoadGameScripts) {
    auto data = vfs->readFile("gamescripts.bnk");
    ASSERT_TRUE(data.has_value()) << "Failed to load game scripts";
    EXPECT_FALSE(data->empty()) << "Game scripts bank is empty";
}

TEST_F(AssetLoadingTest, LoadAudioBank) {
    auto data = vfs->readFile("streaming.bnk");
    ASSERT_TRUE(data.has_value()) << "Failed to load audio bank";
    EXPECT_FALSE(data->empty()) << "Audio bank is empty";
}

TEST_F(AssetLoadingTest, NonExistentFile) {
    auto result = data_loader->loadFile("nonexistent.file");
    EXPECT_FALSE(result.has_value()) << "Should not be able to load non-existent file";
}

TEST_F(AssetLoadingTest, CheckShaderDirectory) {
    EXPECT_TRUE(std::filesystem::exists(g_data_dir + "/Shaders")) << "Shaders directory not found";
    EXPECT_TRUE(std::filesystem::is_directory(g_data_dir + "/Shaders")) << "Shaders path is not a directory";
}

TEST_F(AssetLoadingTest, CheckArtDirectory) {
    EXPECT_TRUE(std::filesystem::exists(g_data_dir + "/art")) << "Art directory not found";
    EXPECT_TRUE(std::filesystem::is_directory(g_data_dir + "/art")) << "Art path is not a directory";
}

TEST_F(AssetLoadingTest, CheckAudioDirectory) {
    EXPECT_TRUE(std::filesystem::exists(g_data_dir + "/audio")) << "Audio directory not found";
    EXPECT_TRUE(std::filesystem::is_directory(g_data_dir + "/audio")) << "Audio path is not a directory";
} 