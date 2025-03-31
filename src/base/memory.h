#pragma once

#include <cstdint>
#include <cstring>

namespace xe {
namespace base {

// Memory read/write functions
template<typename T>
inline T load(const void* ptr) {
    T value;
    std::memcpy(&value, ptr, sizeof(T));
    return value;
}

template<typename T>
inline void store(void* ptr, T value) {
    std::memcpy(ptr, &value, sizeof(T));
}

// Memory copy functions
inline void copy_128(void* dest, const void* src) {
    std::memcpy(dest, src, 128);
}

inline void copy_256(void* dest, const void* src) {
    std::memcpy(dest, src, 256);
}

// Memory zero functions
inline void zero_128(void* dest) {
    std::memset(dest, 0, 128);
}

inline void zero_256(void* dest) {
    std::memset(dest, 0, 256);
}

} // namespace base
} // namespace xe 