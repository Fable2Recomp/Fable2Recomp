#include "ppc_recomp_improved.h"
#include "ppc/instructions.h"
#include "ppc/decoder.h"
#include <cstring>

namespace fable2::ppc {

// Integer Arithmetic Instructions
void PPCTranslator::TranslateADD(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "add r" << rd << ", r" << ra << ", r" << rb << "\n";
    
    if (inst.rc) {
        // Update condition code
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

void PPCTranslator::TranslateADDI(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    
    ss << "add r" << rd << ", r" << ra << ", " << static_cast<int16_t>(inst.imm) << "\n";
}

void PPCTranslator::TranslateADDIS(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    
    ss << "add r" << rd << ", r" << ra << ", " << (static_cast<int16_t>(inst.imm) << 16) << "\n";
}

void PPCTranslator::TranslateSUBF(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "sub r" << rd << ", r" << rb << ", r" << ra << "\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

void PPCTranslator::TranslateMULLW(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "imul r" << rd << ", r" << ra << ", r" << rb << "\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

void PPCTranslator::TranslateDIVW(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "mov eax, r" << ra << "\n";
    ss << "cdq\n";
    ss << "idiv r" << rb << "\n";
    ss << "mov r" << rd << ", rax\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

// Logical Instructions
void PPCTranslator::TranslateAND(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "and r" << rd << ", r" << ra << ", r" << rb << "\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

void PPCTranslator::TranslateOR(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "or r" << rd << ", r" << ra << ", r" << rb << "\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

void PPCTranslator::TranslateXOR(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "xor r" << rd << ", r" << ra << ", r" << rb << "\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

// Shift and Rotate Instructions
void PPCTranslator::TranslateSLW(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "mov cl, r" << rb << "\n";
    ss << "shl r" << rd << ", r" << ra << ", cl\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

void PPCTranslator::TranslateSRW(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "mov cl, r" << rb << "\n";
    ss << "shr r" << rd << ", r" << ra << ", cl\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

void PPCTranslator::TranslateSRAW(const DecodedInstruction& inst, std::stringstream& ss) {
    int rd = PPCRegisterMap::GPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    int rb = PPCRegisterMap::GPR_MAP[inst.rb];
    
    ss << "mov cl, r" << rb << "\n";
    ss << "sar r" << rd << ", r" << ra << ", cl\n";
    
    if (inst.rc) {
        ss << "test r" << rd << ", r" << rd << "\n";
    }
}

// Branch Instructions
void PPCTranslator::TranslateB(const DecodedInstruction& inst, std::stringstream& ss) {
    if (inst.aa) {
        // Absolute branch
        ss << "jmp " << inst.imm << "\n";
    } else {
        // Relative branch
        ss << "jmp " << inst.imm << "\n";
    }
}

void PPCTranslator::TranslateBL(const DecodedInstruction& inst, std::stringstream& ss) {
    if (inst.aa) {
        // Absolute branch with link
        ss << "call " << inst.imm << "\n";
    } else {
        // Relative branch with link
        ss << "call " << inst.imm << "\n";
    }
}

void PPCTranslator::TranslateBC(const DecodedInstruction& inst, std::stringstream& ss) {
    // Branch conditional
    std::string condition;
    switch (inst.bo) {
        case 0: // Branch if CR bit is 0
            condition = "jz";
            break;
        case 1: // Branch if CR bit is 1
            condition = "jnz";
            break;
        case 2: // Branch if CR bit is 0 (decrement CTR)
            condition = "jz";
            break;
        case 3: // Branch if CR bit is 1 (decrement CTR)
            condition = "jnz";
            break;
        case 4: // Branch if CTR is 0
            condition = "jz";
            break;
        case 5: // Branch if CTR is not 0
            condition = "jnz";
            break;
        default:
            condition = "jmp";
    }
    
    ss << condition << " " << inst.imm << "\n";
}

// Floating Point Instructions
void PPCTranslator::TranslateLFS(const DecodedInstruction& inst, std::stringstream& ss) {
    int frd = PPCRegisterMap::FPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    
    ss << "movss xmm" << frd << ", [" << inst.imm << "+r" << ra << "]\n";
}

void PPCTranslator::TranslateLFD(const DecodedInstruction& inst, std::stringstream& ss) {
    int frd = PPCRegisterMap::FPR_MAP[inst.rd];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    
    ss << "movsd xmm" << frd << ", [" << inst.imm << "+r" << ra << "]\n";
}

void PPCTranslator::TranslateSTFS(const DecodedInstruction& inst, std::stringstream& ss) {
    int frs = PPCRegisterMap::FPR_MAP[inst.rs];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    
    ss << "movss [" << inst.imm << "+r" << ra << "], xmm" << frs << "\n";
}

void PPCTranslator::TranslateSTFD(const DecodedInstruction& inst, std::stringstream& ss) {
    int frs = PPCRegisterMap::FPR_MAP[inst.rs];
    int ra = PPCRegisterMap::GPR_MAP[inst.ra];
    
    ss << "movsd [" << inst.imm << "+r" << ra << "], xmm" << frs << "\n";
}

void PPCTranslator::TranslateFADD(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "addsd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
}

void PPCTranslator::TranslateFSUB(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "subsd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
}

void PPCTranslator::TranslateFMUL(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "mulsd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
}

void PPCTranslator::TranslateFDIV(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "divsd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
}

// Additional Floating Point Instructions
void PPCTranslator::TranslateFMADD(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "vfmadd231sd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFMSUB(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "vfmsub231sd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFNMADD(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "vfnmadd231sd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFNMSUB(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "vfnmsub231sd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFSQRT(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "sqrtsd xmm" << frt << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFABS(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "andpd xmm" << frt << ", xmm" << frb << ", [rip + abs_mask]\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFNABS(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "orpd xmm" << frt << ", xmm" << frb << ", [rip + sign_mask]\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFNEG(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "xorpd xmm" << frt << ", xmm" << frb << ", [rip + sign_mask]\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCMPU(const DecodedInstruction& inst, std::stringstream& ss) {
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "ucomisd xmm" << fra << ", xmm" << frb << "\n";
    // Set CR field based on comparison result
    ss << "setz al\n";
    ss << "setb cl\n";
    ss << "seta dl\n";
    ss << "movzx eax, al\n";
    ss << "movzx ecx, cl\n";
    ss << "movzx edx, dl\n";
    ss << "shl eax, 2\n";
    ss << "shl ecx, 1\n";
    ss << "or eax, ecx\n";
    ss << "or eax, edx\n";
    ss << "mov [rip + cr_field], eax\n";
}

void PPCTranslator::TranslateFCTIW(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "cvttsd2si eax, xmm" << frb << "\n";
    ss << "cvtsi2sd xmm" << frt << ", eax\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCTIWZ(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "cvttsd2si eax, xmm" << frb << "\n";
    ss << "cvtsi2sd xmm" << frt << ", eax\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

// Floating Point Status Management
void PPCTranslator::UpdateFPStatus(uint32_t status_bits) {
    uint32_t current_status = GetFPStatus();
    current_status |= status_bits;
    SetFPStatus(current_status);
    CheckFPException(status_bits);
}

void PPCTranslator::CheckFPException(uint32_t status_bits) {
    uint32_t current_status = GetFPStatus();
    uint32_t enabled_bits = current_status & 0x000000F8; // VE, OE, UE, ZE, XE
    
    if (status_bits & enabled_bits) {
        // Handle floating point exception
        ss << "call handle_fp_exception\n";
    }
}

void PPCTranslator::SetFPStatus(uint32_t status_bits) {
    ss << "mov dword ptr [rip + fp_status], " << status_bits << "\n";
}

void PPCTranslator::ClearFPStatus(uint32_t status_bits) {
    uint32_t current_status = GetFPStatus();
    current_status &= ~status_bits;
    SetFPStatus(current_status);
}

uint32_t PPCTranslator::GetFPStatus() {
    ss << "mov eax, dword ptr [rip + fp_status]\n";
    return 0; // This is a placeholder, actual implementation would need to handle the return value
}

// Additional Complex Floating Point Instructions
void PPCTranslator::TranslateFRSQRTE(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode to nearest for better accuracy
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TO_NEAREST);
    
    // Calculate reciprocal square root
    ss << "sqrtsd xmm" << frt << ", xmm" << frb << "\n";
    ss << "movsd xmm1, [rip + one_constant]\n";
    ss << "divsd xmm" << frt << ", xmm1, xmm" << frt << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFRSQRTES(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode to nearest for better accuracy
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TO_NEAREST);
    
    // Calculate reciprocal square root
    ss << "sqrtsd xmm" << frt << ", xmm" << frb << "\n";
    ss << "movsd xmm1, [rip + one_constant]\n";
    ss << "divsd xmm" << frt << ", xmm1, xmm" << frt << "\n";
    
    // Convert to single precision and back
    ss << "cvtsd2ss xmm" << frt << ", xmm" << frt << "\n";
    ss << "cvtss2sd xmm" << frt << ", xmm" << frt << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFRES(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode to nearest for better accuracy
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TO_NEAREST);
    
    // Calculate reciprocal
    ss << "movsd xmm1, [rip + one_constant]\n";
    ss << "divsd xmm" << frt << ", xmm1, xmm" << frb << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFRESS(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode to nearest for better accuracy
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TO_NEAREST);
    
    // Calculate reciprocal
    ss << "movsd xmm1, [rip + one_constant]\n";
    ss << "divsd xmm" << frt << ", xmm1, xmm" << frb << "\n";
    
    // Convert to single precision and back
    ss << "cvtsd2ss xmm" << frt << ", xmm" << frt << "\n";
    ss << "cvtss2sd xmm" << frt << ", xmm" << frt << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCTID(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode based on instruction
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to integer
    ss << "cvttsd2si rax, xmm" << frb << "\n";
    ss << "cvtsi2sd xmm" << frt << ", rax\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCTIDZ(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode to zero
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to integer
    ss << "cvttsd2si rax, xmm" << frb << "\n";
    ss << "cvtsi2sd xmm" << frt << ", rax\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCTIDU(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode based on instruction
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to unsigned integer
    ss << "cvttsd2usi rax, xmm" << frb << "\n";
    ss << "cvtsi2sd xmm" << frt << ", rax\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCTIDUZ(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode to zero
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to unsigned integer
    ss << "cvttsd2usi rax, xmm" << frb << "\n";
    ss << "cvtsi2sd xmm" << frt << ", rax\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCFID(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode based on instruction
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to floating point
    ss << "cvtsi2sd xmm" << frt << ", r" << frb << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCFIDS(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode based on instruction
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to single precision and back
    ss << "cvtsi2ss xmm" << frt << ", r" << frb << "\n";
    ss << "cvtss2sd xmm" << frt << ", xmm" << frt << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCFIDU(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode based on instruction
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to floating point
    ss << "cvtsi2sd xmm" << frt << ", r" << frb << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFCFIDUS(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    // Save current rounding mode
    SaveFPRoundingMode();
    
    // Set rounding mode based on instruction
    SetFPRoundingMode(PPCRegisterMap::FPRoundingMode::ROUND_TOWARD_ZERO);
    
    // Convert to single precision and back
    ss << "cvtsi2ss xmm" << frt << ", r" << frb << "\n";
    ss << "cvtss2sd xmm" << frt << ", xmm" << frt << "\n";
    
    // Restore original rounding mode
    RestoreFPRoundingMode();
    
    // Update status and check for exceptions
    UpdateFPStatus(PPCRegisterMap::FP_STATUS_XX | PPCRegisterMap::FP_STATUS_FI);
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

// Vector Instructions
void PPCTranslator::TranslateVADDUBM(const DecodedInstruction& inst, std::stringstream& ss) {
    int vrt = PPCRegisterMap::VR_MAP[inst.rd];
    int vra = PPCRegisterMap::VR_MAP[inst.ra];
    int vrb = PPCRegisterMap::VR_MAP[inst.rb];
    
    ss << "vpaddb ymm" << vrt << ", ymm" << vra << ", ymm" << vrb << "\n";
}

void PPCTranslator::TranslateVADDFP(const DecodedInstruction& inst, std::stringstream& ss) {
    int vrt = PPCRegisterMap::VR_MAP[inst.rd];
    int vra = PPCRegisterMap::VR_MAP[inst.ra];
    int vrb = PPCRegisterMap::VR_MAP[inst.rb];
    
    ss << "vaddps ymm" << vrt << ", ymm" << vra << ", ymm" << vrb << "\n";
}

void PPCTranslator::TranslateVAND(const DecodedInstruction& inst, std::stringstream& ss) {
    int vrt = PPCRegisterMap::VR_MAP[inst.rd];
    int vra = PPCRegisterMap::VR_MAP[inst.ra];
    int vrb = PPCRegisterMap::VR_MAP[inst.rb];
    
    ss << "vpand ymm" << vrt << ", ymm" << vra << ", ymm" << vrb << "\n";
}

void PPCTranslator::TranslateVOR(const DecodedInstruction& inst, std::stringstream& ss) {
    int vrt = PPCRegisterMap::VR_MAP[inst.rd];
    int vra = PPCRegisterMap::VR_MAP[inst.ra];
    int vrb = PPCRegisterMap::VR_MAP[inst.rb];
    
    ss << "vpor ymm" << vrt << ", ymm" << vra << ", ymm" << vrb << "\n";
}

void PPCTranslator::TranslateVXOR(const DecodedInstruction& inst, std::stringstream& ss) {
    int vrt = PPCRegisterMap::VR_MAP[inst.rd];
    int vra = PPCRegisterMap::VR_MAP[inst.ra];
    int vrb = PPCRegisterMap::VR_MAP[inst.rb];
    
    ss << "vpxor ymm" << vrt << ", ymm" << vra << ", ymm" << vrb << "\n";
}

// FMA Instructions with Different Operand Orders
void PPCTranslator::TranslateFMADD_132(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "vfmadd132sd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFMADD_213(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "vfmadd213sd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFMADD_231(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "vfmadd231sd xmm" << frt << ", xmm" << fra << ", xmm" << frb << "\n";
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

// Floating Point Rounding Mode Management
void PPCTranslator::SetFPRoundingMode(PPCRegisterMap::FPRoundingMode mode) {
    ss << "stmxcsr [rip + mxcsr]\n";
    ss << "mov eax, [rip + mxcsr]\n";
    ss << "and eax, ~0x6000\n";  // Clear rounding mode bits
    ss << "or eax, " << static_cast<int>(mode) << " << 13\n";  // Set new rounding mode
    ss << "mov [rip + mxcsr], eax\n";
    ss << "ldmxcsr [rip + mxcsr]\n";
}

PPCRegisterMap::FPRoundingMode PPCTranslator::GetFPRoundingMode() {
    ss << "stmxcsr [rip + mxcsr]\n";
    ss << "mov eax, [rip + mxcsr]\n";
    ss << "shr eax, 13\n";
    ss << "and eax, 3\n";
    return PPCRegisterMap::FPRoundingMode::ROUND_TO_NEAREST;  // Placeholder
}

void PPCTranslator::SaveFPRoundingMode() {
    ss << "stmxcsr [rip + mxcsr_save]\n";
}

void PPCTranslator::RestoreFPRoundingMode() {
    ss << "mov eax, [rip + mxcsr_save]\n";
    ss << "mov [rip + mxcsr], eax\n";
    ss << "ldmxcsr [rip + mxcsr]\n";
}

// Floating Point Exception Handling
void PPCTranslator::HandleFPException(uint32_t status_bits) {
    // Check for specific exceptions
    if (status_bits & PPCRegisterMap::FP_STATUS_VX) {
        ss << "call handle_invalid_operation\n";
    }
    if (status_bits & PPCRegisterMap::FP_STATUS_OX) {
        ss << "call handle_overflow\n";
    }
    if (status_bits & PPCRegisterMap::FP_STATUS_UX) {
        ss << "call handle_underflow\n";
    }
    if (status_bits & PPCRegisterMap::FP_STATUS_ZX) {
        ss << "call handle_zero_divide\n";
    }
    if (status_bits & PPCRegisterMap::FP_STATUS_XX) {
        ss << "call handle_inexact\n";
    }
}

void PPCTranslator::EnableFPException(uint32_t exception_bits) {
    uint32_t current_status = GetFPStatus();
    current_status |= exception_bits;
    SetFPStatus(current_status);
}

void PPCTranslator::DisableFPException(uint32_t exception_bits) {
    uint32_t current_status = GetFPStatus();
    current_status &= ~exception_bits;
    SetFPStatus(current_status);
}

bool PPCTranslator::IsFPExceptionEnabled(uint32_t exception_bits) {
    uint32_t current_status = GetFPStatus();
    return (current_status & exception_bits) != 0;
}

// Additional Complex Floating Point Operations
void PPCTranslator::TranslateFSEL(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int fra = PPCRegisterMap::FPR_MAP[inst.ra];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    int frc = PPCRegisterMap::FPR_MAP[inst.rc];
    
    ss << "ucomisd xmm" << fra << ", xmm" << fra << "\n";
    ss << "jz .Lsel_else\n";
    ss << "movsd xmm" << frt << ", xmm" << frb << "\n";
    ss << "jmp .Lsel_end\n";
    ss << ".Lsel_else:\n";
    ss << "movsd xmm" << frt << ", xmm" << frc << "\n";
    ss << ".Lsel_end:\n";
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFRSP(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "cvtsd2ss xmm" << frt << ", xmm" << frb << "\n";
    ss << "cvtss2sd xmm" << frt << ", xmm" << frt << "\n";
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

void PPCTranslator::TranslateFRE(const DecodedInstruction& inst, std::stringstream& ss) {
    int frt = PPCRegisterMap::FPR_MAP[inst.rd];
    int frb = PPCRegisterMap::FPR_MAP[inst.rb];
    
    ss << "movsd xmm1, [rip + one_constant]\n";
    ss << "divsd xmm" << frt << ", xmm1, xmm" << frb << "\n";
    
    if (inst.rc) {
        ss << "test xmm" << frt << ", xmm" << frt << "\n";
    }
}

} // namespace fable2::ppc 