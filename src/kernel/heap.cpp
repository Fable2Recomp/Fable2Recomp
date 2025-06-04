#include <stdafx.h>
#include "heap.h"
#include "memory.h"
#include "function.h"

constexpr size_t RESERVED_BEGIN = 0x7FEA0000;
constexpr size_t RESERVED_END = 0xA0000000;

void Heap::Init()
{
    heap = o1heapInit(g_memory.Translate(0x20000), RESERVED_BEGIN - 0x20000);
    physicalHeap = o1heapInit(g_memory.Translate(RESERVED_END), 0x100000000 - RESERVED_END);
}

void* Heap::Alloc(size_t size)
{
    spdlog::info("🔧 Heap Allocate.");
    std::lock_guard lock(mutex);

    void* ptr = o1heapAllocate(heap, std::max<size_t>(1, size));
    spdlog::info("🟩 Alloc {} bytes at {:p}", size, ptr);
    return ptr;
}

void* Heap::AllocPhysical(size_t size, size_t alignment)
{
    spdlog::info("🔧 AllocPhysical.");
    size = std::max<size_t>(1, size);
    alignment = alignment == 0 ? 0x1000 : std::max<size_t>(16, alignment);

    std::lock_guard lock(physicalMutex);

    void* ptr = o1heapAllocate(physicalHeap, size + alignment);
    spdlog::info("🟩 PhysicalAlloc {} bytes (aligned {}): base {:p}", size, alignment, ptr);
    size_t aligned = ((size_t)ptr + alignment) & ~(alignment - 1);

    *((void**)aligned - 1) = ptr;
    *((size_t*)aligned - 2) = size + O1HEAP_ALIGNMENT;

    return (void*)aligned;
}

void Heap::Free(void* ptr)
{
    spdlog::info("🔧 HeapFree");
    if (ptr >= physicalHeap)
    {
        std::lock_guard lock(physicalMutex);
        spdlog::info("🟥 Free physical {:p}", ptr);
        o1heapFree(physicalHeap, *((void**)ptr - 1));
    }
    else
    {
        std::lock_guard lock(mutex);
        spdlog::info("🟥 Free heap {:p}", ptr);
        o1heapFree(heap, ptr);
    }
}

size_t Heap::Size(void* ptr)
{
    if (ptr)
        return *((size_t*)ptr - 2) - O1HEAP_ALIGNMENT; // relies on fragment header in o1heap.c

    return 0;
}

void* dummy_fallback_ptr = g_memory.Translate(0xDEADC0DE); // Reserved fake address

uint32_t RtlAllocateHeap(uint32_t heapHandle, uint32_t flags, uint32_t size)
{
    spdlog::info("🔧 RtlAllocateHeap(heap=0x{:08X}, flags=0x{:08X}, size={})", heapHandle, flags, size);

    if (size == 0 || size > 512 * 1024 * 1024) {
        spdlog::warn("❌ RtlAllocateHeap: invalid size = 0x{:08X}", size);
        return g_memory.MapVirtual(dummy_fallback_ptr); // Return non-null to avoid crash
    }

    void* ptr = g_userHeap.Alloc(size);
    if (!ptr) {
        spdlog::error("❌ RtlAllocateHeap: allocation failed (size = 0x{:X})", size);
        return g_memory.MapVirtual(dummy_fallback_ptr);
    }

    if ((flags & 0x8) != 0) {
        spdlog::debug("🧼 Zeroing allocated memory...");
        std::memset(ptr, 0, size);
    }

    const uint32_t guest_addr = g_memory.MapVirtual(ptr);
    spdlog::info("🟩 Alloc {} bytes → guest address 0x{:08X}", size, guest_addr);
    return guest_addr;
}

