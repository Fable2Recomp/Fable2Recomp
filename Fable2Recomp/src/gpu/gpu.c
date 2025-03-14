#include "gpu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global state
static SDL_GPUDevice* g_device = NULL;
static char g_error[256] = {0};

// Default vertex shader
static const char* DEFAULT_VERTEX_SHADER = 
    "#version 450\n"
    "layout(location = 0) in vec2 position;\n"
    "layout(location = 1) in vec2 texCoord;\n"
    "layout(location = 0) out vec2 vTexCoord;\n"
    "void main() {\n"
    "    gl_Position = vec4(position, 0.0, 1.0);\n"
    "    vTexCoord = texCoord;\n"
    "}\n";

// Default fragment shader
static const char* DEFAULT_FRAGMENT_SHADER =
    "#version 450\n"
    "layout(location = 0) in vec2 vTexCoord;\n"
    "layout(location = 0) out vec4 fragColor;\n"
    "layout(set = 0, binding = 0) uniform sampler2D texSampler;\n"
    "void main() {\n"
    "    fragColor = texture(texSampler, vTexCoord);\n"
    "}\n";

bool GPU_Init(void) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        snprintf(g_error, sizeof(g_error), "SDL_Init failed: %s", SDL_GetError());
        return false;
    }
    return true;
}

void GPU_Shutdown(void) {
    if (g_device) {
        GPU_DestroyDevice(g_device);
        g_device = NULL;
    }
    SDL_Quit();
}

SDL_GPUDevice* GPU_CreateDevice(void) {
    if (g_device) {
        return g_device;
    }

    // Create GPU device with Vulkan backend
    SDL_GPUDevice* device = SDL_CreateGPUDevice(
        SDL_GPU_SHADERFORMAT_SPIRV,
        true,  // debug mode
        "vulkan"
    );

    if (!device) {
        snprintf(g_error, sizeof(g_error), "Failed to create GPU device: %s", SDL_GetError());
        return NULL;
    }

    g_device = device;
    return device;
}

void GPU_DestroyDevice(SDL_GPUDevice* device) {
    if (device) {
        SDL_DestroyGPUDevice(device);
        if (device == g_device) {
            g_device = NULL;
        }
    }
}

bool GPU_BeginFrame(SDL_GPUDevice* device) {
    if (!device) {
        snprintf(g_error, sizeof(g_error), "Invalid device");
        return false;
    }
    return true;
}

void GPU_EndFrame(SDL_GPUDevice* device) {
    // Implementation will be added when we implement command buffer submission
}

void GPU_Clear(SDL_GPUDevice* device, const SDL_Color* color) {
    if (!device || !color) {
        return;
    }
    // Implementation will be added when we implement render pass
}

void GPU_Present(SDL_GPUDevice* device) {
    if (!device) {
        return;
    }
    // Implementation will be added when we implement swapchain presentation
}

SDL_GPUTexture* GPU_CreateTexture(SDL_GPUDevice* device, int width, int height, SDL_GPUTextureFormat format) {
    if (!device || width <= 0 || height <= 0) {
        return NULL;
    }

    SDL_GPUTextureCreateInfo createInfo = {
        .width = width,
        .height = height,
        .format = format,
        .type = SDL_GPU_TEXTURETYPE_2D,
        .usage = SDL_GPU_TEXTUREUSAGE_SAMPLED | SDL_GPU_TEXTUREUSAGE_TRANSFER_DST
    };

    return device->CreateTexture(device->driverData, &createInfo);
}

void GPU_DestroyTexture(SDL_GPUTexture* texture) {
    if (!texture) {
        return;
    }
    texture->device->DestroyTexture(texture->device->driverData, texture);
}

bool GPU_UpdateTexture(SDL_GPUTexture* texture, const void* pixels, int pitch) {
    if (!texture || !pixels) {
        return false;
    }
    // Implementation will be added when we implement texture upload
    return true;
}

SDL_GPUShader* GPU_CreateShader(SDL_GPUDevice* device, const char* vertex_source, const char* fragment_source) {
    if (!device) {
        return NULL;
    }

    // Use default shaders if none provided
    vertex_source = vertex_source ? vertex_source : DEFAULT_VERTEX_SHADER;
    fragment_source = fragment_source ? fragment_source : DEFAULT_FRAGMENT_SHADER;

    // Create vertex shader
    SDL_GPUShaderCreateInfo vertexShaderInfo = {
        .code = vertex_source,
        .code_size = strlen(vertex_source),
        .stage = SDL_GPU_SHADERSTAGE_VERTEX,
        .format = SDL_GPU_SHADERFORMAT_SPIRV
    };

    SDL_GPUShader* vertex_shader = device->CreateShader(device->driverData, &vertexShaderInfo);
    if (!vertex_shader) {
        return NULL;
    }

    // Create fragment shader
    SDL_GPUShaderCreateInfo fragmentShaderInfo = {
        .code = fragment_source,
        .code_size = strlen(fragment_source),
        .stage = SDL_GPU_SHADERSTAGE_FRAGMENT,
        .format = SDL_GPU_SHADERFORMAT_SPIRV
    };

    SDL_GPUShader* fragment_shader = device->CreateShader(device->driverData, &fragmentShaderInfo);
    if (!fragment_shader) {
        device->DestroyShader(device->driverData, vertex_shader);
        return NULL;
    }

    return fragment_shader; // For now, just return fragment shader as we'll implement pipeline creation later
}

void GPU_DestroyShader(SDL_GPUShader* shader) {
    if (!shader) {
        return;
    }
    shader->device->DestroyShader(shader->device->driverData, shader);
}

SDL_GPUGraphicsPipeline* GPU_CreateGraphicsPipeline(SDL_GPUDevice* device, SDL_GPUShader* vertex_shader, SDL_GPUShader* fragment_shader) {
    if (!device || !vertex_shader || !fragment_shader) {
        return NULL;
    }

    SDL_GPUGraphicsPipelineCreateInfo createInfo = {
        .vertex_shader = vertex_shader,
        .fragment_shader = fragment_shader,
        .vertex_input = {
            .num_attributes = 2,
            .attributes = {
                {
                    .location = 0,
                    .format = SDL_GPU_VERTEXFORMAT_FLOAT2,
                    .offset = 0
                },
                {
                    .location = 1,
                    .format = SDL_GPU_VERTEXFORMAT_FLOAT2,
                    .offset = 8
                }
            }
        }
    };

    return device->CreateGraphicsPipeline(device->driverData, &createInfo);
}

void GPU_DestroyGraphicsPipeline(SDL_GPUGraphicsPipeline* pipeline) {
    if (!pipeline) {
        return;
    }
    pipeline->device->DestroyGraphicsPipeline(pipeline->device->driverData, pipeline);
}

const char* GPU_GetError(void) {
    return g_error;
}

void GPU_ClearError(void) {
    g_error[0] = '\0';
} 