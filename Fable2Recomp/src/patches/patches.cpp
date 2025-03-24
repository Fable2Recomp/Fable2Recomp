#include "stdafx.h"
#include "xbox.h"
#include "memory_patches.h"

namespace patches {

void Init() {
    xe::MemoryPatches::Initialize();
}

void Shutdown() {
    xe::MemoryPatches::Shutdown();
}

void Apply() {
    // Apply patches and update memory state
    xe::MemoryPatches::Update();
}

} // namespace patches 