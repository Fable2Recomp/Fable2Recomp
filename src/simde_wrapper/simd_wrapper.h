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
#include <cmath>
#include <cstdint>

namespace simd {

using vec128f = simde__m128;
using vec128i = simde__m128i;

// --- Load/Store (aligned) ---
inline vec128f load_f32(const float* ptr) { return simde_mm_load_ps(ptr); }
inline void store_f32(float* ptr, vec128f v) { simde_mm_store_ps(ptr, v); }

inline vec128i load_i8(const int8_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }
inline vec128i load_i16(const int16_t* ptr) {
    return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr));
}
inline vec128i load_i16(const uint16_t* ptr) {
    return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr));
}
inline vec128i load_i32(const int32_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }
inline vec128i load_i32(const uint32_t* ptr) { return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr)); }

inline void store_i8(uint8_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }
inline void store_i16(uint16_t* ptr, vec128i v) {
    simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v);
}
inline void store_i32(int32_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }
inline void store_i32(uint32_t* ptr, vec128i v) { simde_mm_store_si128(reinterpret_cast<vec128i*>(ptr), v); }

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

inline vec128i load_i8(const uint8_t* ptr) { return load_i8(reinterpret_cast<const int8_t*>(ptr)); }
inline vec128i extend_i8_lo_to_i16(vec128i v) { return simde_mm_cvtepi8_epi16(v); }
inline vec128i extend_i16_lo_to_i32(vec128i v) { return simde_mm_cvtepi16_epi32(v); }
inline vec128i extend_i8_hi_to_i16(vec128i v) { return simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(v, v)); }
inline vec128i extend_i16_hi_to_i32(vec128i v) { return simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(v, v)); }
inline vec128f sub_f32(vec128f a, vec128f b) { return simde_mm_sub_ps(a, b); }

inline vec128f dp_f32(vec128f a, vec128f b, int imm8) {
    return simde_mm_dp_ps(a, b, imm8);
}

inline vec128i permute_bytes(vec128i a, vec128i b, vec128i control) {
    // Based on common permute idioms for 3-register shuffle
    simde__m128i d = simde_mm_set1_epi8(0x0F);
    simde__m128i e = simde_mm_sub_epi8(d, simde_mm_and_si128(control, d));
    return simde_mm_blendv_epi8(
        simde_mm_shuffle_epi8(a, e),
        simde_mm_shuffle_epi8(b, e),
        simde_mm_slli_epi32(control, 3)
    );
}

inline vec128f cmpge_f32(vec128f a, vec128f b) {
    return simde_mm_cmpge_ps(a, b);
}

inline vec128f max_f32(vec128f a, vec128f b) {
    return simde_mm_max_ps(a, b);
}

inline vec128f min_f32(vec128f a, vec128f b) {
    return simde_mm_min_ps(a, b);
}

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

// --- Blend and Permute ---
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

constexpr int shuffle(int z, int y, int x, int w) {
    return SIMDE_MM_SHUFFLE(z, y, x, w);
}

extern const uint8_t VectorMaskL[256];
extern const uint8_t VectorMaskR[256];

inline const uint8_t* get_vector_mask_l(uint32_t offset) {
    return &VectorMaskL[(offset & 0xF) * 16];
}

inline const uint8_t* get_vector_mask_r(uint32_t offset) {
    return &VectorMaskR[(offset & 0xF) * 16];
}

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

inline vec128i shuffle_masked_load(const uint8_t* base, uint32_t offset) {
    return simde_mm_shuffle_epi8(
        simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + (offset & ~0xF))),
        simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[(offset & 0xF) * 16]))
    );
}

inline void store_shuffled(uint8_t* dst, vec128i v, const uint8_t* mask) {
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(dst),
        simde_mm_shuffle_epi8(v, simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(mask))));
}

inline void store_shuffled(uint8_t* dst, const uint8_t* base, const uint8_t* mask) {
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(dst),
        simde_mm_shuffle_epi8(
            simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base)),
            simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(mask))));
}

