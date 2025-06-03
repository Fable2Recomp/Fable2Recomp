#pragma once

#include <cassert>
#include <kernel/heap.h>
#include <spdlog/spdlog.h>
#include <fmt/core.h>

#ifndef _WIN32
#define MEM_COMMIT  0x00001000  
#define MEM_RESERVE 0x00002000  
#endif

struct Memory
{
    uint8_t* base{};

    Memory();

    bool IsInMemoryRange(const void* host) const noexcept
    {
        return host >= base && host < (base + PPC_MEMORY_SIZE);
    }

    void* Translate(size_t offset) const noexcept
    {
        if (offset)
            assert(offset < PPC_MEMORY_SIZE);

        return base + offset;
    }

    uint32_t MapVirtual(const void* host) const noexcept
    {
        if (host)
            assert(IsInMemoryRange(host));

        return static_cast<uint32_t>(static_cast<const uint8_t*>(host) - base);
    }

    PPCFunc* FindFunction(uint32_t guest) const noexcept
    {
        return PPC_LOOKUP_FUNC(base, guest);
    }

    void InsertFunction(uint32_t guest, PPCFunc* host)
    {
        PPC_LOOKUP_FUNC(base, guest) = host;
    }

    bool IsValidVirtualAddress(uint32_t guest) const noexcept
    {
        return guest < PPC_MEMORY_SIZE;
    }

    bool IsValidVirtualPointer(void* ptr)
    {
        const auto address = reinterpret_cast<uintptr_t>(ptr);
        const auto limit   = reinterpret_cast<uintptr_t>(base) + PPC_MEMORY_SIZE;
        return address >= reinterpret_cast<uintptr_t>(base) && address < limit;
    }

    void* AllocKernelObject(size_t size) {
        static size_t alloc_ptr = 0x80000000;

        void* ptr = Translate(alloc_ptr);
        alloc_ptr += (size + 15) & ~15; // Align to 16 bytes
        return ptr;
    }

inline uint32_t HostToGuest(const void* ptr) const {
    auto baseAddr = reinterpret_cast<uintptr_t>(this->base);
    auto hostAddr = reinterpret_cast<uintptr_t>(ptr);

    if (hostAddr < baseAddr || hostAddr >= baseAddr + PPC_MEMORY_SIZE)
        return 0; // invalid guest pointer

    return static_cast<uint32_t>(hostAddr - baseAddr);
}

inline void DumpGuestMemory(uint32_t guestAddr, size_t size) const {
    const uint8_t* data = static_cast<const uint8_t*>(Translate(guestAddr));
    fmt::print("🔍 Dump @ 0x{:08X}:", guestAddr);
    for (size_t i = 0; i < size; ++i) {
        if (i % 16 == 0)
            fmt::print("\n  {:08X}: ", guestAddr + static_cast<uint32_t>(i));
        fmt::print("{:02X} ", data[i]);
    }
    fmt::print("\n");
}

inline uint32_t ReadU32(uint32_t addr) const {
    assert(addr + 4 <= PPC_MEMORY_SIZE);
    return *reinterpret_cast<const uint32_t*>(base + addr);
}

inline void WriteU32(uint32_t addr, uint32_t value) {
    assert(addr + 4 <= PPC_MEMORY_SIZE);
    *reinterpret_cast<uint32_t*>(base + addr) = value;
}

};

extern "C" void* MmGetHostAddress(uint32_t ptr);
extern Memory g_memory;
