#include <stdafx.h>
#include "critical_section_patch.h"
#include "memory.h"
#include "heap.h"
#include <unordered_map>
#include <mutex>
#include <cstring>
#include <spdlog/spdlog.h>
#include <ppc/ppc_context.h>
#include "xam.h"
#include "xdm.h"

static std::unordered_map<uint32_t, uint32_t> csRedirectMap;
static std::mutex csMapMutex;

uint32_t AllocateRedirectedCriticalSection(uint32_t originalGuestAddr) {
    std::scoped_lock lock(csMapMutex);

    // Already redirected
    if (auto it = csRedirectMap.find(originalGuestAddr); it != csRedirectMap.end())
        return it->second;

    void* mem = g_userHeap.Alloc(sizeof(XRTL_CRITICAL_SECTION));
    if (!mem)
        return 0;

    std::memset(mem, 0, sizeof(XRTL_CRITICAL_SECTION));
    const uint32_t newGuestAddr = g_memory.MapVirtual(mem);
    csRedirectMap[originalGuestAddr] = newGuestAddr;

    spdlog::warn("🔁 Redirected broken CS: original=0x{:08X}, new=0x{:08X}", originalGuestAddr, newGuestAddr);
    return newGuestAddr;
}

uint32_t TryGetRedirectedCS(uint32_t guestAddr) {
    std::scoped_lock lock(csMapMutex);
    if (auto it = csRedirectMap.find(guestAddr); it != csRedirectMap.end())
        return it->second;
    return 0;
}