inline vec128i load_and_shuffle(const uint8_t* base, const uint8_t* mask) {
    return simde_mm_shuffle_epi8(
        simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base)),
        simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(mask)));
}

inline vec128f load_f32_aligned(const float* ptr) {
    return simde_mm_load_ps(ptr);
}

inline void store_f32_aligned(float* ptr, vec128f value) {
    simde_mm_store_ps(ptr, value);
}

inline vec128i broadcast_lane_i32(vec128i v, int lane) {
    switch (lane & 3) {
        case 0: return simde_mm_shuffle_epi32(v, SIMDE_MM_SHUFFLE(0, 0, 0, 0));
        case 1: return simde_mm_shuffle_epi32(v, SIMDE_MM_SHUFFLE(1, 1, 1, 1));
        case 2: return simde_mm_shuffle_epi32(v, SIMDE_MM_SHUFFLE(2, 2, 2, 2));
        case 3: return simde_mm_shuffle_epi32(v, SIMDE_MM_SHUFFLE(3, 3, 3, 3));
        default: return v;
    }
}

inline vec128i permute_i32(vec128i value, int imm8) {
    switch (imm8) {
        case 0x00: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(0, 0, 0, 0));
        case 0x55: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(1, 1, 1, 1));
        case 0xAA: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(2, 2, 2, 2));
        case 0xFF: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(3, 3, 3, 3));
        case 0x1B: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(0, 1, 2, 3));
        default: return value;
    }
}

inline vec128i permute_i32_dispatch(vec128i value, uint8_t imm8) {
    switch (imm8) {
        case 0x00: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(0, 0, 0, 0));
        case 0x55: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(1, 1, 1, 1));
        case 0xAA: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(2, 2, 2, 2));
        case 0xFF: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(3, 3, 3, 3));
        case 0x1B: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(0, 1, 2, 3));
        case 0xE7: return simde_mm_shuffle_epi32(value, SIMDE_MM_SHUFFLE(3, 2, 1, 0));
        default:
            // Slow fallback: scalar permute at runtime (just one example of many)
            alignas(16) uint32_t src[4], dst[4];
            simde_mm_store_si128(reinterpret_cast<simde__m128i*>(src), value);
            for (int i = 0; i < 4; ++i)
                dst[i] = src[(imm8 >> (i * 2)) & 3];
            return simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(dst));
    }
}

inline vec128i set1_i32(int32_t value) {
    return simde_mm_set1_epi32(value);
}

inline int64_t convert_f64_to_i64(double value) {
    if (std::isnan(value)) return 0;
    if (value > static_cast<double>(LLONG_MAX)) return LLONG_MAX;
    if (value < static_cast<double>(LLONG_MIN)) return LLONG_MIN;
    return static_cast<int64_t>(std::llround(value));
}

inline int64_t truncate_f64_to_i64(double value) {
    if (std::isnan(value)) return 0;
    if (value > static_cast<double>(LLONG_MAX)) return LLONG_MAX;
    if (value < static_cast<double>(LLONG_MIN)) return LLONG_MIN;
    return static_cast<int64_t>(value);
}

inline vec128i unpacklo_i32(vec128i a, vec128i b) {
    return simde_mm_unpacklo_epi32(a, b);
}

inline vec128i unpackhi_i32(vec128i a, vec128i b) {
    return simde_mm_unpackhi_epi32(a, b);
}

inline vec128f xor_f32(vec128f a, vec128f b) {
    return simde_mm_xor_ps(a, b);
}

inline vec128f bitcast_f32(vec128i a) {
    return simde_mm_castsi128_ps(a);
}

inline vec128i select_i8(vec128i a, vec128i b, vec128i mask) {
    return simde_mm_or_si128(simde_mm_and_si128(mask, b), simde_mm_andnot_si128(mask, a));
}

inline vec128i splat_halfword(vec128i vec, uint8_t index) {
    // Extract element, broadcast across vector
    int16_t val = reinterpret_cast<const int16_t*>(&vec)[index & 7];
    return simde_mm_set1_epi16(val);
}

