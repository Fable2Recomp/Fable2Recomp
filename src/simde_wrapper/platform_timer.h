#pragma once

#include <cstdint>

#if defined(_MSC_VER) && (defined(_M_X64) || defined(_M_IX86))
    #include <intrin.h>
    inline uint64_t read_timestamp_counter() {
        return __rdtsc();
    }

#elif defined(__x86_64__) || defined(__i386__)
    #include <x86intrin.h>
    inline uint64_t read_timestamp_counter() {
        return __rdtsc();
    }

#elif defined(__aarch64__) && defined(__linux__)
    inline uint64_t read_timestamp_counter() {
        uint64_t val;
        asm volatile("mrs %0, cntvct_el0" : "=r"(val));
        return val;
    }

#elif defined(__APPLE__) && defined(__aarch64__)
    // Apple Silicon (macOS on ARM64)
    #include <mach/mach_time.h>
    inline uint64_t read_timestamp_counter() {
        return mach_absolute_time();
    }

#else
    // Portable fallback (lower precision)
    #include <chrono>
    inline uint64_t read_timestamp_counter() {
        using namespace std::chrono;
        return duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count();
    }
#endif

