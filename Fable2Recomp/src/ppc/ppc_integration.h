#pragma once
#include "stdafx.h"
#include "xbox.h"
#include "../patches/memory_patches.h"
#include <vector>
#include <unordered_map>

namespace xe {

class PPCIntegration {
public:
    static bool Initialize();
    static void Shutdown();
    static void Update();
    
    static bool LoadRecompiledCode(const std::vector<uint8_t>& code);
    static bool ExecuteFunction(uint32_t address);
    static bool SetRegister(uint32_t reg, uint64_t value);
    static bool GetRegister(uint32_t reg, uint64_t& value);
    
    static bool AllocateMemory(uint32_t size, uint32_t& address);
    static bool FreeMemory(uint32_t address);
    static bool WriteMemory(uint32_t address, const std::vector<uint8_t>& data);
    static bool ReadMemory(uint32_t address, std::vector<uint8_t>& data);
    
    static bool SetBreakpoint(uint32_t address);
    static bool RemoveBreakpoint(uint32_t address);
    static bool IsBreakpointHit(uint32_t address);
    
    static bool SetWatchpoint(uint32_t address, uint32_t size, bool read, bool write);
    static bool RemoveWatchpoint(uint32_t address);
    static bool IsWatchpointHit(uint32_t address, bool& is_read);
    
private:
    struct PPCContext {
        uint64_t gpr[32];  // General Purpose Registers
        uint64_t fpr[32];  // Floating Point Registers
        uint64_t cr;       // Condition Register
        uint64_t xer;      // Fixed-Point Exception Register
        uint64_t lr;       // Link Register
        uint64_t ctr;      // Count Register
        uint64_t pc;       // Program Counter
        uint64_t msr;      // Machine State Register
    };
    
    struct MemoryBlock {
        uint32_t address;
        uint32_t size;
        std::vector<uint8_t> data;
    };
    
    struct Breakpoint {
        uint32_t address;
        uint8_t original_byte;
    };
    
    struct Watchpoint {
        uint32_t address;
        uint32_t size;
        bool read;
        bool write;
    };
    
    static PPCContext s_context;
    static std::unordered_map<uint32_t, MemoryBlock> s_memory_blocks;
    static std::unordered_map<uint32_t, Breakpoint> s_breakpoints;
    static std::unordered_map<uint32_t, Watchpoint> s_watchpoints;
    
    static bool ValidateAddress(uint32_t address);
    static bool ValidateRegister(uint32_t reg);
    static void UpdateConditionRegister();
};

} // namespace xe 