inline vec128i as_vec128i(const uint16_t* ptr) {
    return simde_mm_load_si128(reinterpret_cast<const vec128i*>(ptr));
}

inline uint16_t extract_u16(vec128i vec, int index) {
    alignas(16) uint16_t u16s[8];
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(u16s), vec);
    return u16s[index & 7];
}

inline vec128i shift_left_variable_i32(vec128i a, vec128i b) {
    alignas(16) uint32_t va[4], vb[4];
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(va), a);
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(vb), b);
    for (int i = 0; i < 4; ++i)
        va[i] = va[i] << (vb[i] & 0x1F);
    return simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(va));
}

inline vec128i shift_left_insert_bytes(vec128i a, vec128i b, int imm) {
    // Align b and a with runtime shift (imm must be 0–16)
    // This is equivalent to shifting b left and inserting a
    imm &= 0xF;
    return simde_mm_alignr_epi8(b, a, imm);
}

inline vec128i load_unaligned_vector_right(const uint8_t* base, uint32_t offset) {
    const uint8_t* aligned = base + (offset & ~0xF);
    uint32_t shift = offset & 0xF;

    simde__m128i a = simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(aligned));
    simde__m128i b = simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(aligned + 16));
    return simde_mm_alignr_epi8(b, a, shift);
}

inline vec128i or_i8(vec128i a, vec128i b) {
    return simde_mm_or_si128(a, b);
}

inline void store_shift_table_entry(uint8_t* dst, const uint8_t* table, uint32_t index) {
    // Clamp to avoid out-of-bounds (assume table has 256 entries of 16 bytes)
    index &= 0xFF;
    const uint8_t* src = table + (index * 16);
    simde__m128i value = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(src));
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(dst), value);
}

inline vec128i cmpeq_i32(vec128i a, vec128i b) {
    return simde_mm_cmpeq_epi32(a, b);
}

inline vec128i cmpgt_i32(vec128i a, vec128i b) {
    return simde_mm_cmpgt_epi32(a, b);
}

inline vec128i cmplt_i32(vec128i a, vec128i b) {
    return simde_mm_cmplt_epi32(a, b);  // simde defines this for symmetry
}

inline vec128f cmpgt_f32(vec128f a, vec128f b) {
    return simde_mm_cmpgt_ps(a, b);
}

inline vec128f cmplt_f32(vec128f a, vec128f b) {
    return simde_mm_cmplt_ps(a, b);
}

inline vec128f cmpeq_f32(vec128f a, vec128f b) {
    return simde_mm_cmpeq_ps(a, b);
}

inline vec128f cmple_f32(vec128f a, vec128f b) {
    return simde_mm_cmple_ps(a, b);
}

inline uint8_t extract_u8(vec128i v, int lane) {
    alignas(16) uint8_t temp[16];
    simde_mm_store_si128(reinterpret_cast<vec128i*>(temp), v);
    return temp[lane & 15];
}

inline uint64_t extract_u64(vec128i v, int lane) {
    alignas(16) uint64_t temp[2];
    simde_mm_store_si128(reinterpret_cast<vec128i*>(temp), v);
    return temp[lane & 1];
}

inline vec128f exp2_f32(vec128f x) {
    // Use simde or platform intrinsics to compute 2^x elementwise
    // Example with simde and std::exp2f:
    alignas(16) float input[4];
    simde_mm_store_ps(input, x);
    for (int i = 0; i < 4; ++i)
        input[i] = std::exp2f(input[i]);
    return simde_mm_load_ps(input);
}

inline vec128f log2_f32(vec128f v) {
    alignas(16) float temp[4];
    simde_mm_store_ps(temp, v);
    for (int i = 0; i < 4; i++) {
        temp[i] = std::log2(temp[i]);
    }
    return simde_mm_load_ps(temp);
}

// Vector sqrt (for vec128f SIMD vectors)
inline vec128f sqrt_f32(vec128f v) {
    return simde_mm_sqrt_ps(v);
}

