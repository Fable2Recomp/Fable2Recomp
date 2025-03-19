#pragma once
#include "stdafx.h"
#include "xbox.h"
#include <vector>
#include <unordered_map>

namespace xe {

class MemoryPatches {
public:
    static bool Initialize();
    static void Shutdown();
    static void Update();
    
    static bool ApplyPatch(uint32_t address, const std::vector<uint8_t>& patch);
    static bool RemovePatch(uint32_t address);
    static bool IsPatched(uint32_t address);
    
    static bool SetMemoryState(uint32_t address, uint32_t size, const std::vector<uint8_t>& state);
    static bool GetMemoryState(uint32_t address, std::vector<uint8_t>& state);
    static bool ClearMemoryState(uint32_t address);
    
    static bool SetBufferState(uint32_t address, uint32_t size, const std::vector<uint8_t>& state);
    static bool GetBufferState(uint32_t address, std::vector<uint8_t>& state);
    static bool ClearBufferState(uint32_t address);
    
    static bool SetRegisterState(uint32_t reg, uint64_t value);
    static bool GetRegisterState(uint32_t reg, uint64_t& value);
    static bool ClearRegisterState(uint32_t reg);
    
private:
    struct Patch {
        uint32_t address;
        std::vector<uint8_t> original_data;
        std::vector<uint8_t> patch_data;
    };
    
    struct MemoryState {
        uint32_t address;
        uint32_t size;
        std::vector<uint8_t> data;
    };
    
    struct BufferState {
        uint32_t address;
        uint32_t size;
        std::vector<uint8_t> data;
    };
    
    static std::unordered_map<uint32_t, Patch> s_patches;
    static std::unordered_map<uint32_t, MemoryState> s_memory_states;
    static std::unordered_map<uint32_t, BufferState> s_buffer_states;
    static std::unordered_map<uint32_t, uint64_t> s_register_states;
    
    static bool ValidateAddress(uint32_t address);
    static bool ValidateRegister(uint32_t reg);
};

} // namespace xe 