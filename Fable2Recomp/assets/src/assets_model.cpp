#include "assets_model.h"
#include "gpu/gpu.h"
#include <fstream>
#include <cstring>

namespace assets {

ModelAsset::ModelAsset() {
}

ModelAsset::~ModelAsset() {
    Unload();
}

bool ModelAsset::Load(const std::string& path) {
    // Check file extension
    if (path.substr(path.find_last_of(".") + 1) == "bnk") {
        return LoadFromBNK(path);
    }

    // TODO: Add support for other model formats
    fprintf(stderr, "Unsupported model format: %s\n", path.c_str());
    return false;
}

void ModelAsset::Unload() {
    VkDevice device = gpu::GetDevice();
    if (!device) return;

    for (auto& mesh : m_meshes) {
        DestroyBuffers(mesh);
    }
    m_meshes.clear();
}

bool ModelAsset::CreateBuffers(Mesh& mesh) {
    VkDevice device = gpu::GetDevice();

    // Create vertex buffer
    VkBufferCreateInfo vertex_buffer_info = {};
    vertex_buffer_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    vertex_buffer_info.size = mesh.vertices.size() * sizeof(Vertex);
    vertex_buffer_info.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
    vertex_buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

    if (vkCreateBuffer(device, &vertex_buffer_info, nullptr, &mesh.vertex_buffer) != VK_SUCCESS) {
        return false;
    }

    // Get vertex buffer memory requirements
    VkMemoryRequirements vertex_mem_reqs;
    vkGetBufferMemoryRequirements(device, mesh.vertex_buffer, &vertex_mem_reqs);

    // Allocate vertex buffer memory
    VkMemoryAllocateInfo vertex_alloc_info = {};
    vertex_alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    vertex_alloc_info.allocationSize = vertex_mem_reqs.size;
    vertex_alloc_info.memoryTypeIndex = gpu::FindMemoryType(
        vertex_mem_reqs.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT
    );

    if (vkAllocateMemory(device, &vertex_alloc_info, nullptr, &mesh.vertex_memory) != VK_SUCCESS) {
        return false;
    }

    // Map and copy vertex data
    void* vertex_data;
    if (vkMapMemory(device, mesh.vertex_memory, 0, vertex_buffer_info.size, 0, &vertex_data) != VK_SUCCESS) {
        return false;
    }
    memcpy(vertex_data, mesh.vertices.data(), vertex_buffer_info.size);
    vkUnmapMemory(device, mesh.vertex_memory);

    // Bind vertex buffer memory
    if (vkBindBufferMemory(device, mesh.vertex_buffer, mesh.vertex_memory, 0) != VK_SUCCESS) {
        return false;
    }

    // Create index buffer
    VkBufferCreateInfo index_buffer_info = {};
    index_buffer_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    index_buffer_info.size = mesh.indices.size() * sizeof(uint32_t);
    index_buffer_info.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
    index_buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

    if (vkCreateBuffer(device, &index_buffer_info, nullptr, &mesh.index_buffer) != VK_SUCCESS) {
        return false;
    }

    // Get index buffer memory requirements
    VkMemoryRequirements index_mem_reqs;
    vkGetBufferMemoryRequirements(device, mesh.index_buffer, &index_mem_reqs);

    // Allocate index buffer memory
    VkMemoryAllocateInfo index_alloc_info = {};
    index_alloc_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    index_alloc_info.allocationSize = index_mem_reqs.size;
    index_alloc_info.memoryTypeIndex = gpu::FindMemoryType(
        index_mem_reqs.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT
    );

    if (vkAllocateMemory(device, &index_alloc_info, nullptr, &mesh.index_memory) != VK_SUCCESS) {
        return false;
    }

    // Map and copy index data
    void* index_data;
    if (vkMapMemory(device, mesh.index_memory, 0, index_buffer_info.size, 0, &index_data) != VK_SUCCESS) {
        return false;
    }
    memcpy(index_data, mesh.indices.data(), index_buffer_info.size);
    vkUnmapMemory(device, mesh.index_memory);

    // Bind index buffer memory
    if (vkBindBufferMemory(device, mesh.index_buffer, mesh.index_memory, 0) != VK_SUCCESS) {
        return false;
    }

    return true;
}

void ModelAsset::DestroyBuffers(Mesh& mesh) {
    VkDevice device = gpu::GetDevice();
    if (!device) return;

    if (mesh.index_buffer) {
        vkDestroyBuffer(device, mesh.index_buffer, nullptr);
        mesh.index_buffer = VK_NULL_HANDLE;
    }
    if (mesh.index_memory) {
        vkFreeMemory(device, mesh.index_memory, nullptr);
        mesh.index_memory = VK_NULL_HANDLE;
    }
    if (mesh.vertex_buffer) {
        vkDestroyBuffer(device, mesh.vertex_buffer, nullptr);
        mesh.vertex_buffer = VK_NULL_HANDLE;
    }
    if (mesh.vertex_memory) {
        vkFreeMemory(device, mesh.vertex_memory, nullptr);
        mesh.vertex_memory = VK_NULL_HANDLE;
    }
}

bool ModelAsset::LoadFromBNK(const std::string& path) {
    // Open BNK file
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        fprintf(stderr, "Failed to open BNK file: %s\n", path.c_str());
        return false;
    }

    // Get file size and read data
    size_t file_size = file.tellg();
    file.seekg(0);
    std::vector<char> buffer(file_size);
    file.read(buffer.data(), file_size);
    file.close();

    // TODO: Parse BNK format and extract mesh data
    // For now, create a simple test mesh
    Mesh test_mesh;
    
    // Create a simple quad
    test_mesh.vertices = {
        {{-1.0f, -1.0f, 0.0f}, {0.0f, 0.0f, 1.0f}, {0.0f, 0.0f}, {1.0f, 1.0f, 1.0f, 1.0f}},
        {{ 1.0f, -1.0f, 0.0f}, {0.0f, 0.0f, 1.0f}, {1.0f, 0.0f}, {1.0f, 1.0f, 1.0f, 1.0f}},
        {{ 1.0f,  1.0f, 0.0f}, {0.0f, 0.0f, 1.0f}, {1.0f, 1.0f}, {1.0f, 1.0f, 1.0f, 1.0f}},
        {{-1.0f,  1.0f, 0.0f}, {0.0f, 0.0f, 1.0f}, {0.0f, 1.0f}, {1.0f, 1.0f, 1.0f, 1.0f}}
    };
    
    test_mesh.indices = {0, 1, 2, 2, 3, 0};
    test_mesh.material = "default";

    if (!CreateBuffers(test_mesh)) {
        return false;
    }

    m_meshes.push_back(std::move(test_mesh));
    return true;
}

} // namespace assets 