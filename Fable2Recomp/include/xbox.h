#pragma once

#include <cstdint>
#include <type_traits>

namespace xe {

// Byte swapping functions
template<typename T>
inline T byte_swap(T value) {
    if constexpr (sizeof(T) == 1) {
        return value;
    } else if constexpr (sizeof(T) == 2) {
        uint16_t v = *reinterpret_cast<uint16_t*>(&value);
        v = (v >> 8) | (v << 8);
        return *reinterpret_cast<T*>(&v);
    } else if constexpr (sizeof(T) == 4) {
        uint32_t v = *reinterpret_cast<uint32_t*>(&value);
        v = ((v & 0xFF000000) >> 24) |
            ((v & 0x00FF0000) >> 8) |
            ((v & 0x0000FF00) << 8) |
            ((v & 0x000000FF) << 24);
        return *reinterpret_cast<T*>(&v);
    } else if constexpr (sizeof(T) == 8) {
        uint64_t v = *reinterpret_cast<uint64_t*>(&value);
        v = ((v & 0xFF00000000000000ULL) >> 56) |
            ((v & 0x00FF000000000000ULL) >> 40) |
            ((v & 0x0000FF0000000000ULL) >> 24) |
            ((v & 0x000000FF00000000ULL) >> 8) |
            ((v & 0x00000000FF000000ULL) << 8) |
            ((v & 0x0000000000FF0000ULL) << 24) |
            ((v & 0x000000000000FF00ULL) << 40) |
            ((v & 0x00000000000000FFULL) << 56);
        return *reinterpret_cast<T*>(&v);
    }
    return value;
}

template<typename T>
inline T load_and_swap(const void* ptr) {
    T value = *reinterpret_cast<const T*>(ptr);
    return byte_swap(value);
}

template<typename T>
inline void store_and_swap(void* ptr, T value) {
    *reinterpret_cast<T*>(ptr) = byte_swap(value);
}

// Big-endian value template
template<typename T>
class be {
public:
    be() : value_(0) {}
    be(T value) : value_(byte_swap(value)) {}

    operator T() const { return byte_swap(value_); }
    be& operator=(const T& other) {
        value_ = byte_swap(other);
        return *this;
    }

private:
    T value_;
};

} // namespace xe

// Size assertion macro
#define static_assert_size(type, size) \
    static_assert(sizeof(type) == size, "Size of " #type " != " #size)

#include "xenia/base/memory.h"

// Bring xe::be into scope
using xe::be;

// Xbox types and structures
struct X_STATUS {
    uint32_t value;
};

struct X_IO_STATUS_BLOCK {
    xe::be<uint32_t> result;              // 0x0
    xe::be<uint32_t> length;              // 0x4
    xe::be<uint32_t> context;             // 0x8
    xe::be<uint32_t> event;               // 0xC
    xe::be<uint32_t> completion_routine;  // 0x10
    xe::be<uint32_t> completion_context;  // 0x14
    xe::be<uint32_t> extended_error;      // 0x18
};

// ... existing code ... 