// Scalar reciprocal sqrt
inline float rsqrt_f32(float val) {
    return 1.0f / sqrt_f32(val);
}

// Vector reciprocal sqrt
inline vec128f rsqrt_f32(vec128f v) {
    return simde_mm_div_ps(simde_mm_set1_ps(1.0f), sqrt_f32(v));
}

inline vec128i and_u32(vec128i a, vec128i b) {
    return simde_mm_and_si128(a, b);
}

inline vec128i set1_i8(int8_t value) {
    return simde_mm_set1_epi8(value);
}

inline vec128i set1_i16(int16_t value) {
    return simde_mm_set1_epi16(value);
}

inline vec128i splat_byte(vec128i v, uint8_t index) {
    alignas(16) uint8_t bytes[16];
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(bytes), v);
    return simde_mm_set1_epi8(bytes[index & 15]);
}

inline vec128i add_u8(vec128i a, vec128i b) {
    return simde_mm_add_epi8(a, b);  // Note: no unsigned add intrinsic, treat as int8_t addition is fine for addition
}

inline vec128i unpackhi_i8(vec128i a, vec128i b) {
    return simde_mm_unpackhi_epi8(a, b);
}

inline vec128f cvtepu32_f32(vec128i v) {
    alignas(16) uint32_t u32s[4];
    alignas(16) float floats[4];

    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(u32s), v);
    for (int i = 0; i < 4; ++i) {
        floats[i] = static_cast<float>(u32s[i]);
    }
    return simde_mm_load_ps(floats);
}

inline simd::vec128i sub_saturate_i32(simd::vec128i a, simd::vec128i b) {
    alignas(16) int32_t va[4], vb[4], vr[4];
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(va), a);
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(vb), b);
    for (int i = 0; i < 4; i++) {
        int64_t res = int64_t(va[i]) - int64_t(vb[i]);
        if (res > INT32_MAX) vr[i] = INT32_MAX;
        else if (res < INT32_MIN) vr[i] = INT32_MIN;
        else vr[i] = int32_t(res);
    }
    return simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(vr));
}

inline simd::vec128i add_saturate_i32(simd::vec128i a, simd::vec128i b) {
    alignas(16) int32_t va[4], vb[4], vr[4];
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(va), a);
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(vb), b);
    for (int i = 0; i < 4; i++) {
        int64_t res = int64_t(va[i]) + int64_t(vb[i]);
        if (res > INT32_MAX) vr[i] = INT32_MAX;
        else if (res < INT32_MIN) vr[i] = INT32_MIN;
        else vr[i] = int32_t(res);
    }
    return simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(vr));
}

inline vec128i cmpeq_i8(vec128i a, vec128i b) {
    // Extend lower 8 bytes from 8-bit to 16-bit lanes
    vec128i a_lo = simde_mm_cvtepi8_epi16(a);
    vec128i b_lo = simde_mm_cvtepi8_epi16(b);
    vec128i cmp_lo = simde_mm_cmpeq_epi16(a_lo, b_lo);

    // Extend upper 8 bytes from 8-bit to 16-bit lanes
    vec128i a_hi = simde_mm_cvtepi8_epi16(simde_mm_srli_si128(a, 8));
    vec128i b_hi = simde_mm_cvtepi8_epi16(simde_mm_srli_si128(b, 8));
    vec128i cmp_hi = simde_mm_cmpeq_epi16(a_hi, b_hi);

    // Pack results back into 8-bit lanes
    return simde_mm_packs_epi16(cmp_lo, cmp_hi);
}

inline vec128i add_u32(vec128i a, vec128i b) {
    // _mm_add_epi32 adds packed 32-bit integers (signed/unsigned doesn't matter)
    return simde_mm_add_epi32(a, b);
}

