#include "../include/ppc/decoder.h"
#include "../include/ppc/utils.h"
#include <sstream>

namespace fable2::ppc {

DecodedInstruction Decoder::Decode(uint32_t instruction) {
    DecodedInstruction inst;
    inst.raw = instruction;
    inst.opcode = GetOpcode(instruction);
    
    // Extract common fields
    inst.rs = ExtractField(instruction, RS_MASK, 21);
    inst.ra = ExtractField(instruction, RA_MASK, 16);
    inst.rb = ExtractField(instruction, RB_MASK, 11);
    inst.rd = ExtractField(instruction, RD_MASK, 11);
    inst.oe = (instruction & OE_MASK) != 0;
    inst.rc = (instruction & Rc_MASK) != 0;
    
    // Decode based on opcode type
    switch (inst.opcode) {
        case Opcode::ADD:
        case Opcode::SUBF:
        case Opcode::MULLW:
        case Opcode::DIVW:
            DecodeIntegerArithmetic(inst);
            break;
            
        case Opcode::AND:
        case Opcode::OR:
        case Opcode::XOR:
        case Opcode::NAND:
        case Opcode::NOR:
            DecodeLogical(inst);
            break;
            
        case Opcode::SLW:
        case Opcode::SRW:
        case Opcode::SRAW:
        case Opcode::SRAWI:
            DecodeShiftRotate(inst);
            break;
            
        case Opcode::CMP:
        case Opcode::CMPI:
        case Opcode::CMPL:
        case Opcode::CMPLI:
            DecodeCompare(inst);
            break;
            
        case Opcode::B:
        case Opcode::BL:
        case Opcode::BC:
        case Opcode::BCLR:
        case Opcode::BCCTR:
            DecodeBranch(inst);
            break;
            
        case Opcode::LBZ:
        case Opcode::LHZ:
        case Opcode::LWZ:
        case Opcode::LHA:
        case Opcode::LWA:
        case Opcode::STB:
        case Opcode::STH:
        case Opcode::STW:
            DecodeLoadStore(inst);
            break;
            
        case Opcode::LFS:
        case Opcode::LFD:
        case Opcode::STFS:
        case Opcode::STFD:
        case Opcode::FADD:
        case Opcode::FSUB:
        case Opcode::FMUL:
        case Opcode::FDIV:
            DecodeFloatingPoint(inst);
            break;
            
        case Opcode::SC:
        case Opcode::RFI:
        case Opcode::RFID:
        case Opcode::MTSPR:
        case Opcode::MFSPR:
            DecodeSystem(inst);
            break;
    }
    
    inst.mnemonic = GetMnemonic(inst);
    return inst;
}

uint32_t Decoder::ExtractField(uint32_t instruction, uint32_t mask, uint32_t shift) {
    return (instruction & mask) >> shift;
}

Opcode Decoder::GetOpcode(uint32_t instruction) {
    return static_cast<Opcode>(instruction & OPCODE_MASK);
}

void Decoder::DecodeIntegerArithmetic(DecodedInstruction& inst) {
    inst.imm = ExtractField(inst.raw, SIMM_MASK, 0);
}

void Decoder::DecodeLogical(DecodedInstruction& inst) {
    // No additional fields needed for logical operations
}

void Decoder::DecodeShiftRotate(DecodedInstruction& inst) {
    inst.imm = ExtractField(inst.raw, SIMM_MASK, 0);
}

void Decoder::DecodeCompare(DecodedInstruction& inst) {
    inst.crf = static_cast<CRField>(ExtractField(inst.raw, 0x0E000000, 25));
}

void Decoder::DecodeBranch(DecodedInstruction& inst) {
    inst.bo = ExtractField(inst.raw, 0x03E00000, 21);
    inst.bi = ExtractField(inst.raw, 0x001F0000, 16);
    inst.imm = ExtractField(inst.raw, LI_MASK, 0);
}

void Decoder::DecodeLoadStore(DecodedInstruction& inst) {
    inst.imm = ExtractField(inst.raw, SIMM_MASK, 0);
}

void Decoder::DecodeFloatingPoint(DecodedInstruction& inst) {
    inst.imm = ExtractField(inst.raw, SIMM_MASK, 0);
}

void Decoder::DecodeSystem(DecodedInstruction& inst) {
    inst.spr = static_cast<uint32_t>(static_cast<SPR>(ExtractField(inst.raw, 0x03FF0000, 16)));
}

std::string Decoder::GetMnemonic(const DecodedInstruction& inst) {
    std::stringstream ss;
    
    switch (inst.opcode) {
        case Opcode::ADD:
            ss << "add" << (inst.oe ? "o" : "") << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::ADDI:
            ss << "addi r" << inst.rd << ", r" << inst.ra << ", " << static_cast<int16_t>(inst.imm);
            break;
            
        case Opcode::ADDIS:
            ss << "addis r" << inst.rd << ", r" << inst.ra << ", " << static_cast<int16_t>(inst.imm);
            break;
            
        case Opcode::SUBF:
            ss << "subf" << (inst.oe ? "o" : "") << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::MULLW:
            ss << "mullw" << (inst.oe ? "o" : "") << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::DIVW:
            ss << "divw" << (inst.oe ? "o" : "") << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::AND:
            ss << "and" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::OR:
            ss << "or" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::XOR:
            ss << "xor" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::NAND:
            ss << "nand" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::NOR:
            ss << "nor" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::SLW:
            ss << "slw" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::SRW:
            ss << "srw" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::SRAW:
            ss << "sraw" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::SRAWI:
            ss << "srawi" << (inst.rc ? "." : "") << " r" << inst.rd << ", r" << inst.ra << ", " << inst.imm;
            break;
            
        case Opcode::CMP:
            ss << "cmp cr" << static_cast<int>(inst.crf) << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::CMPI:
            ss << "cmpi cr" << static_cast<int>(inst.crf) << ", r" << inst.ra << ", " << static_cast<int16_t>(inst.imm);
            break;
            
        case Opcode::CMPL:
            ss << "cmpl cr" << static_cast<int>(inst.crf) << ", r" << inst.ra << ", r" << inst.rb;
            break;
            
        case Opcode::CMPLI:
            ss << "cmpli cr" << static_cast<int>(inst.crf) << ", r" << inst.ra << ", " << inst.imm;
            break;
            
        case Opcode::B:
            ss << "b" << (inst.aa ? "a" : "") << (inst.lk ? "l" : "") << " " << inst.imm;
            break;
            
        case Opcode::BL:
            ss << "bl" << (inst.aa ? "a" : "") << " " << inst.imm;
            break;
            
        case Opcode::BC:
            ss << "bc" << (inst.aa ? "a" : "") << (inst.lk ? "l" : "") << " " << inst.bo << ", " << inst.bi << ", " << inst.imm;
            break;
            
        case Opcode::BCLR:
            ss << "bclr" << (inst.lk ? "l" : "") << " " << inst.bo << ", " << inst.bi;
            break;
            
        case Opcode::BCCTR:
            ss << "bcctr" << (inst.lk ? "l" : "") << " " << inst.bo << ", " << inst.bi;
            break;
            
        case Opcode::LBZ:
            ss << "lbz r" << inst.rd << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::LHZ:
            ss << "lhz r" << inst.rd << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::LWZ:
            ss << "lwz r" << inst.rd << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::LHA:
            ss << "lha r" << inst.rd << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::LWA:
            ss << "lwa r" << inst.rd << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::STB:
            ss << "stb r" << inst.rs << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::STH:
            ss << "sth r" << inst.rs << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::STW:
            ss << "stw r" << inst.rs << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::LFS:
            ss << "lfs f" << inst.rd << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::LFD:
            ss << "lfd f" << inst.rd << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::STFS:
            ss << "stfs f" << inst.rs << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::STFD:
            ss << "stfd f" << inst.rs << ", " << inst.imm << "(r" << inst.ra << ")";
            break;
            
        case Opcode::FADD:
            ss << "fadd";
            if (inst.rc) ss << ".";
            ss << " f" << inst.rd << ", f" << inst.ra << ", f" << inst.rb;
            break;
            
        case Opcode::FSUB:
            ss << "fsub";
            if (inst.rc) ss << ".";
            ss << " f" << inst.rd << ", f" << inst.ra << ", f" << inst.rb;
            break;
            
        case Opcode::FMUL:
            ss << "fmul";
            if (inst.rc) ss << ".";
            ss << " f" << inst.rd << ", f" << inst.ra << ", f" << inst.rb;
            break;
            
        case Opcode::FDIV:
            ss << "fdiv";
            if (inst.rc) ss << ".";
            ss << " f" << inst.rd << ", f" << inst.ra << ", f" << inst.rb;
            break;
            
        case Opcode::SC:
            ss << "sc";
            break;
            
        case Opcode::RFI:
            ss << "rfi";
            break;
            
        case Opcode::RFID:
            ss << "rfid";
            break;
            
        case Opcode::MTSPR:
            ss << "mtspr " << SPRToString(static_cast<SPR>(inst.spr)) << ", r" << inst.rs;
            break;
            
        case Opcode::MFSPR:
            ss << "mfspr r" << inst.rd << ", " << SPRToString(static_cast<SPR>(inst.spr));
            break;
    }
    
    return ss.str();
}

} // namespace fable2::ppc 