#pragma once
#include "simd_wrapper.h"

namespace simd {

inline void store_shuffled(PPCVRegister& dst, simde__m128i value) {
    *reinterpret_cast<simde__m128i*>(&dst.u8[0]) = value;
}

inline void load_shuffled(PPCVRegister& dst, const uint8_t* base, uint32_t offset) {
    store_shuffled(dst, shuffle_masked_load(base, offset));
}

} // namespace simd
