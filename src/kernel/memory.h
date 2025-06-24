#pragma once

#include <cassert>
#include <kernel/heap.h>
#include <spdlog/spdlog.h>
#include <fmt/core.h>
#include <cstring>
#include <utility>

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

    inline uint32_t AllocateTemp(size_t size) {
        void* guestMem = AllocKernelObject(size);
        return MapVirtual(guestMem);
    }

    inline uint32_t HostToGuest(const void* ptr) const {
        auto baseAddr = reinterpret_cast<uintptr_t>(this->base);
        auto hostAddr = reinterpret_cast<uintptr_t>(ptr);

        if (hostAddr < baseAddr || hostAddr >= baseAddr + PPC_MEMORY_SIZE)
            return 0;

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
        if (!IsValidVirtualAddressRange(addr, 4)) {
            spdlog::critical("💥 Invalid ReadU32 at 0x{:08X}!", addr);
            __builtin_trap();
        }

        return *reinterpret_cast<const be<uint32_t>*>(Translate(addr)); // ✅ FIXED
    }

    inline void WriteU32(uint32_t addr, uint32_t value) {

        if (addr == 0x834C16A0) {
            void* return_addr = __builtin_return_address(0);
            spdlog::warn("🛑 WRITE to GlobalCallbackPtr (0x834C16A0) = 0x{:08X} @ return=0x{:p}",
                        value, return_addr);
        }

        if (!IsValidVirtualAddress(addr)) {
            spdlog::error("❌ WriteU32: Invalid guest address 0x{:08X} (value = 0x{:08X})", addr, value);
            throw std::runtime_error("Invalid guest write");
        }

        // 🚨 Debug safeguard: log unexpected host pointers
        if ((value & 0xF0000000) == 0xE0000000) {
            spdlog::critical("🚨 WriteU32: Host pointer (0x{:08X}) written to guest memory @ 0x{:08X}!", value, addr);
            __builtin_trap(); // or raise(SIGTRAP)
        }

        *reinterpret_cast<be<uint32_t>*>(Translate(addr)) = value;
    }

    inline void WriteU8(uint32_t addr, uint8_t value) {
        auto* ptr = Translate(addr);
        if (ptr) *reinterpret_cast<uint8_t*>(ptr) = value;
    }

    inline uint8_t ReadU8(uint32_t addr) const {
        auto* ptr = Translate(addr);
        return ptr ? *reinterpret_cast<const uint8_t*>(ptr) : 0;
    }

    inline uint32_t AllocateGuestString(const char* str) {
        const size_t len = std::strlen(str) + 1;
        void* guestPtr = AllocKernelObject(len);
        std::memcpy(guestPtr, str, len);
        return MapVirtual(guestPtr);
    }

    // Returns a guest pointer safely backed by the user heap
    inline uint32_t AllocGuestU32(size_t size) {
        void* host_ptr = g_userHeap.Alloc(size);
        if (!host_ptr)
            return 0;
        return MapVirtual(host_ptr);
    }

    // Returns both the host and guest address for convenience
    inline std::pair<void*, uint32_t> AllocGuestPair(size_t size) {
        void* host_ptr = g_userHeap.Alloc(size);
        if (!host_ptr)
            return {nullptr, 0};
        return {host_ptr, MapVirtual(host_ptr)};
    }

    // Returns a typed object with both host and guest addresses
    template<typename T>
    inline std::pair<T*, uint32_t> AllocGuestObject() {
        T* obj = static_cast<T*>(g_userHeap.Alloc(sizeof(T)));
        if (!obj)
            return {nullptr, 0};
        return {obj, MapVirtual(obj)};
    }

    inline bool CompareAndSwapU32(uint32_t addr, uint32_t expected, uint32_t desired) {
        std::atomic<uint32_t>* atomic_ptr = reinterpret_cast<std::atomic<uint32_t>*>(Translate(addr));
        return atomic_ptr->compare_exchange_strong(expected, desired);
    }

    inline bool IsValidVirtualAddressRange(uint32_t guest, size_t size) const noexcept {
        if (guest + size < guest) return false; // Wraparound/overflow guard
        return guest < PPC_MEMORY_SIZE && (guest + size) <= PPC_MEMORY_SIZE;
    }

    uint16_t ReadU16(uint32_t addr) const {
        if (!IsValidVirtualAddress(addr)) return 0;
        return *reinterpret_cast<const uint16_t*>(Translate(addr));
    }

    void WriteU16(uint32_t addr, uint16_t value) {
        if (!IsValidVirtualAddress(addr)) return;
     *reinterpret_cast<uint16_t*>(Translate(addr)) = value;
    }

};

extern "C" void* MmGetHostAddress(uint32_t ptr);
extern Memory g_memory;

