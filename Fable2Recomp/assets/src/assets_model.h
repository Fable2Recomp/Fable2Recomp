#pragma once

#include "assets.h"
#include <vulkan/vulkan.h>
#include <vector>
#include <string>
#include <glm/glm.hpp>

namespace assets {

struct Vertex {
    glm::vec3 position;
    glm::vec3 normal;
    glm::vec2 uv;
    glm::vec4 color;
};

struct Mesh {
    std::vector<Vertex> vertices;
    std::vector<uint32_t> indices;
    std::string material;
    VkBuffer vertex_buffer;
    VkDeviceMemory vertex_memory;
    VkBuffer index_buffer;
    VkDeviceMemory index_memory;
};

class ModelAsset : public Asset {
public:
    ModelAsset();
    ~ModelAsset();

    AssetType GetType() const override { return AssetType::Model; }
    bool Load(const std::string& path) override;
    void Unload() override;

    const std::vector<Mesh>& GetMeshes() const { return m_meshes; }

private:
    bool CreateBuffers(Mesh& mesh);
    void DestroyBuffers(Mesh& mesh);
    bool LoadFromBNK(const std::string& path);

    std::vector<Mesh> m_meshes;
};

} // namespace assets 