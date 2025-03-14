#include "stdafx.h"
#include "cpu/ppc_decoder.h"
#include "os/logger.h"

namespace xe {

bool PPCDecoder::Decode(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Invalid;
    decoded.opcode = instruction >> 26;
    decoded.operand_count = 0;
    
    // Decode based on opcode
    switch (decoded.opcode) {
        case 0x1F: return DecodeAdd(instruction, decoded);
        case 0x0E: return DecodeAddi(instruction, decoded);
        case 0x0F: return DecodeAddis(instruction, decoded);
        case 0x1C: return DecodeAnd(instruction, decoded);
        case 0x0C: return DecodeAndi(instruction, decoded);
        case 0x0D: return DecodeAndis(instruction, decoded);
        case 0x12: return DecodeB(instruction, decoded);
        case 0x10: return DecodeBc(instruction, decoded);
        case 0x4C: return DecodeBclr(instruction, decoded);
        case 0x4E: return DecodeBctr(instruction, decoded);
        case 0x11: return DecodeCmp(instruction, decoded);
        case 0x0B: return DecodeCmpi(instruction, decoded);
        case 0x1F: return DecodeCmpl(instruction, decoded);
        case 0x0A: return DecodeCmpli(instruction, decoded);
        case 0x1F: return DecodeDivw(instruction, decoded);
        case 0x1F: return DecodeDivwu(instruction, decoded);
        case 0x1F: return DecodeExtsb(instruction, decoded);
        case 0x1F: return DecodeExtsh(instruction, decoded);
        case 0x1F: return DecodeExtsw(instruction, decoded);
        case 0x88: return DecodeLbz(instruction, decoded);
        case 0x89: return DecodeLbzu(instruction, decoded);
        case 0x8A: return DecodeLha(instruction, decoded);
        case 0x8B: return DecodeLhau(instruction, decoded);
        case 0x8C: return DecodeLhz(instruction, decoded);
        case 0x8D: return DecodeLhzu(instruction, decoded);
        case 0x9B: return DecodeLmw(instruction, decoded);
        case 0x80: return DecodeLwz(instruction, decoded);
        case 0x81: return DecodeLwzu(instruction, decoded);
        case 0x1F: return DecodeMfcr(instruction, decoded);
        case 0x1F: return DecodeMflr(instruction, decoded);
        case 0x1F: return DecodeMfspr(instruction, decoded);
        case 0x1F: return DecodeMtcrf(instruction, decoded);
        case 0x1F: return DecodeMtlr(instruction, decoded);
        case 0x1F: return DecodeMtspr(instruction, decoded);
        case 0x0C: return DecodeMulli(instruction, decoded);
        case 0x1F: return DecodeMullw(instruction, decoded);
        case 0x1F: return DecodeNeg(instruction, decoded);
        case 0x1F: return DecodeNor(instruction, decoded);
        case 0x1C: return DecodeOr(instruction, decoded);
        case 0x0C: return DecodeOri(instruction, decoded);
        case 0x0D: return DecodeOris(instruction, decoded);
        case 0x1F: return DecodeRlwimi(instruction, decoded);
        case 0x1F: return DecodeRlwinm(instruction, decoded);
        case 0x1F: return DecodeRlwnm(instruction, decoded);
        case 0x1F: return DecodeSraw(instruction, decoded);
        case 0x1F: return DecodeSrawi(instruction, decoded);
        case 0x1F: return DecodeSrw(instruction, decoded);
        case 0x98: return DecodeStb(instruction, decoded);
        case 0x99: return DecodeStbu(instruction, decoded);
        case 0x9A: return DecodeSth(instruction, decoded);
        case 0x9B: return DecodeSthu(instruction, decoded);
        case 0x9F: return DecodeStmw(instruction, decoded);
        case 0x90: return DecodeStw(instruction, decoded);
        case 0x91: return DecodeStwu(instruction, decoded);
        case 0x1F: return DecodeSubf(instruction, decoded);
        case 0x08: return DecodeSubfic(instruction, decoded);
        case 0x1C: return DecodeXor(instruction, decoded);
        case 0x0C: return DecodeXori(instruction, decoded);
        case 0x0D: return DecodeXoris(instruction, decoded);
        default:
            LOG_ERROR("Unknown opcode: 0x{:02X}", decoded.opcode);
            return false;
    }
}

bool PPCDecoder::DecodeAdd(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Add;
    decoded.operands[0] = (instruction >> 21) & 0x1F;  // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;  // RA
    decoded.operands[2] = (instruction >> 11) & 0x1F;  // RB
    decoded.operands[3] = (instruction >> 1) & 0x1;     // OE
    decoded.operands[4] = instruction & 0x1;            // Rc
    decoded.operand_count = 5;
    return true;
}

bool PPCDecoder::DecodeAddi(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Addi;
    decoded.operands[0] = (instruction >> 21) & 0x1F;  // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;  // RA
    decoded.operands[2] = instruction & 0xFFFF;         // SIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeAddis(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Addis;
    decoded.operands[0] = (instruction >> 21) & 0x1F;  // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;  // RA
    decoded.operands[2] = instruction & 0xFFFF;         // SIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeAnd(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::And;
    decoded.operands[0] = (instruction >> 21) & 0x1F;  // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;  // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;  // RB
    decoded.operands[3] = instruction & 0x1;            // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeAndi(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Andi;
    decoded.operands[0] = (instruction >> 21) & 0x1F;  // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;  // RS
    decoded.operands[2] = instruction & 0xFFFF;         // UIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeAndis(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Andis;
    decoded.operands[0] = (instruction >> 21) & 0x1F;  // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;  // RS
    decoded.operands[2] = instruction & 0xFFFF;         // UIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeB(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::B;
    decoded.operands[0] = instruction & 0x3FFFFFF;      // LI
    decoded.operands[1] = (instruction >> 31) & 0x1;    // AA
    decoded.operands[2] = (instruction >> 30) & 0x1;    // LK
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeBc(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Bc;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // BO
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // BI
    decoded.operands[2] = instruction & 0xFFFF;          // BD
    decoded.operands[3] = (instruction >> 31) & 0x1;     // AA
    decoded.operands[4] = (instruction >> 30) & 0x1;     // LK
    decoded.operand_count = 5;
    return true;
}

bool PPCDecoder::DecodeBclr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Bclr;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // BO
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // BI
    decoded.operands[2] = (instruction >> 1) & 0x1;      // LK
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeBctr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Bctr;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // BO
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // BI
    decoded.operands[2] = (instruction >> 1) & 0x1;      // LK
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeCmp(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Cmp;
    decoded.operands[0] = (instruction >> 23) & 0x7;    // BF
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = (instruction >> 1) & 0x1;      // L
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeCmpi(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Cmpi;
    decoded.operands[0] = (instruction >> 23) & 0x7;    // BF
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // SIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeCmpl(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Cmpl;
    decoded.operands[0] = (instruction >> 23) & 0x7;    // BF
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = (instruction >> 1) & 0x1;      // L
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeCmpli(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Cmpli;
    decoded.operands[0] = (instruction >> 23) & 0x7;    // BF
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // UIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeDivw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Divw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = (instruction >> 1) & 0x1;      // OE
    decoded.operands[4] = instruction & 0x1;             // Rc
    decoded.operand_count = 5;
    return true;
}

bool PPCDecoder::DecodeDivwu(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Divwu;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = (instruction >> 1) & 0x1;      // OE
    decoded.operands[4] = instruction & 0x1;             // Rc
    decoded.operand_count = 5;
    return true;
}

bool PPCDecoder::DecodeExtsb(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Extsb;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = instruction & 0x1;             // Rc
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeExtsh(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Extsh;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = instruction & 0x1;             // Rc
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeExtsw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Extsw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = instruction & 0x1;             // Rc
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLbz(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lbz;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLbzu(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lbzu;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLha(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lha;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLhau(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lhau;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLhz(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lhz;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLhzu(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lhzu;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLmw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lmw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLwz(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lwz;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeLwzu(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Lwzu;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeMfcr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mfcr;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operand_count = 1;
    return true;
}

bool PPCDecoder::DecodeMflr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mflr;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operand_count = 1;
    return true;
}

bool PPCDecoder::DecodeMfspr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mfspr;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = ((instruction >> 16) & 0x1F) | ((instruction >> 6) & 0x3F); // SPR
    decoded.operand_count = 2;
    return true;
}

bool PPCDecoder::DecodeMtcrf(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mtcrf;
    decoded.operands[0] = (instruction >> 12) & 0xFF;   // CRM
    decoded.operands[1] = (instruction >> 21) & 0x1F;   // RS
    decoded.operand_count = 2;
    return true;
}

bool PPCDecoder::DecodeMtlr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mtlr;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operand_count = 1;
    return true;
}

bool PPCDecoder::DecodeMtspr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mtspr;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = ((instruction >> 16) & 0x1F) | ((instruction >> 6) & 0x3F); // SPR
    decoded.operand_count = 2;
    return true;
}

bool PPCDecoder::DecodeMulli(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mulli;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // SIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeMullw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Mullw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = (instruction >> 1) & 0x1;      // OE
    decoded.operands[4] = instruction & 0x1;             // Rc
    decoded.operand_count = 5;
    return true;
}

bool PPCDecoder::DecodeNeg(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Neg;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = (instruction >> 1) & 0x1;      // OE
    decoded.operands[3] = instruction & 0x1;             // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeNor(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Nor;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = instruction & 0x1;             // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeOr(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Or;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = instruction & 0x1;             // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeOri(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Ori;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = instruction & 0xFFFF;          // UIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeOris(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Oris;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = instruction & 0xFFFF;          // UIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeRlwimi(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Rlwimi;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // SH
    decoded.operands[3] = (instruction >> 6) & 0x1F;     // MB
    decoded.operands[4] = (instruction >> 1) & 0x1F;     // ME
    decoded.operands[5] = instruction & 0x1;             // Rc
    decoded.operand_count = 6;
    return true;
}

bool PPCDecoder::DecodeRlwinm(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Rlwinm;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // SH
    decoded.operands[3] = (instruction >> 6) & 0x1F;     // MB
    decoded.operands[4] = (instruction >> 1) & 0x1F;     // ME
    decoded.operands[5] = instruction & 0x1;             // Rc
    decoded.operand_count = 6;
    return true;
}

bool PPCDecoder::DecodeRlwnm(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Rlwnm;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = (instruction >> 6) & 0x1F;     // MB
    decoded.operands[4] = (instruction >> 1) & 0x1F;     // ME
    decoded.operands[5] = instruction & 0x1;             // Rc
    decoded.operand_count = 6;
    return true;
}

bool PPCDecoder::DecodeSraw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Sraw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = instruction & 0x1;             // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeSrawi(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Srawi;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // SH
    decoded.operands[3] = instruction & 0x1;             // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeSrw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Srw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = instruction & 0x1;             // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeStb(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Stb;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeStbu(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Stbu;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeSth(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Sth;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeSthu(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Sthu;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeStmw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Stmw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeStw(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Stw;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeStwu(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Stwu;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RS
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // D
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeSubf(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Subf;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = (instruction >> 1) & 0x1;      // OE
    decoded.operands[4] = instruction & 0x1;             // Rc
    decoded.operand_count = 5;
    return true;
}

bool PPCDecoder::DecodeSubfic(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Subfic;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RT
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RA
    decoded.operands[2] = instruction & 0xFFFF;          // SIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeXor(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Xor;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = (instruction >> 11) & 0x1F;   // RB
    decoded.operands[3] = instruction & 0x1;             // Rc
    decoded.operand_count = 4;
    return true;
}

bool PPCDecoder::DecodeXori(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Xori;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = instruction & 0xFFFF;          // UIMM
    decoded.operand_count = 3;
    return true;
}

bool PPCDecoder::DecodeXoris(uint32_t instruction, PPCInstruction& decoded) {
    decoded.type = PPCInstructionType::Xoris;
    decoded.operands[0] = (instruction >> 21) & 0x1F;   // RA
    decoded.operands[1] = (instruction >> 16) & 0x1F;   // RS
    decoded.operands[2] = instruction & 0xFFFF;          // UIMM
    decoded.operand_count = 3;
    return true;
}

} // namespace xe 