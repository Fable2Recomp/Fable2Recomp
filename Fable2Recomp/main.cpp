#include "stdafx.h"
#include "xbox.h"

// Forward declarations of component functions
namespace kernel { void Init(); void Shutdown(); }
namespace hid { void Init(); void Shutdown(); }
namespace ui { void Init(); void Shutdown(); void Render(); }
namespace patches { void Init(); void Shutdown(); void Apply(); }
namespace gpu { void Init(); void Shutdown(); void Update(); void Render(); }
namespace apu { void Init(); void Shutdown(); void Update(); }

// Global running flag that can be accessed by other components
namespace {
    bool g_running = true;
}

// Getter/setter for the running flag
bool* GetRunningFlag() {
    return &g_running;
}

int main(int argc, char* argv[]) {
    // Initialize components
    kernel::Init();
    hid::Init();
    ui::Init();
    patches::Init();
    gpu::Init();
    apu::Init();

    // Apply patches
    patches::Apply();

    // Main loop
    while (g_running) {
        // Update components
        gpu::Update();
        apu::Update();

        // Render
        gpu::Render();
        ui::Render();
    }

    // Shutdown in reverse order
    apu::Shutdown();
    gpu::Shutdown();
    patches::Shutdown();
    ui::Shutdown();
    hid::Shutdown();
    kernel::Shutdown();

    return 0;
} 