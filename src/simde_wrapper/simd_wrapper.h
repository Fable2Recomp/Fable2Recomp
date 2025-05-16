#pragma once

// Must be defined BEFORE including any intrinsics to block conflicts
#ifndef SDL_DISABLE_IMMINTRIN_H
#define SDL_DISABLE_IMMINTRIN_H
#endif

// Also block Microsoft-style intrinsics, if relevant
#ifndef __IMMINTRIN_H
#define __IMMINTRIN_H
#endif

#include <simde/simde-math.h>
#include <simde/x86/sse.h>
#include <simde/x86/sse2.h>
#include <simde/x86/sse3.h>
#include <simde/x86/ssse3.h>
#include <simde/x86/sse4.1.h>
#include <simde/simde-math.h>
#include <cmath>
#include <cstdint>

namespace simd {

using vec128f = simde__m128;
using vec128i = simde__m128i;

// --- Load/Store (aligned) ---
inline vec128f load_f32(const float* ptr) { return simde_mm_load_ps(ptr); }
inline void store_f32(float* ptr, vec128f v) { simde_mm_store_ps(ptr, v); }

inline vec128i load_i8(const int8_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }
inline vec128i load_i16(const int16_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }
inline vec128i load_i32(const int32_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }

inline void store_i8(uint8_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }
inline void store_i16(int16_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }
inline void store_i32(int32_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }

inline vec128i load_u8(const uint8_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }
inline vec128i load_u16(const uint16_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }
inline vec128i load_u32(const uint32_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }

inline void store_u8(uint8_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }
inline void store_u16(uint16_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }
inline void store_u32(uint32_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }

// --- Arithmetic ---
inline vec128f add_f32(vec128f a, vec128f b) { return simde_mm_add_ps(a, b); }
inline vec128f mul_f32(vec128f a, vec128f b) { return simde_mm_mul_ps(a, b); }
inline vec128i add_i32(vec128i a, vec128i b) { return simde_mm_add_epi32(a, b); }
inline vec128i add_saturate_i8(vec128i a, vec128i b) { return simde_mm_adds_epi8(a, b); }
inline vec128i add_saturate_i16(vec128i a, vec128i b) { return simde_mm_adds_epi16(a, b); }

// Slow but portable fallback
inline vec128i shift_right_arithmetic_i32(vec128i a, vec128i b) {
    alignas(16) int32_t va[4], vb[4];
    simde_mm_store_si128((simde__m128i*)va, a);
    simde_mm_store_si128((simde__m128i*)vb, b);
    for (int i = 0; i < 4; ++i)
        va[i] = va[i] >> (vb[i] & 0x1F);
    return simde_mm_load_si128((const simde__m128i*)va);
}

inline vec128i shift_right_logical_i32(vec128i a, vec128i b) {
    alignas(16) uint32_t va[4], vb[4];
    simde_mm_store_si128((simde__m128i*)va, a);
    simde_mm_store_si128((simde__m128i*)vb, b);
    for (int i = 0; i < 4; ++i)
        va[i] = va[i] >> (vb[i] & 0x1F);
    return simde_mm_load_si128((const simde__m128i*)va);
}

inline vec128i extend_i8_lo_to_i16(vec128i v) { return simde_mm_cvtepi8_epi16(v); }
inline vec128i extend_i16_lo_to_i32(vec128i v) { return simde_mm_cvtepi16_epi32(v); }
inline vec128i extend_i8_hi_to_i16(vec128i v) { return simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(v, v)); }
inline vec128i extend_i16_hi_to_i32(vec128i v) { return simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(v, v)); }

// --- Bitwise ---
inline vec128i xor_i8(vec128i a, vec128i b) { return simde_mm_xor_si128(a, b); }
inline vec128i and_u8(vec128i a, vec128i b) { return simde_mm_and_si128(a, b); }
inline vec128i andnot_u8(vec128i a, vec128i b) { return simde_mm_andnot_si128(a, b); }

// --- Rounding ---
inline vec128f round_f32(vec128f v, int mode) { return simde_mm_round_ps(v, mode); }
constexpr int round_to_neg_inf     = SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC;
constexpr int round_to_nearest_int = SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC;
constexpr int round_to_zero        = SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC;

