#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <filesystem>

// Bank file format:
// - Magic number (uint32_t): 0x00008000
// - Version major (uint32_t): 3
// - Version minor (uint32_t): 1
// - Flags (uint32_t): 0
// - Entry count (uint32_t)
// For each entry:
//   - Name length (uint32_t)
//   - Name (char[])
//   - Type (uint32_t)
//   - Flags (uint32_t)
//   - Version (uint32_t)
//   - Data size (uint32_t)
//   - Data (uint8_t[])

void WriteBank(const std::string& filename, const std::vector<uint8_t>& data) {
    // Create directory if it doesn't exist
    std::filesystem::create_directories("test/assets");

    // Write bank file
    std::ofstream file("test/assets/" + filename, std::ios::binary);
    if (!file) {
        std::cerr << "Failed to create bank file: " << filename << "\n";
        return;
    }

    // Write header
    uint32_t magic = 0x00008000;
    uint32_t version_major = 3;
    uint32_t version_minor = 1;
    uint32_t flags = 0;
    uint32_t entry_count = 1;

    file.write(reinterpret_cast<const char*>(&magic), sizeof(magic));
    file.write(reinterpret_cast<const char*>(&version_major), sizeof(version_major));
    file.write(reinterpret_cast<const char*>(&version_minor), sizeof(version_minor));
    file.write(reinterpret_cast<const char*>(&flags), sizeof(flags));
    file.write(reinterpret_cast<const char*>(&entry_count), sizeof(entry_count));

    // Write entry
    std::string name = filename.substr(0, filename.find(".bnk"));
    uint32_t name_length = static_cast<uint32_t>(name.size());
    uint32_t type = filename.find("model") != std::string::npos ? 3 : 4; // 3 = Model, 4 = Texture
    uint32_t entry_flags = 0;
    uint32_t version = 1;
    uint32_t data_size = static_cast<uint32_t>(data.size());

    file.write(reinterpret_cast<const char*>(&name_length), sizeof(name_length));
    file.write(name.c_str(), name_length);
    file.write(reinterpret_cast<const char*>(&type), sizeof(type));
    file.write(reinterpret_cast<const char*>(&entry_flags), sizeof(entry_flags));
    file.write(reinterpret_cast<const char*>(&version), sizeof(version));
    file.write(reinterpret_cast<const char*>(&data_size), sizeof(data_size));
    file.write(reinterpret_cast<const char*>(data.data()), data_size);
}

int main() {
    // Create test model data
    std::vector<uint8_t> model_data = {
        // Mesh count
        0x01, 0x00, 0x00, 0x00,
        
        // Mesh 0
        // Vertex count
        0x04, 0x00, 0x00, 0x00,
        
        // Vertices (4 vertices, each with position, normal, and UV)
        // Vertex 0
        0x00, 0x00, 0x00, 0x00, // x
        0x00, 0x00, 0x00, 0x00, // y
        0x00, 0x00, 0x00, 0x00, // z
        0x00, 0x00, 0x80, 0xbf, // nx
        0x00, 0x00, 0x00, 0x00, // ny
        0x00, 0x00, 0x00, 0x00, // nz
        0x00, 0x00, 0x00, 0x00, // u
        0x00, 0x00, 0x00, 0x00, // v
        
        // Vertex 1
        0x00, 0x00, 0x80, 0x3f, // x
        0x00, 0x00, 0x00, 0x00, // y
        0x00, 0x00, 0x00, 0x00, // z
        0x00, 0x00, 0x80, 0xbf, // nx
        0x00, 0x00, 0x00, 0x00, // ny
        0x00, 0x00, 0x00, 0x00, // nz
        0x00, 0x00, 0x80, 0x3f, // u
        0x00, 0x00, 0x00, 0x00, // v
        
        // Vertex 2
        0x00, 0x00, 0x00, 0x00, // x
        0x00, 0x00, 0x80, 0x3f, // y
        0x00, 0x00, 0x00, 0x00, // z
        0x00, 0x00, 0x80, 0xbf, // nx
        0x00, 0x00, 0x00, 0x00, // ny
        0x00, 0x00, 0x00, 0x00, // nz
        0x00, 0x00, 0x00, 0x00, // u
        0x00, 0x00, 0x80, 0x3f, // v
        
        // Vertex 3
        0x00, 0x00, 0x80, 0x3f, // x
        0x00, 0x00, 0x80, 0x3f, // y
        0x00, 0x00, 0x00, 0x00, // z
        0x00, 0x00, 0x80, 0xbf, // nx
        0x00, 0x00, 0x00, 0x00, // ny
        0x00, 0x00, 0x00, 0x00, // nz
        0x00, 0x00, 0x80, 0x3f, // u
        0x00, 0x00, 0x80, 0x3f, // v
        
        // Index count
        0x06, 0x00, 0x00, 0x00,
        
        // Indices
        0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00,
        
        // Material name length
        0x0B, 0x00, 0x00, 0x00,
        
        // Material name
        't', 'e', 's', 't', '_', 't', 'e', 'x', 't', 'u', 'r', 'e',
        
        // Bone count
        0x00, 0x00, 0x00, 0x00
    };

    // Create test texture data
    std::vector<uint8_t> texture_data = {
        // Width
        0x02, 0x00, 0x00, 0x00,
        
        // Height
        0x02, 0x00, 0x00, 0x00,
        
        // Depth
        0x01, 0x00, 0x00, 0x00,
        
        // Format
        0x01, 0x00, 0x00, 0x00, // RGBA8
        
        // Mip count
        0x01, 0x00, 0x00, 0x00,

        // Name length
        0x0C, 0x00, 0x00, 0x00,

        // Name
        't', 'e', 's', 't', '_', 't', 'e', 'x', 't', 'u', 'r', 'e',
        
        // Mip 0
        // Width
        0x02, 0x00, 0x00, 0x00,
        
        // Height
        0x02, 0x00, 0x00, 0x00,
        
        // Depth
        0x01, 0x00, 0x00, 0x00,
        
        // Format
        0x01, 0x00, 0x00, 0x00, // RGBA8
        
        // Data size
        0x10, 0x00, 0x00, 0x00,
        
        // Data (2x2 RGBA8 texture)
        0xFF, 0x00, 0x00, 0xFF, // Red
        0x00, 0xFF, 0x00, 0xFF, // Green
        0x00, 0x00, 0xFF, 0xFF, // Blue
        0xFF, 0xFF, 0xFF, 0xFF  // White
    };

    // Write bank files
    WriteBank("test_model.bnk", model_data);
    WriteBank("test_texture.bnk", texture_data);

    std::cout << "Successfully generated test bank files\n";
    return 0;
} 