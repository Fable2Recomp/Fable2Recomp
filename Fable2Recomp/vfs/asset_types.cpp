#include "asset_types.hpp"
#include <cstring>
#include <algorithm>
#include <iostream>
#include <iomanip>

namespace vfs {

namespace {
// Helper function to safely read data
template<typename T>
bool ReadData(const uint8_t* data, size_t size, size_t& offset, T& value) {
    if (offset + sizeof(T) > size) {
        return false;
    }
    ::std::memcpy(&value, data + offset, sizeof(T));
    offset += sizeof(T);
    return true;
}

// Helper function to read string
bool ReadString(const uint8_t* data, size_t size, size_t& offset, ::std::string& str) {
    uint32_t length;
    if (!ReadData(data, size, offset, length)) {
        return false;
    }
    if (offset + length > size) {
        return false;
    }
    str.assign(reinterpret_cast<const char*>(data + offset), length);
    offset += length;
    return true;
}

bool ParseModelHeader(const uint8_t* data, size_t size, uint32_t& mesh_count, uint32_t& bone_count, uint32_t& flags) {
    size_t offset = 0;
    if (!ReadData(data, size, offset, mesh_count) ||
        !ReadData(data, size, offset, bone_count) ||
        !ReadData(data, size, offset, flags)) {
        return false;
    }
    return true;
}

bool ParseMesh(const uint8_t* data, size_t size, size_t& offset, Mesh& mesh) {
    uint32_t vertex_count, index_count;
    if (!ReadData(data, size, offset, vertex_count) ||
        !ReadData(data, size, offset, index_count) ||
        !ReadString(data, size, offset, mesh.material_name) ||
        !ReadData(data, size, offset, mesh.bone_offset)) {
        return false;
    }

    // Read vertices
    mesh.vertices.resize(vertex_count);
    for (uint32_t i = 0; i < vertex_count; ++i) {
        if (!ReadData(data, size, offset, mesh.vertices[i])) {
            return false;
        }
    }

    // Read indices
    mesh.indices.resize(index_count);
    for (uint32_t i = 0; i < index_count; ++i) {
        if (!ReadData(data, size, offset, mesh.indices[i])) {
            return false;
        }
    }

    return true;
}

bool ParseBone(const uint8_t* data, size_t size, size_t& offset, Bone& bone) {
    if (!ReadString(data, size, offset, bone.name) ||
        !ReadData(data, size, offset, bone.parent_index)) {
        return false;
    }

    for (int i = 0; i < 16; ++i) {
        if (!ReadData(data, size, offset, bone.inverse_bind_matrix[i])) {
            return false;
        }
    }

    for (int i = 0; i < 16; ++i) {
        if (!ReadData(data, size, offset, bone.local_transform[i])) {
            return false;
        }
    }

    return true;
}

bool ParseTextureHeader(const uint8_t* data, size_t size, uint32_t& format, uint32_t& mip_count) {
    size_t offset = 0;
    if (!ReadData(data, size, offset, format) ||
        !ReadData(data, size, offset, mip_count)) {
        return false;
    }
    return true;
}

bool ParseMipLevel(const uint8_t* data, size_t size, size_t& offset, TextureMipLevel& mip) {
    if (!ReadData(data, size, offset, mip.width) ||
        !ReadData(data, size, offset, mip.height) ||
        !ReadData(data, size, offset, mip.depth) ||
        !ReadData(data, size, offset, mip.format) ||
        !ReadData(data, size, offset, mip.size)) {
        return false;
    }

    if (offset + mip.size > size) {
        return false;
    }

    mip.data.resize(mip.size);
    ::std::memcpy(mip.data.data(), data + offset, mip.size);
    offset += mip.size;
    return true;
}

bool ParseAnimationHeader(const uint8_t* data, size_t size, uint32_t& channel_count, float& duration) {
    size_t offset = 0;
    if (!ReadData(data, size, offset, channel_count) ||
        !ReadData(data, size, offset, duration)) {
        return false;
    }
    return true;
}

bool ParseAnimationChannel(const uint8_t* data, size_t size, size_t& offset, AnimationChannel& channel) {
    if (!ReadString(data, size, offset, channel.bone_name)) {
        return false;
    }

    uint32_t key_count;
    if (!ReadData(data, size, offset, key_count)) {
        return false;
    }

    channel.key_frames.resize(key_count);
    for (uint32_t i = 0; i < key_count; ++i) {
        if (!ReadData(data, size, offset, channel.key_frames[i])) {
            return false;
        }
    }

    return true;
}

bool ParseSoundHeader(const uint8_t* data, size_t size, uint32_t& format, uint32_t& data_size) {
    size_t offset = 0;
    if (!ReadData(data, size, offset, format) ||
        !ReadData(data, size, offset, data_size)) {
        return false;
    }
    return true;
}

bool ParseScriptHeader(const uint8_t* data, size_t size, uint32_t& source_size, uint32_t& bytecode_size) {
    size_t offset = 0;
    if (!ReadData(data, size, offset, source_size) ||
        !ReadData(data, size, offset, bytecode_size)) {
        return false;
    }
    return true;
}
} // anonymous namespace

bool AssetParser::ReadData(const uint8_t* data, size_t size, size_t& offset, void* out, size_t count) {
    if (offset + count > size) {
        return false;
    }
    ::std::memcpy(out, data + offset, count);
    offset += count;
    return true;
}

bool AssetParser::ReadString(const uint8_t* data, size_t size, size_t& offset, ::std::string& out) {
    uint32_t length;
    if (!ReadData(data, size, offset, &length, sizeof(length))) {
        return false;
    }
    if (offset + length > size) {
        return false;
    }
    out.assign(reinterpret_cast<const char*>(data + offset), length);
    offset += length;
    return true;
}

::std::shared_ptr<ModelAsset> AssetParser::ParseModel(const uint8_t* data, size_t size) {
    if (!data || size < 12) {
        return nullptr;
    }

    size_t offset = 0;
    uint32_t mesh_count, bone_count, flags;
    if (!ParseModelHeader(data, size, mesh_count, bone_count, flags)) {
        return nullptr;
    }
    offset += 12;

    auto model = ::std::make_shared<ModelAsset>();
    model->flags = flags;
    
    // Read model name
    if (!ReadString(data, size, offset, model->name)) {
        return nullptr;
    }

    // Read bounding box
    if (!ReadData(data, size, offset, model->bounding_box, sizeof(model->bounding_box))) {
        return nullptr;
    }

    // Read meshes
    model->meshes.resize(mesh_count);
    for (uint32_t i = 0; i < mesh_count; ++i) {
        if (!ParseMesh(data, size, offset, model->meshes[i])) {
            return nullptr;
        }
    }

    // Read bones
    model->bones.resize(bone_count);
    for (uint32_t i = 0; i < bone_count; ++i) {
        if (!ParseBone(data, size, offset, model->bones[i])) {
            return nullptr;
        }
    }

    return model;
}

::std::shared_ptr<TextureAsset> AssetParser::ParseTexture(const uint8_t* data, size_t size) {
    if (!data || size < sizeof(uint32_t) * 5) {
        std::cerr << "AssetParser::ParseTexture: Invalid data or size too small for header" << std::endl;
        return nullptr;
    }

    size_t offset = 0;
    auto texture = ::std::make_shared<TextureAsset>();

    // Read header fields
    if (!ReadData(data, size, offset, &texture->width, sizeof(uint32_t)) ||
        !ReadData(data, size, offset, &texture->height, sizeof(uint32_t)) ||
        !ReadData(data, size, offset, &texture->depth, sizeof(uint32_t)) ||
        !ReadData(data, size, offset, &texture->format, sizeof(uint32_t)) ||
        !ReadData(data, size, offset, &texture->mip_count, sizeof(uint32_t))) {
        std::cerr << "AssetParser::ParseTexture: Failed to read texture header" << std::endl;
        return nullptr;
    }

    // Validate header values
    if (texture->width == 0 || texture->height == 0 || texture->depth == 0 || texture->mip_count == 0) {
        std::cerr << "AssetParser::ParseTexture: Invalid texture dimensions or mip count" << std::endl;
        return nullptr;
    }

    // Read texture name
    if (!ReadString(data, size, offset, texture->name)) {
        std::cerr << "AssetParser::ParseTexture: Failed to read texture name" << std::endl;
        return nullptr;
    }

    std::cout << "AssetParser::ParseTexture: Reading texture " << texture->name << std::endl;
    std::cout << "Dimensions: " << texture->width << "x" << texture->height << "x" << texture->depth << std::endl;
    std::cout << "Format: " << texture->format << ", Mip count: " << texture->mip_count << std::endl;

    // Read mip levels
    texture->mip_levels.resize(texture->mip_count);
    for (uint32_t i = 0; i < texture->mip_count; ++i) {
        auto& mip = texture->mip_levels[i];

        // Read mip level header
        if (!ReadData(data, size, offset, &mip.width, sizeof(uint32_t)) ||
            !ReadData(data, size, offset, &mip.height, sizeof(uint32_t)) ||
            !ReadData(data, size, offset, &mip.depth, sizeof(uint32_t)) ||
            !ReadData(data, size, offset, &mip.format, sizeof(uint32_t)) ||
            !ReadData(data, size, offset, &mip.size, sizeof(uint32_t))) {
            std::cerr << "AssetParser::ParseTexture: Failed to read mip level " << i << " header" << std::endl;
            return nullptr;
        }

        // Validate mip level values
        if (mip.width == 0 || mip.height == 0 || mip.depth == 0 || mip.size == 0) {
            std::cerr << "AssetParser::ParseTexture: Invalid mip level " << i << " dimensions or size" << std::endl;
            return nullptr;
        }

        // Validate mip level size against remaining data
        if (offset + mip.size > size) {
            std::cerr << "AssetParser::ParseTexture: Mip level " << i << " data exceeds buffer size" << std::endl;
            return nullptr;
        }

        std::cout << "Mip level " << i << ": " << mip.width << "x" << mip.height << "x" << mip.depth << std::endl;
        std::cout << "Format: " << mip.format << ", Size: " << mip.size << " bytes" << std::endl;

        // Read mip level data
        mip.data.resize(mip.size);
        if (!ReadData(data, size, offset, mip.data.data(), mip.size)) {
            std::cerr << "AssetParser::ParseTexture: Failed to read mip level " << i << " data" << std::endl;
            return nullptr;
        }
    }

    std::cout << "AssetParser::ParseTexture: Successfully parsed texture with " << texture->mip_count << " mip levels" << std::endl;
    return texture;
}

::std::shared_ptr<AnimationAsset> AssetParser::ParseAnimation(const uint8_t* data, size_t size) {
    if (!data || size < 8) {
        return nullptr;
    }

    size_t offset = 0;
    uint32_t channel_count;
    float duration;
    if (!ParseAnimationHeader(data, size, channel_count, duration)) {
        return nullptr;
    }
    offset += 8;

    auto animation = ::std::make_shared<AnimationAsset>();
    animation->duration = duration;

    // Read animation name
    if (!ReadString(data, size, offset, animation->name)) {
        return nullptr;
    }

    // Read channels
    animation->channels.resize(channel_count);
    for (uint32_t i = 0; i < channel_count; ++i) {
        if (!ParseAnimationChannel(data, size, offset, animation->channels[i])) {
            return nullptr;
        }
    }

    return animation;
}

::std::shared_ptr<SoundAsset> AssetParser::ParseSound(const uint8_t* data, size_t size) {
    if (!data || size < 8) {
        return nullptr;
    }

    size_t offset = 0;
    uint32_t format, data_size;
    if (!ParseSoundHeader(data, size, format, data_size)) {
        return nullptr;
    }
    offset += 8;

    auto sound = ::std::make_shared<SoundAsset>();
    sound->format = format;

    // Read sound properties
    if (!ReadString(data, size, offset, sound->name) ||
        !ReadData(data, size, offset, &sound->sample_rate, sizeof(sound->sample_rate)) ||
        !ReadData(data, size, offset, &sound->channels, sizeof(sound->channels)) ||
        !ReadData(data, size, offset, &sound->bits_per_sample, sizeof(sound->bits_per_sample))) {
        return nullptr;
    }

    // Read sound data
    if (offset + data_size > size) {
        return nullptr;
    }
    sound->data.assign(data + offset, data + offset + data_size);
    offset += data_size;

    return sound;
}

::std::shared_ptr<ScriptAsset> AssetParser::ParseScript(const uint8_t* data, size_t size) {
    if (!data || size < 8) {
        return nullptr;
    }

    size_t offset = 0;
    uint32_t source_size, bytecode_size;
    if (!ParseScriptHeader(data, size, source_size, bytecode_size)) {
        return nullptr;
    }
    offset += 8;

    auto script = ::std::make_shared<ScriptAsset>();

    // Read script name
    if (!ReadString(data, size, offset, script->name)) {
        return nullptr;
    }

    // Read source code
    if (offset + source_size > size) {
        return nullptr;
    }
    script->source.assign(reinterpret_cast<const char*>(data + offset), source_size);
    offset += source_size;

    // Read bytecode
    if (offset + bytecode_size > size) {
        return nullptr;
    }
    script->bytecode.assign(data + offset, data + offset + bytecode_size);
    offset += bytecode_size;

    return script;
}

} // namespace vfs 