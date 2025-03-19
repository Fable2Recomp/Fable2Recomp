#pragma once

#include "decoder.h"
#include <vector>
#include <memory>
#include <string>

namespace fable2::ppc {

class Recompiler {
public:
    struct Block {
        uint32_t address;
        std::vector<uint32_t> instructions;
        std::string x64_code;
        bool is_terminated;
    };

    Recompiler();
    ~Recompiler();

    // Add a block of PPC code to recompile
    void AddBlock(uint32_t address, const std::vector<uint32_t>& instructions);
    
    // Recompile all added blocks
    void Recompile();
    
    // Get the recompiled x64 code for a specific block
    const std::string& GetX64Code(uint32_t address) const;
    
    // Get all recompiled blocks
    const std::vector<Block>& GetBlocks() const { return blocks_; }

private:
    std::vector<Block> blocks_;
    
    // Internal recompilation helpers
    void RecompileBlock(Block& block);
    void RecompileIntegerArithmetic(const DecodedInstruction& inst, std::stringstream& ss);
    void RecompileLogical(const DecodedInstruction& inst, std::stringstream& ss);
    void RecompileShiftRotate(const DecodedInstruction& inst, std::stringstream& ss);
    void RecompileCompare(const DecodedInstruction& inst, std::stringstream& ss);
    void RecompileBranch(const DecodedInstruction& inst, std::stringstream& ss);
    void RecompileLoadStore(const DecodedInstruction& inst, std::stringstream& ss);
    void RecompileFloatingPoint(const DecodedInstruction& inst, std::stringstream& ss);
    void RecompileSystem(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Register allocation
    std::string AllocateRegister();
    void FreeRegister(const std::string& reg);
    std::string GetPPCRegister(uint32_t reg_num);
    std::string GetFPRegister(uint32_t reg_num);
    
    // Condition code handling
    void UpdateConditionCode(const DecodedInstruction& inst);
    std::string GetConditionCode(const DecodedInstruction& inst);
};

} // namespace fable2::ppc 