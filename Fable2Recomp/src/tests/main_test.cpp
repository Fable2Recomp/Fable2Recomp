#include <gtest/gtest.h>
#include <filesystem>
#include <cstdlib>

std::string g_data_dir;

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    
    // Get data directory from environment
    const char* data_dir = std::getenv("DATA_DIR");
    if (!data_dir) {
        std::cerr << "DATA_DIR environment variable not set\n";
        return 1;
    }
    
    if (!std::filesystem::exists(data_dir)) {
        std::cerr << "Data directory does not exist: " << data_dir << "\n";
        return 1;
    }
    
    g_data_dir = data_dir;
    return RUN_ALL_TESTS();
} 