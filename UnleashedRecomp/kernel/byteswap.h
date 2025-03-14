#pragma once
#include <cassert>
#include <cstdint>

template<typename T>
inline T ByteSwap(T value)
{
    if constexpr (sizeof(T) == 1)
        return value;
    else if constexpr (sizeof(T) == 2)
        return __builtin_bswap16(value);
    else if constexpr (sizeof(T) == 4)
        return __builtin_bswap32(value);
    else if constexpr (sizeof(T) == 8)
        return __builtin_bswap64(value);
    else
        static_assert(false, "Invalid type size for ByteSwap");
}

template<typename T>
inline void ByteSwapInplace(T& value)
{
    value = ByteSwap(value);
}
