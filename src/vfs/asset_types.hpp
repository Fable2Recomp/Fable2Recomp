#pragma once
#include <vector>
#include <string>
#include <cstdint>
#include <memory>

namespace vfs {

// Model asset structures
struct Vertex {
    float position[3];
    float normal[3];
    float uv[2];
    float tangent[4];
    uint8_t bone_indices[4];
    float bone_weights[4];
};

struct Mesh {
    ::std::vector<Vertex> vertices;
    ::std::vector<uint32_t> indices;
    ::std::string material_name;
    uint32_t bone_offset;
};

struct Bone {
    ::std::string name;
    int32_t parent_index;
    float inverse_bind_matrix[16];
    float local_transform[16];
};

struct ModelAsset {
    ::std::vector<Mesh> meshes;
    ::std::vector<Bone> bones;
    ::std::string name;
    uint32_t flags;
    float bounding_box[6]; // min_x, min_y, min_z, max_x, max_y, max_z
};

// Texture asset structures
enum class TextureFormat {
    Unknown,
    R8G8B8A8_UNORM,
    BC1_UNORM,
    BC2_UNORM,
    BC3_UNORM,
    BC4_UNORM,
    BC5_UNORM,
    BC6H_UF16,
    BC7_UNORM
};

struct TextureMipLevel {
    uint32_t width;
    uint32_t height;
    uint32_t depth;
    uint32_t format;
    uint32_t size;
    ::std::vector<uint8_t> data;
};

struct TextureAsset {
    uint32_t width;
    uint32_t height;
    uint32_t depth;
    uint32_t format;
    uint32_t mip_count;
    ::std::vector<TextureMipLevel> mip_levels;
    ::std::string name;
};

// Animation asset structures
struct KeyFrame {
    float time;
    float value;
};

struct AnimationChannel {
    ::std::string bone_name;
    ::std::vector<KeyFrame> key_frames;
};

struct AnimationAsset {
    ::std::vector<AnimationChannel> channels;
    float duration;
    ::std::string name;
};

// Sound asset structures
enum class SoundFormat {
    Unknown,
    PCM16,
    PCM24,
    PCM32,
    IMA_ADPCM,
    XMA2
};

struct SoundAsset {
    uint32_t sample_rate;
    uint32_t channels;
    uint32_t bits_per_sample;
    uint32_t format;
    ::std::vector<uint8_t> data;
    ::std::string name;
};

// Script asset structure
struct ScriptAsset {
    ::std::string source;
    ::std::vector<uint8_t> bytecode;
    ::std::string name;
};

// Asset parsers
class AssetParser {
public:
    static ::std::shared_ptr<ModelAsset> ParseModel(const uint8_t* data, size_t size);
    static ::std::shared_ptr<TextureAsset> ParseTexture(const uint8_t* data, size_t size);
    static ::std::shared_ptr<AnimationAsset> ParseAnimation(const uint8_t* data, size_t size);
    static ::std::shared_ptr<SoundAsset> ParseSound(const uint8_t* data, size_t size);
    static ::std::shared_ptr<ScriptAsset> ParseScript(const uint8_t* data, size_t size);

private:
    static bool ReadData(const uint8_t* data, size_t size, size_t& offset, void* out, size_t count);
    static bool ReadString(const uint8_t* data, size_t size, size_t& offset, ::std::string& out);
};

} // namespace vfs 