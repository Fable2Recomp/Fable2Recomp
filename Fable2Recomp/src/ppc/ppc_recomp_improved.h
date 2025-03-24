#pragma once

#include <cstdint>
#include <string>
#include <sstream>
#include <array>

namespace fable2::ppc {

// PPC Register definitions
enum class PPCRegister : uint8_t {
    R0 = 0, R1 = 1, R2 = 2, R3 = 3, R4 = 4, R5 = 5, R6 = 6, R7 = 7,
    R8 = 8, R9 = 9, R10 = 10, R11 = 11, R12 = 12, R13 = 13, R14 = 14, R15 = 15,
    R16 = 16, R17 = 17, R18 = 18, R19 = 19, R20 = 20, R21 = 21, R22 = 22, R23 = 23,
    R24 = 24, R25 = 25, R26 = 26, R27 = 27, R28 = 28, R29 = 29, R30 = 30, R31 = 31
};

// PPC Floating Point Register definitions
enum class PPCFPR : uint8_t {
    F0 = 0, F1 = 1, F2 = 2, F3 = 3, F4 = 4, F5 = 5, F6 = 6, F7 = 7,
    F8 = 8, F9 = 9, F10 = 10, F11 = 11, F12 = 12, F13 = 13, F14 = 14, F15 = 15,
    F16 = 16, F17 = 17, F18 = 18, F19 = 19, F20 = 20, F21 = 21, F22 = 22, F23 = 23,
    F24 = 24, F25 = 25, F26 = 26, F27 = 27, F28 = 28, F29 = 29, F30 = 30, F31 = 31
};

// PPC Vector Register definitions
enum class PPCVR : uint8_t {
    V0 = 0, V1 = 1, V2 = 2, V3 = 3, V4 = 4, V5 = 5, V6 = 6, V7 = 7,
    V8 = 8, V9 = 9, V10 = 10, V11 = 11, V12 = 12, V13 = 13, V14 = 14, V15 = 15,
    V16 = 16, V17 = 17, V18 = 18, V19 = 19, V20 = 20, V21 = 21, V22 = 22, V23 = 23,
    V24 = 24, V25 = 25, V26 = 26, V27 = 27, V28 = 28, V29 = 29, V30 = 30, V31 = 31
};

// Register mapping structure
struct PPCRegisterMap {
    // GPR (General Purpose Register) mapping
    static constexpr std::array<int, 32> GPR_MAP = {
        // r0-r31 mapping to x64 registers
        // Use callee-saved registers for frequently used PPC registers
        12, 13, 14, 15,  // r0-r3
        3, 5, 6, 7,      // r4-r7 (rbx, rbp, rsi, rdi)
        8, 9, 10, 11,    // r8-r11
        0, 1, 2, 4,      // r12-r15 (rax, rcx, rdx, rsp)
        16, 17, 18, 19,  // r16-r19
        20, 21, 22, 23,  // r20-r23
        24, 25, 26, 27,  // r24-r27
        28, 29, 30, 31   // r28-r31
    };
    
    // FPR (Floating Point Register) mapping
    static constexpr std::array<int, 32> FPR_MAP = {
        // f0-f31 mapping to x64 SSE registers
        // Use callee-saved registers for frequently used FPRs
        0, 1, 2, 3,      // f0-f3 (xmm0-xmm3)
        4, 5, 6, 7,      // f4-f7 (xmm4-xmm7)
        8, 9, 10, 11,    // f8-f11 (xmm8-xmm11)
        12, 13, 14, 15,  // f12-f15 (xmm12-xmm15)
        16, 17, 18, 19,  // f16-f19 (xmm16-xmm19)
        20, 21, 22, 23,  // f20-f23 (xmm20-xmm23)
        24, 25, 26, 27,  // f24-f27 (xmm24-xmm27)
        28, 29, 30, 31   // f28-f31 (xmm28-xmm31)
    };
    
    // Floating point constants
    static constexpr uint64_t FP_SIGN_MASK = 0x8000000000000000ULL;
    static constexpr uint64_t FP_ABS_MASK = 0x7FFFFFFFFFFFFFFFULL;
    static constexpr uint64_t FP_NAN_MASK = 0x7FF0000000000000ULL;
    static constexpr uint64_t FP_INF_MASK = 0x7FF0000000000000ULL;
    static constexpr uint64_t FP_DENORM_MASK = 0x000FFFFFFFFFFFFFULL;
    
    // Floating point rounding modes
    enum class FPRoundingMode {
        ROUND_TO_NEAREST = 0,
        ROUND_TOWARD_ZERO = 1,
        ROUND_TOWARD_POSITIVE = 2,
        ROUND_TOWARD_NEGATIVE = 3
    };
    
