#pragma once

#include "rhi/plume_render_interface.h"
#include "../thirdparty/imgui/imgui.h"
#include "../thirdparty/imgui/backends/imgui_impl_vulkan.h"
#include "../thirdparty/imgui/backends/imgui_impl_sdl2.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
#include <vulkan/vulkan.h>
#include <vector>
#include <memory>
#include <chrono>
#include <atomic>
#include <unordered_map>

using namespace plume;

// Constants
static constexpr size_t NUM_FRAMES = 2;
static constexpr size_t NUM_QUERIES = 2;
static constexpr uint32_t PITCH_ALIGNMENT = 0x100;
static constexpr uint32_t PLACEMENT_ALIGNMENT = 0x200;
static constexpr size_t TEXTURE_DESCRIPTOR_SIZE = 65536;
static constexpr size_t SAMPLER_DESCRIPTOR_SIZE = 1024;

// Forward declarations
struct GuestTexture;
struct GuestSurface;

// Texture formats and flags
enum class TextureFormat : uint32_t {
    UNKNOWN = 0,
    R8G8B8A8_UNORM = 1,
    B8G8R8A8_UNORM = 2,
    DXT1 = 3,
    DXT3 = 4,
    DXT5 = 5,
    BC7_UNORM = 6,
    D32_FLOAT = 7,
    D24_UNORM_S8_UINT = 8
};

enum TextureFlags : uint32_t {
    TEXTURE_FLAG_NONE = 0,
    TEXTURE_FLAG_RENDER_TARGET = 1 << 0,
    TEXTURE_FLAG_DEPTH_STENCIL = 1 << 1,
    TEXTURE_FLAG_SHADER_RESOURCE = 1 << 2,
    TEXTURE_FLAG_UNORDERED_ACCESS = 1 << 3,
    TEXTURE_FLAG_CUBE_MAP = 1 << 4,
    TEXTURE_FLAG_GENERATE_MIPS = 1 << 5
};

// Texture management structures
struct TextureDesc {
    uint32_t width;
    uint32_t height;
    uint32_t depth;
    uint32_t mipLevels;
    uint32_t arraySize;
    TextureFormat format;
    uint32_t flags;
    uint32_t sampleCount;
    uint32_t sampleQuality;
};

struct GuestTexture {
    TextureDesc desc;
    std::unique_ptr<RenderTexture> texture;
    std::unique_ptr<RenderTexture> resolveTexture;
    uint32_t descriptorIndex;
    bool isRenderTarget;
    bool isDepthStencil;

    GuestTexture() : descriptorIndex(0), isRenderTarget(false), isDepthStencil(false) {}
    ~GuestTexture() = default;
};

struct GuestSurface {
    uint32_t width;
    uint32_t height;
    TextureFormat format;
    std::unique_ptr<RenderTexture> texture;
    std::unique_ptr<RenderTexture> resolveTexture;
    std::vector<std::unique_ptr<RenderFramebuffer>> framebuffers;
    RenderTextureLayout layout;
    bool needsResolve;

    GuestSurface() : width(0), height(0), format(TextureFormat::UNKNOWN), layout(RenderTextureLayout::UNKNOWN), needsResolve(false) {}
    ~GuestSurface() = default;
};

// Profiler for performance monitoring
struct Profiler {
    std::atomic<double> value;
    double values[60];  // 60 frames of history
    std::chrono::steady_clock::time_point start;

    void Begin();
    void End();
    void Set(double v);
    void Reset();
    double UpdateAndReturnAverage();
};

struct Video {
    static inline uint32_t s_viewportWidth = 1280;
    static inline uint32_t s_viewportHeight = 720;

    // Core functions
    static bool CreateHostDevice(const char* sdlVideoDriver);
    static void WaitOnSwapChain();
    static void Present();
    static void StartPipelinePrecompilation();
    static void WaitForGPU();
    static void ComputeViewportDimensions();
    static void Shutdown();

    // Rendering functions
    static void BeginFrame();
    static void EndFrame();
    static void BeginCommandList();
    static void EndCommandList();
    static void ExecuteCommandList();

    // Resource management
    static bool CreateSwapChain();
    static void DestroySwapChain();
    static bool CreateRenderTargets();
    static void DestroyRenderTargets();
    static bool CreateSyncObjects();
    static void DestroySyncObjects();

    // ImGui integration
    static bool InitImGui();
    static void ShutdownImGui();
    static void RenderImGui();

    // State tracking
    static bool IsInitialized();
    static bool IsVSync();
    static void SetVSync(bool enabled);

    // Texture management
    static std::unique_ptr<GuestTexture> CreateTexture(const TextureDesc& desc);
    static void DestroyTexture(GuestTexture* texture);
    static void UpdateTexture(GuestTexture* texture, const void* data, uint32_t pitch);
    static void ResolveTexture(GuestTexture* source, GuestTexture* dest);
    static void TransitionTexture(GuestTexture* texture, RenderTextureLayout newLayout);
    
    // Surface management
    static std::unique_ptr<GuestSurface> CreateSurface(uint32_t width, uint32_t height, TextureFormat format, uint32_t flags);
    static void DestroySurface(GuestSurface* surface);
    static void ResolveSurface(GuestSurface* surface);
};

// Rendering state structures
struct RenderState {
    VkFormat swapchainFormat;
    VkExtent2D swapchainExtent;
    uint32_t currentFrame;
    uint32_t imageIndex;
    bool vsyncEnabled;
    bool framebufferResized;
};

struct FrameResources {
    VkCommandBuffer commandBuffer;
    VkSemaphore imageAvailableSemaphore;
    VkSemaphore renderFinishedSemaphore;
    VkFence inFlightFence;
};

// Global state
extern RenderState g_renderState;
extern std::vector<FrameResources> g_frameResources;
extern std::unique_ptr<RenderInterface> g_interface;
extern std::unique_ptr<RenderDevice> g_device;
extern std::unique_ptr<RenderCommandQueue> g_queue;
extern std::vector<std::unique_ptr<RenderCommandList>> g_commandLists;
extern std::vector<std::unique_ptr<RenderCommandFence>> g_commandFences;
extern std::vector<std::unique_ptr<RenderQueryPool>> g_queryPools;

// Global texture state
extern std::unique_ptr<RenderDescriptorSet> g_textureDescriptorSet;
extern std::unique_ptr<RenderDescriptorSet> g_samplerDescriptorSet;
extern std::unordered_map<uint64_t, std::pair<uint32_t, std::unique_ptr<RenderSampler>>> g_samplerStates;
extern std::unique_ptr<RenderPipelineLayout> g_pipelineLayout; 