uint32_t RtlReAllocateHeap(uint32_t heapHandle, uint32_t flags, uint32_t memoryPointer, uint32_t size)
{
    spdlog::info("🔧 RtlReAllocateHeap(heap=0x{:08X}, flags=0x{:08X}, ptr=0x{:08X}, size={})",
                 heapHandle, flags, memoryPointer, size);

    if (size == 0 || size > 128 * 1024 * 1024) {
        spdlog::warn("❌ RtlReAllocateHeap: invalid size = 0x{:08X}", size);
        return 0;
    }

    void* newPtr = g_userHeap.Alloc(size);
    if (!newPtr) {
        spdlog::error("❌ RtlReAllocateHeap: allocation failed (size = 0x{:X})", size);
        return 0;
    }

    if ((flags & 0x8) != 0)
        memset(newPtr, 0, size);

    if (memoryPointer != 0) {
        void* oldPtr = g_memory.Translate(memoryPointer);
        if (!oldPtr) {
            spdlog::error("❌ RtlReAllocateHeap: failed to translate old pointer 0x{:08X}", memoryPointer);
            g_userHeap.Free(newPtr);
            return 0;
        }

        const size_t oldSize = g_userHeap.Size(oldPtr);
        spdlog::info("♻️ Reallocating from 0x{:08X} (old size = {})", memoryPointer, oldSize);
        memcpy(newPtr, oldPtr, std::min<size_t>(size, oldSize));
        g_userHeap.Free(oldPtr);
    }

    const uint32_t guestAddress = g_memory.MapVirtual(newPtr);
    spdlog::info("🆕 RtlReAllocateHeap → 0x{:08X}", guestAddress);
    return guestAddress;
}

uint32_t RtlFreeHeap(uint32_t heapHandle, uint32_t flags, uint32_t memoryPointer)
{
    spdlog::info("🔧 RtlFreeHeap.");
    if (memoryPointer != NULL)
        g_userHeap.Free(g_memory.Translate(memoryPointer));

    return true;
}

uint32_t RtlSizeHeap(uint32_t heapHandle, uint32_t flags, uint32_t memoryPointer)
{
    spdlog::info("🔧 RtlSizeHeap.");
    if (memoryPointer != NULL)
        return (uint32_t)g_userHeap.Size(g_memory.Translate(memoryPointer));

    return 0;
}

uint32_t XAllocMem(uint32_t size, uint32_t flags)
{
    spdlog::info("🔧 XAllocMem(size={}, flags=0x{:08X})", size, flags);

    if (size == 0 || size > 128 * 1024 * 1024) {
        spdlog::warn("❌ XAllocMem: invalid size = {}", size);
        return 0;
    }

    void* ptr = (flags & 0x80000000) != 0 ?
        g_userHeap.AllocPhysical(size, (1ull << ((flags >> 24) & 0xF))) :
        g_userHeap.Alloc(size);

    if (!ptr) {
        spdlog::error("❌ XAllocMem: allocation failed (size = {})", size);
        return 0;
    }

    if ((flags & 0x40000000) != 0)
        memset(ptr, 0, size);

    return g_memory.MapVirtual(ptr);
}

void XFreeMem(uint32_t baseAddress, uint32_t flags)
{
    spdlog::info("🔧 XFreeMem.");
    if (baseAddress != NULL)
        g_userHeap.Free(g_memory.Translate(baseAddress));
}

GUEST_FUNCTION_STUB(sub_82CBFC80); // HeapCreate
GUEST_FUNCTION_STUB(sub_82239750); // HeapDestroy

GUEST_FUNCTION_HOOK(sub_82238790, RtlAllocateHeap);
GUEST_FUNCTION_HOOK(sub_82CBEA48, RtlFreeHeap);
GUEST_FUNCTION_HOOK(sub_82BD88F0, RtlReAllocateHeap);
GUEST_FUNCTION_HOOK(sub_831CC840, RtlSizeHeap);

GUEST_FUNCTION_HOOK(sub_831CCA60, XAllocMem);
GUEST_FUNCTION_HOOK(sub_831CC9C8, XFreeMem);
