#pragma once

#include <cstdint>
#include <cstddef>

// Basic type definitions
struct swa_null_ctor {};  // Used for null constructors in inheritance

// Endian conversion templates for big-endian values
template<typename T>
class be {
private:
    T value;

public:
    be() : value() {}
    be(T v) : value(v) {}

    operator T() const { return value; }
    T operator=(T v) { value = v; return v; }
};

// Smart pointer template for Xbox 360 pointers
template<typename T>
class xpointer {
private:
    T* ptr;

public:
    xpointer() : ptr(nullptr) {}
    xpointer(T* p) : ptr(p) {}
    
    T* operator->() const { return ptr; }
    T& operator*() const { return *ptr; }
    operator T*() const { return ptr; }
    
    T* operator=(T* p) { ptr = p; return p; }
    bool operator==(std::nullptr_t) const { return ptr == nullptr; }
    bool operator!=(std::nullptr_t) const { return ptr != nullptr; }
};

// Common macros used throughout the codebase
#define SWA_INSERT_PADDING(size) uint8_t _pad_##__LINE__[size]
#define SWA_ASSERT_OFFSETOF(type, member, offset) static_assert(offsetof(type, member) == offset, "Offset assertion failed")
#define SWA_ASSERT_SIZEOF(type, size) static_assert(sizeof(type) == size, "Size assertion failed")

// Common error codes
namespace SWA {
    static const uint32_t ERROR_SUCCESS = 0;
    static const uint32_t ERROR_BAD_ARGUMENTS = 1;
    static const uint32_t ERROR_DEVICE_NOT_CONNECTED = 2;
}