/**
 * @file        src/heap.cpp
 *
 * @brief       Native heap implementation over guest virtual memory using dlmalloc.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */

#include "heap.h"

#include <cstring>

#include <dlmalloc.h>

#include "generated/Fable2_init.h"

#include <rex/ppc.h>
#include <rex/system/kernel_state.h>
#include <rex/system/xmemory.h>
#include <rex/logging.h>

namespace {

constexpr uint32_t kHeapSize = 256 * 1024 * 1024;  // 256 MB

mspace g_mspace = nullptr;
uint8_t* g_membase = nullptr;
uint32_t g_arena_base = 0;
uint32_t g_arena_end  = 0;

inline void* GuestToHost(uint32_t guest_addr) {
    return g_membase + guest_addr;
}

inline uint32_t HostToGuest(void* host_ptr) {
    return static_cast<uint32_t>(static_cast<uint8_t*>(host_ptr) - g_membase);
}

inline bool InArena(uint32_t guest_addr) {
    return guest_addr >= g_arena_base && guest_addr < g_arena_end;
}

// lhHeapRealloc replacement — unified alloc/realloc/free (Lua allocator protocol)
//   r3 = heap (ignored), r4 = old_ptr, r5 = old_size, r6 = new_size
ppc_u32_result_t lhHeapRealloc_entry(ppc_u32_t heap, ppc_u32_t old_ptr, ppc_u32_t old_size, ppc_u32_t new_size) {
    uint32_t optr = static_cast<uint32_t>(old_ptr);
    uint32_t osize = static_cast<uint32_t>(old_size);
    uint32_t nsize = static_cast<uint32_t>(new_size);

    // Free
    if (nsize == 0) {
        if (optr && InArena(optr)) {
            mspace_free(g_mspace, GuestToHost(optr));
        }
        return 0;
    }

    // Alloc (no old pointer)
    if (!optr) {
        void* ptr = mspace_malloc(g_mspace, nsize);
        if (!ptr) {
            REXLOG_WARN("lhHeapRealloc: mspace_malloc({}) failed", nsize);
            return 0;
        }
        return HostToGuest(ptr);
    }

    // Realloc — old pointer outside our arena (pre-hook allocation)
    if (!InArena(optr)) {
        REXLOG_WARN("lhHeapRealloc: old ptr 0x{:08X} OOB, treating as new alloc({})", optr, nsize);
        void* ptr = mspace_malloc(g_mspace, nsize);
        if (!ptr) {
            REXLOG_WARN("lhHeapRealloc: mspace_malloc({}) failed", nsize);
            return 0;
        }
        return HostToGuest(ptr);
    }

    // Realloc — old pointer in our arena
    void* old_host = GuestToHost(optr);
    void* new_host = mspace_realloc(g_mspace, old_host, nsize);
    if (!new_host) {
        REXLOG_WARN("lhHeapRealloc: mspace_realloc({}) failed", nsize);
        return 0;
    }
    return HostToGuest(new_host);
}

// lh_PhysicalAllocCached replacement — redirects physical memory allocations
// to our native heap with proper alignment. 
ppc_u32_result_t PhysicalAllocCached_entry(ppc_u32_t size, ppc_u32_t alignment) {
    uint32_t sz = static_cast<uint32_t>(size);
    uint32_t align = static_cast<uint32_t>(alignment);
    if (align < 16) align = 16;

    void* ptr = mspace_memalign(g_mspace, align, sz);
    if (!ptr) {
        REXLOG_WARN("PhysicalAllocCached: mspace_memalign({}, {}) failed", align, sz);
        return 0;
    }
    std::memset(ptr, 0, sz);
    return HostToGuest(ptr);
}

}  // namespace

PPC_HOOK(rex_lhHeapRealloc, lhHeapRealloc_entry)
PPC_HOOK(sub_82B53420, PhysicalAllocCached_entry)

namespace lh {

bool InitNativeHeap() {
    auto* mem = rex::system::kernel_memory();
    if (!mem) {
        REXLOG_ERROR("InitNativeHeap: kernel_memory() is null");
        return false;
    }

    g_membase = mem->virtual_membase();

    uint32_t guest_base = mem->SystemHeapAlloc(kHeapSize);
    if (!guest_base) {
        REXLOG_ERROR("InitNativeHeap: SystemHeapAlloc({}) failed", kHeapSize);
        return false;
    }

    uint8_t* host_base = mem->TranslateVirtual<uint8_t*>(guest_base);
    g_arena_base = guest_base;
    g_arena_end  = guest_base + kHeapSize;
    REXLOG_INFO("InitNativeHeap: guest=0x{:08X}-0x{:08X} host={} size={}MB",
                g_arena_base, g_arena_end, (void*)host_base, kHeapSize / (1024 * 1024));

    g_mspace = create_mspace_with_base(host_base, kHeapSize, 1);
    if (!g_mspace) {
        REXLOG_ERROR("InitNativeHeap: create_mspace_with_base failed");
        mem->SystemHeapFree(guest_base);
        return false;
    }

    mspace_set_footprint_limit(g_mspace, kHeapSize);

    REXLOG_INFO("InitNativeHeap: dlmalloc mspace ready");
    return true;
}

}  // namespace lh
