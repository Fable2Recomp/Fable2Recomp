#include "stdafx.h"
#include "xbox.h"
#include "ppc_integration.h"
#include "../patches/memory_patches.h"
#include <unordered_map>
#include "os/logger.h"
#include <cstring>

namespace xe {

// Global PPC context
static PPCContext g_context = {};

// Function mapping table
static std::unordered_map<uint32_t, PPCFunc> g_function_map;

// Memory mapping table
static std::unordered_map<uint32_t, std::vector<uint8_t>> g_memory_map;

PPCContext& GetContext() {
    return g_context;
}

bool Init() {
    // Initialize PPC context
    memset(&g_context, 0, sizeof(PPCContext));
    
    // Initialize memory management
    patches::InitMemoryManagement();
    
    // Map initial memory regions
    if (!MapMemory(0x82000000, 0x1620000)) {
        return false;
    }
    
    return true;
}

void Shutdown() {
    // Clean up memory mappings
    g_memory_map.clear();
    
    // Clean up function mappings
    g_function_map.clear();
    
    // Clean up memory management
    patches::CleanupMemoryState();
}

void ExecuteFunction(uint32_t address) {
    auto it = g_function_map.find(address);
    if (it != g_function_map.end()) {
        // Get base address for memory access
        uint8_t* base = nullptr;
        auto mem_it = g_memory_map.lower_bound(address);
        if (mem_it != g_memory_map.end()) {
            base = mem_it->second.data();
        }
        
        // Execute the function
        it->second(g_context, base);
    }
}

bool MapMemory(uint32_t address, size_t size) {
    // Check if memory region is already mapped
    if (g_memory_map.find(address) != g_memory_map.end()) {
        return false;
    }
    
    // Allocate memory for the region
    std::vector<uint8_t> memory(size);
    g_memory_map[address] = std::move(memory);
    
    // Update memory state
    patches::UpdateBufferState(address, size);
    
    return true;
}

void UnmapMemory(uint32_t address) {
    auto it = g_memory_map.find(address);
    if (it != g_memory_map.end()) {
        g_memory_map.erase(it);
    }
}

bool LoadRecompiledCode(const std::vector<uint8_t>& code) {
    // Map memory for the code
    if (!MapMemory(0x82170000, code.size())) {
        return false;
    }
    
    // Copy code to mapped memory
    auto& memory = g_memory_map[0x82170000];
    std::copy(code.begin(), code.end(), memory.begin());
    
    // Update memory state
    patches::UpdateBufferState(0x82170000, code.size());
    
    return true;
}

bool PPCIntegration::Initialize() {
    // Initialize PPC context
    memset(&s_context, 0, sizeof(PPCContext));
    
    // Set initial register values
    s_context.pc = 0x80000000;  // Start at typical PPC entry point
    s_context.msr = 0x80000000; // Enable MSR[ME] (Machine Check Enable)
    
    LOG_INFO("PPC integration initialized");
    return true;
}

void PPCIntegration::Shutdown() {
    // Free all allocated memory
    s_memory_blocks.clear();
    
    // Remove all breakpoints and watchpoints
    s_breakpoints.clear();
    s_watchpoints.clear();
    
    LOG_INFO("PPC integration shut down");
}

void PPCIntegration::Update() {
    // Update PPC state
    UpdateConditionRegister();
    
    // Check for breakpoints
    auto it = s_breakpoints.find(s_context.pc);
    if (it != s_breakpoints.end()) {
        LOG_DEBUG("Breakpoint hit at 0x{:08X}", s_context.pc);
    }
    
    // Check for watchpoints
    for (const auto& [addr, wp] : s_watchpoints) {
        if (s_context.pc >= addr && s_context.pc < addr + wp.size) {
            LOG_DEBUG("Watchpoint hit at 0x{:08X}", s_context.pc);
        }
    }
}

bool PPCIntegration::LoadRecompiledCode(const std::vector<uint8_t>& code) {
    // Allocate memory for the code
    uint32_t address;
    if (!AllocateMemory(code.size(), address)) {
        LOG_ERROR("Failed to allocate memory for recompiled code");
        return false;
    }
    
    // Write the code to memory
    if (!WriteMemory(address, code)) {
        LOG_ERROR("Failed to write recompiled code to memory");
        FreeMemory(address);
        return false;
    }
    
    LOG_INFO("Loaded recompiled code at 0x{:08X}", address);
    return true;
}

bool PPCIntegration::ExecuteFunction(uint32_t address) {
    if (!ValidateAddress(address)) {
        LOG_ERROR("Invalid function address: 0x{:08X}", address);
        return false;
    }
    
    // Save current PC
    uint64_t old_pc = s_context.pc;
    
    // Set new PC
    s_context.pc = address;
    
    // Execute function
    // TODO: Implement actual function execution
    
    // Restore PC
    s_context.pc = old_pc;
    
    return true;
}

bool PPCIntegration::SetRegister(uint32_t reg, uint64_t value) {
    if (!ValidateRegister(reg)) {
        LOG_ERROR("Invalid register: {}", reg);
        return false;
    }
    
    if (reg < 32) {
        s_context.gpr[reg] = value;
    } else if (reg < 64) {
        s_context.fpr[reg - 32] = value;
    }
    
    return true;
}

bool PPCIntegration::GetRegister(uint32_t reg, uint64_t& value) {
    if (!ValidateRegister(reg)) {
        LOG_ERROR("Invalid register: {}", reg);
        return false;
    }
    
    if (reg < 32) {
        value = s_context.gpr[reg];
    } else if (reg < 64) {
        value = s_context.fpr[reg - 32];
    }
    
    return true;
}

bool PPCIntegration::AllocateMemory(uint32_t size, uint32_t& address) {
    // Find a free address range
    uint32_t next_addr = 0x80000000; // Start at typical PPC memory base
    
    for (const auto& [addr, block] : s_memory_blocks) {
        if (next_addr + size <= addr) {
            // Found a gap large enough
            address = next_addr;
            break;
        }
        next_addr = addr + block.size;
    }
    
    // Create new memory block
    MemoryBlock block;
    block.address = address;
    block.size = size;
    block.data.resize(size);
    
    s_memory_blocks[address] = std::move(block);
    
    LOG_DEBUG("Allocated {} bytes at 0x{:08X}", size, address);
    return true;
}

bool PPCIntegration::FreeMemory(uint32_t address) {
    auto it = s_memory_blocks.find(address);
    if (it == s_memory_blocks.end()) {
        LOG_ERROR("Invalid memory address: 0x{:08X}", address);
        return false;
    }
    
    s_memory_blocks.erase(it);
    
    LOG_DEBUG("Freed memory at 0x{:08X}", address);
    return true;
}

bool PPCIntegration::WriteMemory(uint32_t address, const std::vector<uint8_t>& data) {
    auto it = s_memory_blocks.find(address);
    if (it == s_memory_blocks.end()) {
        LOG_ERROR("Invalid memory address: 0x{:08X}", address);
        return false;
    }
    
    if (data.size() > it->second.size) {
        LOG_ERROR("Data size ({}) exceeds allocated memory size ({})", data.size(), it->second.size);
        return false;
    }
    
    std::memcpy(it->second.data.data(), data.data(), data.size());
    
    LOG_DEBUG("Wrote {} bytes to 0x{:08X}", data.size(), address);
    return true;
}

bool PPCIntegration::ReadMemory(uint32_t address, std::vector<uint8_t>& data) {
    auto it = s_memory_blocks.find(address);
    if (it == s_memory_blocks.end()) {
        LOG_ERROR("Invalid memory address: 0x{:08X}", address);
        return false;
    }
    
    data = it->second.data;
    
    LOG_DEBUG("Read {} bytes from 0x{:08X}", data.size(), address);
    return true;
}

bool PPCIntegration::SetBreakpoint(uint32_t address) {
    if (!ValidateAddress(address)) {
        LOG_ERROR("Invalid breakpoint address: 0x{:08X}", address);
        return false;
    }
    
    // Read original byte
    std::vector<uint8_t> original_byte;
    if (!ReadMemory(address, original_byte)) {
        return false;
    }
    
    // Create breakpoint
    Breakpoint bp;
    bp.address = address;
    bp.original_byte = original_byte[0];
    
    s_breakpoints[address] = std::move(bp);
    
    LOG_DEBUG("Set breakpoint at 0x{:08X}", address);
    return true;
}

bool PPCIntegration::RemoveBreakpoint(uint32_t address) {
    auto it = s_breakpoints.find(address);
    if (it == s_breakpoints.end()) {
        LOG_ERROR("No breakpoint at address: 0x{:08X}", address);
        return false;
    }
    
    s_breakpoints.erase(it);
    
    LOG_DEBUG("Removed breakpoint at 0x{:08X}", address);
    return true;
}

bool PPCIntegration::IsBreakpointHit(uint32_t address) {
    return s_breakpoints.find(address) != s_breakpoints.end();
}

bool PPCIntegration::SetWatchpoint(uint32_t address, uint32_t size, bool read, bool write) {
    if (!ValidateAddress(address)) {
        LOG_ERROR("Invalid watchpoint address: 0x{:08X}", address);
        return false;
    }
    
    Watchpoint wp;
    wp.address = address;
    wp.size = size;
    wp.read = read;
    wp.write = write;
    
    s_watchpoints[address] = std::move(wp);
    
    LOG_DEBUG("Set watchpoint at 0x{:08X} (size: {}, read: {}, write: {})", 
              address, size, read, write);
    return true;
}

bool PPCIntegration::RemoveWatchpoint(uint32_t address) {
    auto it = s_watchpoints.find(address);
    if (it == s_watchpoints.end()) {
        LOG_ERROR("No watchpoint at address: 0x{:08X}", address);
        return false;
    }
    
    s_watchpoints.erase(it);
    
    LOG_DEBUG("Removed watchpoint at 0x{:08X}", address);
    return true;
}

bool PPCIntegration::IsWatchpointHit(uint32_t address, bool& is_read) {
    auto it = s_watchpoints.find(address);
    if (it == s_watchpoints.end()) {
        return false;
    }
    
    is_read = it->second.read;
    return true;
}

bool PPCIntegration::ValidateAddress(uint32_t address) {
    // Check if address is in valid PPC memory range
    return address >= 0x80000000 && address < 0x90000000;
}

bool PPCIntegration::ValidateRegister(uint32_t reg) {
    // Check if register number is valid
    return reg < 64; // 32 GPRs + 32 FPRs
}

void PPCIntegration::UpdateConditionRegister() {
    // Update CR based on GPR[0]
    uint64_t value = s_context.gpr[0];
    uint64_t cr = 0;
    
    if (value == 0) {
        cr |= 0x20000000; // Equal
    } else if (value & 0x8000000000000000) {
        cr |= 0x80000000; // Less than
    } else {
        cr |= 0x40000000; // Greater than
    }
    
    s_context.cr = (s_context.cr & ~0xF0000000) | (cr & 0xF0000000);
}

} // namespace xe 