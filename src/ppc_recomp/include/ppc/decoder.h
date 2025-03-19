#pragma once

#include "instructions.h"
#include <cstdint>
#include <string>

namespace fable2::ppc {

struct DecodedInstruction {
    Opcode opcode;
    uint32_t raw;
    uint32_t rs, ra, rb, rd;
    uint32_t imm;
    bool oe, rc;
    CRField crf;
    uint32_t bo, bi;
    uint32_t spr;
    std::string mnemonic;
};

class Decoder {
public:
    static DecodedInstruction Decode(uint32_t instruction);
    static std::string GetMnemonic(const DecodedInstruction& inst);
    
private:
    static uint32_t ExtractField(uint32_t instruction, uint32_t mask, uint32_t shift);
    static Opcode GetOpcode(uint32_t instruction);
    static void DecodeIntegerArithmetic(DecodedInstruction& inst);
    static void DecodeLogical(DecodedInstruction& inst);
    static void DecodeShiftRotate(DecodedInstruction& inst);
    static void DecodeCompare(DecodedInstruction& inst);
    static void DecodeBranch(DecodedInstruction& inst);
    static void DecodeLoadStore(DecodedInstruction& inst);
    static void DecodeFloatingPoint(DecodedInstruction& inst);
    static void DecodeSystem(DecodedInstruction& inst);
};

} // namespace fable2::ppc 