    // Floating point status bits
    static constexpr uint32_t FP_STATUS_FX = 0x80000000;  // Exception summary
    static constexpr uint32_t FP_STATUS_FEX = 0x40000000; // Enabled exception summary
    static constexpr uint32_t FP_STATUS_VX = 0x20000000;  // Invalid operation
    static constexpr uint32_t FP_STATUS_OX = 0x10000000;  // Overflow
    static constexpr uint32_t FP_STATUS_UX = 0x08000000;  // Underflow
    static constexpr uint32_t FP_STATUS_ZX = 0x04000000;  // Zero divide
    static constexpr uint32_t FP_STATUS_XX = 0x02000000;  // Inexact
    static constexpr uint32_t FP_STATUS_VXSNAN = 0x01000000; // Signaling NaN
    static constexpr uint32_t FP_STATUS_VXISI = 0x00800000;  // Invalid square root
    static constexpr uint32_t FP_STATUS_VXIDI = 0x00400000;  // Invalid divide
    static constexpr uint32_t FP_STATUS_VXZDZ = 0x00200000;  // Zero divide
    static constexpr uint32_t FP_STATUS_VXIMZ = 0x00100000;  // Invalid multiply
    static constexpr uint32_t FP_STATUS_VXVC = 0x00080000;   // Invalid compare
    static constexpr uint32_t FP_STATUS_FR = 0x00040000;     // Fraction rounded
    static constexpr uint32_t FP_STATUS_FI = 0x00020000;     // Fraction inexact
    static constexpr uint32_t FP_STATUS_FPRF = 0x0001F000;   // Floating point result flags
    static constexpr uint32_t FP_STATUS_C = 0x00001000;      // Class descriptor
    static constexpr uint32_t FP_STATUS_FPCC = 0x00000F00;   // Floating point condition code
    static constexpr uint32_t FP_STATUS_VE = 0x00000080;     // Invalid operation enable
    static constexpr uint32_t FP_STATUS_OE = 0x00000040;     // Overflow enable
    static constexpr uint32_t FP_STATUS_UE = 0x00000020;     // Underflow enable
    static constexpr uint32_t FP_STATUS_ZE = 0x00000010;     // Zero divide enable
    static constexpr uint32_t FP_STATUS_XE = 0x00000008;     // Inexact enable
    static constexpr uint32_t FP_STATUS_NI = 0x00000004;     // Non-IEEE mode
    static constexpr uint32_t FP_STATUS_RN = 0x00000003;     // Rounding mode
    