inline simd::vec128i cmpgt_u8(simd::vec128i a, simd::vec128i b) {
    // Convert 8-bit unsigned to 16-bit unsigned by zero-extending lower and upper halves
    simd::vec128i zero = simde_mm_setzero_si128();

    // Unpack lower 8 bytes to 16-bit lanes
    simd::vec128i a_lo = simde_mm_unpacklo_epi8(a, zero);
    simd::vec128i b_lo = simde_mm_unpacklo_epi8(b, zero);

    // Unpack upper 8 bytes to 16-bit lanes
    simd::vec128i a_hi = simde_mm_unpackhi_epi8(a, zero);
    simd::vec128i b_hi = simde_mm_unpackhi_epi8(b, zero);

    // Compare 16-bit lanes (signed compare is fine since we zero-extended, values are non-negative)
    simd::vec128i cmp_lo = simde_mm_cmpgt_epi16(a_lo, b_lo);
    simd::vec128i cmp_hi = simde_mm_cmpgt_epi16(a_hi, b_hi);

    // Pack results back to 8-bit lanes
    return simde_mm_packus_epi16(cmp_lo, cmp_hi);
}

inline simd::vec128i vsr(simd::vec128i a, simd::vec128i b) {
    // Vector shift right for 8-bit unsigned integers by vector amounts b (masked to 0-7)
    alignas(16) uint8_t va[16], vb[16], vr[16];
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(va), a);
    simde_mm_store_si128(reinterpret_cast<simde__m128i*>(vb), b);
    for (int i = 0; i < 16; ++i) {
        vr[i] = va[i] >> (vb[i] & 0x7);
    }
    return simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(vr));
}

inline void store_i16(int16_t* ptr, vec128i v) {
    store_i16(reinterpret_cast<uint16_t*>(ptr), v);
}

// Average of packed signed 16-bit integers (i16)
inline vec128i avg_i16(vec128i a, vec128i b) {
    // Use unsigned average intrinsic and adjust for signed values if necessary
    return simde_mm_avg_epu16(a, b); // avg_epu16 is unsigned average but commonly used
}

// Average of packed signed 8-bit integers (i8)
inline vec128i avg_i8(vec128i a, vec128i b) {
    return simde_mm_avg_epu8(a, b); // similarly, avg_epu8 for unsigned 8-bit average
}

// Unpack high 16-bit integers from two vectors
inline vec128i unpackhi_i16(vec128i a, vec128i b) {
    return simde_mm_unpackhi_epi16(a, b);
}

// Unpack low 16-bit integers from two vectors
inline vec128i unpacklo_i16(vec128i a, vec128i b) {
    return simde_mm_unpacklo_epi16(a, b);
}

// Unpack low 8-bit integers from two vectors (you may already have this, otherwise:)
inline vec128i unpacklo_i8(vec128i a, vec128i b) {
    return simde_mm_unpacklo_epi8(a, b);
}

inline void store_i8(int8_t* ptr, vec128i v) {
    store_i8(reinterpret_cast<uint8_t*>(ptr), v);
}

inline vec128i pack_i32_to_i8(vec128i a, vec128i b) {
    vec128i packed_i16 = simde_mm_packs_epi32(a, b);
    return simde_mm_packs_epi16(packed_i16, packed_i16);
}

inline vec128f set1_f32(float value) {
    return simde_mm_set1_ps(value);
}

inline vec128i add_saturate_u32(vec128i a, vec128i b) {
    return simde_mm_add_epi32(a, b);
}

inline vec128i max_i32(vec128i a, vec128i b) {
    return simde_mm_max_epi32(a, b);
}

inline vec128i cmpgt_u16(vec128i a, vec128i b) {
    const vec128i offset = set1_i16(0x8000);
    vec128i a_signed = simde_mm_sub_epi16(a, offset);
    vec128i b_signed = simde_mm_sub_epi16(b, offset);
    return simde_mm_cmpgt_epi16(a_signed, b_signed);
}

inline vec128i add_u16(vec128i a, vec128i b) {
    return simde_mm_add_epi16(a, b);
}

inline vec128i sub_u16(vec128i a, vec128i b) {
    return simde_mm_sub_epi16(a, b);
}

inline double rsqrt_f64(double val) {
    return 1.0 / sqrt_f64(val);
}

} // namespace simd

