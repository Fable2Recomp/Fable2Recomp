#include "stdafx.h"
#include "xbox.h"
#include "memory_patches.h"

namespace patches {

void Init() {
    InitMemoryManagement();
}

void Shutdown() {
    CleanupMemoryState();
}

void Apply() {
    ApplyMemoryPatches();
    UpdateMemoryState();
}

} // namespace patches 