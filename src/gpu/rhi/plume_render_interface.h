#pragma once

#include <memory>
#include <vector>
#include "vulkan_common.h"

namespace plume {

// Forward declarations
class RenderDevice;
class RenderCommandQueue;
class RenderCommandList;
class RenderCommandFence;
class RenderQueryPool;
class RenderTexture;
class RenderFramebuffer;
class RenderDescriptorSet;
class RenderSampler;
class RenderPipelineLayout;
class RenderSwapChain;

// Enums
enum class RenderTextureLayout {
    UNKNOWN,
    GENERAL,
    RENDER_TARGET,
    DEPTH_STENCIL,
    SHADER_RESOURCE,
    UNORDERED_ACCESS,
    PRESENT
};

enum class RenderCommandListType {
    GRAPHICS,
    COMPUTE,
    COPY
};

enum class RenderQueryType {
    TIMESTAMP,
    OCCLUSION,
    PIPELINE_STATISTICS
};

enum class RenderFormat {
    UNKNOWN,
    R8G8B8A8_UNORM,
    B8G8R8A8_UNORM,
    D32_FLOAT,
    D24_UNORM_S8_UINT
};

using RenderWindow = void*;

// Base interface class
class RenderInterface {
public:
    virtual ~RenderInterface() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
    virtual bool isValid() const = 0;
    virtual void* getNativeInterface() const = 0;
    virtual RenderDevice* createDevice(const char* name) = 0;
};

// Device class
class RenderDevice {
public:
    virtual ~RenderDevice() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
    virtual bool isValid() const = 0;
    virtual void waitIdle() = 0;
    virtual void* getNativeDevice() const = 0;
    virtual void* getNativePhysicalDevice() const = 0;
    virtual void* getNativeDescriptorPool() const = 0;
    virtual void* getNativeRenderPass() const = 0;
    virtual RenderCommandQueue* createCommandQueue(RenderCommandListType type) = 0;
    virtual RenderCommandList* createCommandList(RenderCommandListType type) = 0;
    virtual RenderQueryPool* createQueryPool(RenderQueryType type, uint32_t count) = 0;
};

// Command queue class
class RenderCommandQueue {
public:
    virtual ~RenderCommandQueue() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
    virtual void waitForCommandFence(RenderCommandFence* fence) = 0;
    virtual void executeCommandLists(RenderCommandList* list, RenderCommandFence* fence) = 0;
    virtual RenderCommandFence* createCommandFence() = 0;
    virtual RenderSwapChain* createSwapChain(RenderWindow window, uint32_t bufferCount, RenderFormat format, uint32_t maxFrameLatency) = 0;
    virtual uint32_t getFamilyIndex() const = 0;
    virtual void* getNativeQueue() const = 0;
};

// Command list class
class RenderCommandList {
public:
    virtual ~RenderCommandList() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
    virtual void begin() = 0;
    virtual void end() = 0;
    virtual void* getNativeCommandList() const = 0;
};

// Command fence class
class RenderCommandFence {
public:
    virtual ~RenderCommandFence() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
};

// Query pool class
class RenderQueryPool {
public:
    virtual ~RenderQueryPool() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
};

// Texture class
class RenderTexture {
public:
    virtual ~RenderTexture() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
};

// Framebuffer class
class RenderFramebuffer {
public:
    virtual ~RenderFramebuffer() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
};

// Descriptor set class
class RenderDescriptorSet {
public:
    virtual ~RenderDescriptorSet() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
};

// Sampler class
class RenderSampler {
public:
    virtual ~RenderSampler() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
};

// Pipeline layout class
class RenderPipelineLayout {
public:
    virtual ~RenderPipelineLayout() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
};

// Swap chain class
class RenderSwapChain {
public:
    virtual ~RenderSwapChain() = default;
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
    virtual bool isEmpty() const = 0;
    virtual bool needsResize() const = 0;
    virtual uint32_t getWidth() const = 0;
    virtual uint32_t getHeight() const = 0;
    virtual bool acquireTexture(void* semaphore, uint32_t* imageIndex) = 0;
    virtual void present(uint32_t imageIndex, void* semaphore, uint32_t waitSemaphoreCount) = 0;
    virtual void setVsyncEnabled(bool enabled) = 0;
};

} // namespace plume 