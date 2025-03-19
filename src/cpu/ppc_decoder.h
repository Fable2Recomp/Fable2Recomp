#pragma once

#include "stdafx.h"

namespace xe {

enum class PPCInstructionType {
    Invalid,
    Add,
    Addi,
    Addis,
    And,
    Andi,
    Andis,
    B,
    Bc,
    Bclr,
    Bctr,
    Cmp,
    Cmpi,
    Cmpl,
    Cmpli,
    Divw,
    Divwu,
    Extsb,
    Extsh,
    Extsw,
    Lbz,
    Lbzu,
    Lha,
    Lhau,
    Lhz,
    Lhzu,
    Lmw,
    Lwz,
    Lwzu,
    Mfcr,
    Mflr,
    Mfspr,
    Mtcrf,
    Mtlr,
    Mtspr,
    Mulli,
    Mullw,
    Neg,
    Nor,
    Or,
    Ori,
    Oris,
    Rlwimi,
    Rlwinm,
    Rlwnm,
    Sraw,
    Srawi,
    Srw,
    Stb,
    Stbu,
    Sth,
    Sthu,
    Stmw,
    Stw,
    Stwu,
    Subf,
    Subfic,
    Xor,
    Xori,
    Xoris
};

struct PPCInstruction {
    PPCInstructionType type;
    uint32_t opcode;
    uint32_t operands[6];
    uint32_t operand_count;
};

class PPCDecoder {
public:
    static bool Decode(uint32_t instruction, PPCInstruction& decoded);
    
private:
    static bool DecodeAdd(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeAddi(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeAddis(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeAnd(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeAndi(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeAndis(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeB(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeBc(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeBclr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeBctr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeCmp(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeCmpi(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeCmpl(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeCmpli(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeDivw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeDivwu(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeExtsb(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeExtsh(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeExtsw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLbz(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLbzu(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLha(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLhau(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLhz(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLhzu(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLmw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLwz(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeLwzu(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMfcr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMflr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMfspr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMtcrf(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMtlr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMtspr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMulli(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeMullw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeNeg(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeNor(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeOr(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeOri(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeOris(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeRlwimi(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeRlwinm(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeRlwnm(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeSraw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeSrawi(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeSrw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeStb(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeStbu(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeSth(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeSthu(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeStmw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeStw(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeStwu(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeSubf(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeSubfic(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeXor(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeXori(uint32_t instruction, PPCInstruction& decoded);
    static bool DecodeXoris(uint32_t instruction, PPCInstruction& decoded);
};

} // namespace xe 