// --- Conversions ---
inline vec128i vctsxs(vec128f a) { return simde_mm_cvtps_epi32(a); }
inline vec128i vctuxs(vec128f a) { return simde_mm_cvttps_epi32(a); }
inline vec128f cvtepi32_f32(vec128i a) { return simde_mm_cvtepi32_ps(a); }

// --- Math ---
inline double sqrt_f64(double val) { return std::sqrt(val); }
inline float sqrt_f32(float val) { return std::sqrt(val); }

// --- Utility ---
inline vec128i zero_i128() { return simde_mm_setzero_si128(); }
inline vec128f reciprocal_f32(vec128f v) { return simde_mm_div_ps(simde_mm_set1_ps(1.0f), v); }

// --- Blend and Permute (Template Versions) ---
template<int imm>
inline vec128f blend_f32(vec128f a, vec128f b) {
    static_assert(imm >= 0 && imm < 16, "blend_f32 imm must be in range [0, 15]");
    return simde_mm_blend_ps(a, b, imm);
}

template<int imm>
inline vec128f permute_f32(vec128f v) {
    static_assert(imm >= 0 && imm < 256, "permute_f32 imm must be in range [0, 255]");
    return simde_mm_shuffle_ps(v, v, imm);
}

// Optional: still keep this if you want to compute the value at call site
constexpr int shuffle(int z, int y, int x, int w) {
    return SIMDE_MM_SHUFFLE(z, y, x, w);
}

// --- Vector Mask Accessors ---
extern const uint8_t VectorMaskL[256];
extern const uint8_t VectorMaskR[256];

inline const uint8_t* get_vector_mask_l(uint32_t offset) {
    return &VectorMaskL[(offset & 0xF) * 16];
}

inline const uint8_t* get_vector_mask_r(uint32_t offset) {
    return &VectorMaskR[(offset & 0xF) * 16];
}

// --- Load/Store with Shuffle Masks ---
inline vec128i load_vector_left_masked(const uint8_t* base, uint32_t offset) {
    const simde__m128i* aligned_base = reinterpret_cast<const simde__m128i*>(base + (offset & ~0xF));
    const simde__m128i* mask = reinterpret_cast<const simde__m128i*>(&VectorMaskL[(offset & 0xF) * 16]);

    return (offset & 0xF)
        ? simde_mm_shuffle_epi8(simde_mm_load_si128(aligned_base), simde_mm_load_si128(mask))
        : simde_mm_setzero_si128();
}

inline vec128i load_vector_right_masked(const uint8_t* base, uint32_t offset) {
    const simde__m128i* aligned_base = reinterpret_cast<const simde__m128i*>(base + (offset & ~0xF));
    const simde__m128i* mask = reinterpret_cast<const simde__m128i*>(&VectorMaskR[(offset & 0xF) * 16]);

    return (offset & 0xF)
        ? simde_mm_shuffle_epi8(simde_mm_load_si128(aligned_base), simde_mm_load_si128(mask))
        : simde_mm_setzero_si128();
}

inline void store_shuffled(uint8_t* dst, const uint8_t* base, const uint8_t* mask) {
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(dst),
        simde_mm_shuffle_epi8(
            simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base)),
            simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(mask))
        )
    );
}

inline int64_t convert_f64_to_i64(double value) {
    if (std::isnan(value)) return 0;  // Handle NaN gracefully
    if (value > static_cast<double>(LLONG_MAX)) return LLONG_MAX;
    if (value < static_cast<double>(LLONG_MIN)) return LLONG_MIN;
    return static_cast<int64_t>(std::llround(value));  // Round to nearest
}

inline int64_t truncate_f64_to_i64(double value) {
    if (std::isnan(value)) return 0;
    if (value > static_cast<double>(LLONG_MAX)) return LLONG_MAX;
    if (value < static_cast<double>(LLONG_MIN)) return LLONG_MIN;
    return static_cast<int64_t>(value);  // Truncate toward zero
}

} // namespace simd

