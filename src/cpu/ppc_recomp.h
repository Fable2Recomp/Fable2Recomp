#pragma once

#include "stdafx.h"

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

struct RecompiledBlock {
    uint32_t address;
    std::vector<uint32_t> instructions;
    std::string x64_code;
    std::vector<Reference> references;
    std::vector<Relocation> relocations;
    bool has_switch_table;
    bool is_terminated;
};

struct SwitchTableConfig {
    uint32_t base_address;
    uint8_t register_index;
    uint32_t default_label;
    std::vector<uint32_t> labels;
};

class PPCRecompiler {
public:
    static bool Initialize();
    static void Shutdown();
    static void Update();
    
    // Recompilation methods
    static bool RecompileBlock(uint32_t address);
    static bool RecompileFunction(uint32_t address);
    static bool RecompileModule(uint32_t address, uint32_t size);
    
    // Cache management
    static void ClearCache();
    static void InvalidateRange(uint32_t address, uint32_t size);
    
    // Optimization methods
    static void OptimizeBlock(uint32_t address);
    static void OptimizeFunction(uint32_t address);
    
    // Load switch tables from TOML file
    bool LoadSwitchTables(const std::string& path);
    
private:
    struct RecompiledFunction {
        uint32_t address;
        uint32_t size;
        std::vector<RecompiledBlock> blocks;
        void* entry_point;
    };
    
    static std::unordered_map<uint32_t, RecompiledBlock> s_blocks;
    static std::unordered_map<uint32_t, RecompiledFunction> s_functions;
    static bool s_initialized;
    
    // Internal methods
    static bool DecodeInstruction(uint32_t instruction, uint32_t& opcode, uint32_t& operands);
    static bool TranslateInstruction(uint32_t instruction, std::vector<uint8_t>& native_code);
    static bool LinkBlock(RecompiledBlock& block);
    static bool LinkFunction(RecompiledFunction& func);
    
    // Helper functions for LinkBlock
    RecompiledBlock* FindBlock(uint32_t address);
    void HandleExternalReference(const Reference& ref);
    uint64_t GetRecompiledAddress(uint32_t ppc_address);
    uint64_t CalculateRelocatedAddress(const Relocation& reloc);
    void UpdateRelocation(std::string& code, const Relocation& reloc, uint64_t new_address);
    SwitchTableConfig GetSwitchTableConfig(uint32_t address);
    SwitchTableConfig CreateDefaultSwitchTable();
    
    std::vector<RecompiledBlock> blocks_;
    std::unordered_map<uint32_t, SwitchTableConfig> switch_tables_;
};

} // namespace xe 