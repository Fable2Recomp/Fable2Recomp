#include "video.h"
#include <spdlog/spdlog.h>  // for logging (optional)

bool Video::CreateHostDevice(const char* sdlVideoDriver, bool graphicsApiRetry) {
    spdlog::info("CreateHostDevice called with driver: {}", sdlVideoDriver);
    return true;
}

void Video::WaitOnSwapChain() {
    // Stub: no-op
}

void Video::Present() {
    // Stub: no-op, or flush frame if you have a render backend
    spdlog::info("Present called");
}

void Video::StartPipelinePrecompilation() {
    // Stub: no-op, or precompile shaders if you implement that
    spdlog::info("StartPipelinePrecompilation called");
}

void Video::WaitForGPU() {
    // Stub: no-op, simulate waiting for GPU to finish
}

void Video::ComputeViewportDimensions() {
    spdlog::info("ComputeViewportDimensions called");
}