    // VR (Vector Register) mapping
    static constexpr std::array<int, 32> VR_MAP = {
        // v0-v31 mapping to x64 AVX registers
        // ... map vector registers
    };
};

// Memory management structure
struct PPCMemoryManager {
    // Allocate executable memory
    static void* AllocateCode(size_t size) {
        #ifdef _WIN32
            return VirtualAlloc(nullptr, size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        #else
            void* ptr = mmap(nullptr, size, PROT_READ | PROT_WRITE | PROT_EXEC,
                           MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
            return (ptr == MAP_FAILED) ? nullptr : ptr;
        #endif
    }
    
    // Protect memory
    static void ProtectMemory(void* addr, size_t size, bool executable) {
        #ifdef _WIN32
            DWORD oldProtect;
            VirtualProtect(addr, size, executable ? PAGE_EXECUTE_READ : PAGE_READWRITE, &oldProtect);
        #else
            mprotect(addr, size, executable ? (PROT_READ | PROT_EXEC) : (PROT_READ | PROT_WRITE));
        #endif
    }
    
    // Free memory
    static void FreeMemory(void* addr, size_t size) {
        #ifdef _WIN32
            VirtualFree(addr, 0, MEM_RELEASE);
        #else
            munmap(addr, size);
        #endif
    }
};

// Cache management structure
struct PPCCacheManager {
    // Invalidate instruction cache
    static void InvalidateInstructionCache(void* addr, size_t size) {
        #ifdef _WIN32
            FlushInstructionCache(GetCurrentProcess(), addr, size);
        #else
            __builtin___clear_cache(addr, static_cast<char*>(addr) + size);
        #endif
    }
    
    // Flush data cache
    static void FlushDataCache(void* addr, size_t size) {
        #ifdef _WIN32
            FlushViewOfFile(addr, size);
        #else
            // Implement data cache flushing for other platforms
        #endif
    }
};

// Instruction translation structure
struct PPCTranslator {
    // Translate PPC instruction to x64
    static void TranslateInstruction(uint32_t ppc_inst, std::stringstream& x64_code) {
        DecodedInstruction inst = Decoder::Decode(ppc_inst);
        
        switch (inst.opcode) {
            case Opcode::ADD:
                TranslateADD(inst, x64_code);
                break;
            case Opcode::ADDI:
                TranslateADDI(inst, x64_code);
                break;
            case Opcode::ADDIS:
                TranslateADDIS(inst, x64_code);
                break;
            case Opcode::SUBF:
                TranslateSUBF(inst, x64_code);
                break;
            case Opcode::MULLW:
                TranslateMULLW(inst, x64_code);
                break;
            case Opcode::DIVW:
                TranslateDIVW(inst, x64_code);
                break;
            case Opcode::AND:
                TranslateAND(inst, x64_code);
                break;
            case Opcode::OR:
                TranslateOR(inst, x64_code);
                break;
            case Opcode::XOR:
                TranslateXOR(inst, x64_code);
                break;
            case Opcode::SLW:
                TranslateSLW(inst, x64_code);
                break;
            case Opcode::SRW:
                TranslateSRW(inst, x64_code);
                break;
            case Opcode::SRAW:
                TranslateSRAW(inst, x64_code);
                break;
            case Opcode::B:
                TranslateB(inst, x64_code);
                break;
            case Opcode::BL:
                TranslateBL(inst, x64_code);
                break;
            case Opcode::BC:
                TranslateBC(inst, x64_code);
                break;
            
            // Floating Point Instructions
            case Opcode::LFS:
                TranslateLFS(inst, x64_code);
                break;
            case Opcode::LFD:
                TranslateLFD(inst, x64_code);
                break;
            case Opcode::STFS:
                TranslateSTFS(inst, x64_code);
                break;
            case Opcode::STFD:
                TranslateSTFD(inst, x64_code);
                break;
            case Opcode::FADD:
                TranslateFADD(inst, x64_code);
                break;
            case Opcode::FSUB:
                TranslateFSUB(inst, x64_code);
                break;
            case Opcode::FMUL:
                TranslateFMUL(inst, x64_code);
                break;
            case Opcode::FDIV:
                TranslateFDIV(inst, x64_code);
                break;
            
            // Vector Instructions
            case Opcode::VADDUBM:
                TranslateVADDUBM(inst, x64_code);
                break;
            case Opcode::VADDFP:
                TranslateVADDFP(inst, x64_code);
                break;
            case Opcode::VAND:
                TranslateVAND(inst, x64_code);
                break;
            case Opcode::VOR:
                TranslateVOR(inst, x64_code);
                break;
            case Opcode::VXOR:
                TranslateVXOR(inst, x64_code);
                break;
        }
    }
    
    // Vector instruction translation
    static void TranslateVectorInstruction(uint32_t ppc_inst, std::stringstream& x64_code) {
        // Handle VMX/VSX instructions
    }
    
private:
    // Integer Arithmetic Instructions
    static void TranslateADD(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateADDI(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateADDIS(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateSUBF(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateMULLW(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateDIVW(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Logical Instructions
    static void TranslateAND(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateOR(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateXOR(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Shift and Rotate Instructions
    static void TranslateSLW(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateSRW(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateSRAW(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Branch Instructions
    static void TranslateB(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateBL(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateBC(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Floating Point Instructions
    static void TranslateLFS(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateLFD(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateSTFS(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateSTFD(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFADD(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFSUB(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFMUL(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFDIV(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Additional Floating Point Instructions
    static void TranslateFMADD(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFMSUB(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMADD(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMSUB(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Additional FMA Instructions with Different Operand Orders
    static void TranslateFMADD_132(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFMADD_213(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFMADD_231(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFMSUB_132(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFMSUB_213(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFMSUB_231(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMADD_132(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMADD_213(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMADD_231(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMSUB_132(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMSUB_213(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFNMSUB_231(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Additional Complex Floating Point Instructions
    static void TranslateFRSQRTE(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFRES(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFRSQRTES(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFRESS(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTID(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIDZ(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIDU(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIDUZ(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFID(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFIDS(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFIDU(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFIDUS(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Additional Complex Floating Point Operations
    static void TranslateFSEL(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFSQRT(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFRSQRTE(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFRE(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFRSP(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIW(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIWZ(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTID(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIDZ(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIDU(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCTIDUZ(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFID(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFIDS(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFIDU(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateFCFIDUS(const DecodedInstruction& inst, std::stringstream& ss);
    
    // Floating Point Status Management
    static void UpdateFPStatus(uint32_t status_bits);
    static void CheckFPException(uint32_t status_bits);
    static void SetFPStatus(uint32_t status_bits);
    static void ClearFPStatus(uint32_t status_bits);
    static uint32_t GetFPStatus();
    
    // Floating Point Rounding Mode Management
    static void SetFPRoundingMode(PPCRegisterMap::FPRoundingMode mode);
    static PPCRegisterMap::FPRoundingMode GetFPRoundingMode();
    static void SaveFPRoundingMode();
    static void RestoreFPRoundingMode();
    
    // Floating Point Exception Handling
    static void HandleFPException(uint32_t status_bits);
    static void EnableFPException(uint32_t exception_bits);
    static void DisableFPException(uint32_t exception_bits);
    static bool IsFPExceptionEnabled(uint32_t exception_bits);
    
    // Vector Instructions
    static void TranslateVADDUBM(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateVADDFP(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateVAND(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateVOR(const DecodedInstruction& inst, std::stringstream& ss);
    static void TranslateVXOR(const DecodedInstruction& inst, std::stringstream& ss);
};

} // namespace fable2::ppc 