#pragma once

#include <cstdint>
#include <cstddef>

namespace SWA {

inline uint32_t GetVersion() {
    return 1;
}

inline bool IsInitialized() {
    return true;
}

inline void Initialize() {
    // Initialization code here
}

inline void Shutdown() {
    // Shutdown code here
}

} // namespace SWA 