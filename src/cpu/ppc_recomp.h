#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <cstdint>

namespace xe {

enum class ReferenceType {
    Branch,
    Call,
    Data,
    SwitchTable
};

struct Reference {
    uint32_t source_address;
    uint32_t target_address;
    uint64_t resolved_address;
    ReferenceType type;
};

struct Relocation {
    uint32_t offset;
    uint32_t symbol_address;
    uint32_t size;
};

struct SwitchTableConfig {
    uint32_t base_address;
    uint32_t register_index;
    uint32_t default_label;
    std::vector<uint32_t> labels;
};

struct RecompiledBlock {
    uint32_t address;
    uint32_t size;
    void* native_code;
    std::vector<uint32_t> instructions;
    std::string x64_code;
    std::vector<Reference> references;
    std::vector<Relocation> relocations;
    bool has_switch_table;
    bool is_terminated;
};

struct RecompiledFunction {
    uint32_t address;
    uint32_t size;
    void* entry_point;
    std::vector<RecompiledBlock> blocks;
};

struct MemoryAllocation {
    void* ptr;
    size_t size;
    bool is_executable;
    std::string description;
};

class PPCRecompiler {
public:
    static bool Initialize();
    static void Shutdown();
    static void Update();
    
    static bool RecompileBlock(uint32_t address);
    static bool RecompileFunction(uint32_t address);
    static bool RecompileModule(uint32_t address, uint32_t size);
    static void ClearCache();
    static void InvalidateRange(uint32_t address, uint32_t size);
    static void OptimizeBlock(uint32_t address);
    static void OptimizeFunction(uint32_t address);
    
    // Load switch tables from TOML file
    static bool LoadSwitchTables(const std::string& path);
    static SwitchTableConfig GetSwitchTableConfig(uint32_t address);
    static SwitchTableConfig CreateDefaultSwitchTable();

    // Memory allocation hooks
    static void* AllocateMemory(size_t size, bool executable = false, const std::string& description = "");
    static void* ReallocateMemory(void* ptr, size_t new_size, bool executable = false);
    static void FreeMemory(void* ptr);
    static void DumpMemoryStats();

private:
    static bool DecodeInstruction(uint32_t instruction, uint32_t& opcode, uint32_t& operands);
    static bool TranslateInstruction(uint32_t instruction, std::vector<uint8_t>& native_code);
    static bool LinkBlock(RecompiledBlock& block);
    static bool LinkFunction(RecompiledFunction& func);
    
    // Helper functions for LinkBlock
    static RecompiledBlock* FindBlock(uint32_t address);
    static bool HandleExternalReference(const Reference& ref);
    static uint64_t GetRecompiledAddress(uint32_t ppc_address);
    static uint64_t CalculateRelocatedAddress(const Relocation& reloc);
    static void UpdateRelocation(std::string& code, const Relocation& reloc, uint64_t new_address);
    
    static std::unordered_map<uint32_t, RecompiledBlock> s_blocks;
    static std::unordered_map<uint32_t, RecompiledFunction> s_functions;
    static std::unordered_map<uint32_t, SwitchTableConfig> s_switch_tables;
    static bool s_initialized;

    // Memory tracking
    static std::unordered_map<void*, MemoryAllocation> s_allocations;
    static size_t s_total_allocated;
    static size_t s_total_freed;
    
    // Memory protection helpers
    static bool ProtectMemory(void* ptr, size_t size, bool executable);
    static bool IsMemoryExecutable(void* ptr);
};

} // namespace xe 