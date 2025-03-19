#pragma once

#include <cstdint>

namespace fable2::ppc {

// PPC Instruction Format Masks
constexpr uint32_t OPCODE_MASK = 0xFC000000;
constexpr uint32_t RS_MASK = 0x03E00000;
constexpr uint32_t RA_MASK = 0x001F0000;
constexpr uint32_t RB_MASK = 0x0000F800;
constexpr uint32_t RD_MASK = 0x0000F800;
constexpr uint32_t OE_MASK = 0x00000400;
constexpr uint32_t Rc_MASK = 0x00000001;
constexpr uint32_t SIMM_MASK = 0x0000FFFF;
constexpr uint32_t UIMM_MASK = 0x0000FFFF;
constexpr uint32_t LI_MASK = 0x03FFFFFC;
constexpr uint32_t AA_MASK = 0x00000002;
constexpr uint32_t LK_MASK = 0x00000001;

// PPC Opcodes
enum class Opcode : uint32_t {
    // Integer Arithmetic
    ADD = 0x7C000214,
    ADDI = 0x38000000,
    ADDIS = 0x3C000000,
    SUBF = 0x7C000050,
    MULLW = 0x7C0001D6,
    DIVW = 0x7C0003D6,
    
    // Logical
    AND = 0x7C000038,
    OR = 0x7C000378,
    XOR = 0x7C000278,
    NAND = 0x7C0003B8,
    NOR = 0x7C0000F8,
    
    // Shift and Rotate
    SLW = 0x7C000030,
    SRW = 0x7C000430,
    SRAW = 0x7C000630,
    SRAWI = 0x7C000670,
    
    // Compare
    CMP = 0x7C000000,
    CMPI = 0x2C000000,
    CMPL = 0x7C000040,
    CMPLI = 0x28000000,
    
    // Branch
    B = 0x48000000,
    BL = 0x48000001,
    BC = 0x40000000,
    BCLR = 0x4C000020,
    BCCTR = 0x4C000420,
    
    // Load/Store
    LBZ = 0x88000000,
    LHZ = 0xA0000000,
    LWZ = 0x80000000,
    LHA = 0xA8000000,
    LWA = 0xE8000002,
    STB = 0x98000000,
    STH = 0xB0000000,
    STW = 0x90000000,
    
    // Floating Point
    LFS = 0xC0000000,
    LFD = 0xC8000000,
    STFS = 0xD0000000,
    STFD = 0xD8000000,
    FADD = 0xFC00002A,
    FSUB = 0xFC000028,
    FMUL = 0xFC000032,
    FDIV = 0xFC000024,
    
    // System
    SC = 0x44000002,
    RFI = 0x4C000064,
    RFID = 0x4C000064,
    MTSPR = 0x7C0003A6,
    MFSPR = 0x7C0002A6,
};

// PPC Condition Register Fields
enum class CRField : uint32_t {
    CR0 = 0,
    CR1 = 1,
    CR2 = 2,
    CR3 = 3,
    CR4 = 4,
    CR5 = 5,
    CR6 = 6,
    CR7 = 7
};

// PPC Special Purpose Registers
enum class SPR : uint32_t {
    XER = 1,
    LR = 8,
    CTR = 9,
    DSISR = 18,
    DAR = 19,
    DEC = 22,
    SDR1 = 25,
    SRR0 = 26,
    SRR1 = 27,
    SPRG0 = 272,
    SPRG1 = 273,
    SPRG2 = 274,
    SPRG3 = 275,
    EAR = 282,
    TBL = 284,
    TBU = 285,
    PVR = 287,
    IBAT0U = 528,
    IBAT0L = 529,
    IBAT1U = 530,
    IBAT1L = 531,
    IBAT2U = 532,
    IBAT2L = 533,
    IBAT3U = 534,
    IBAT3L = 535,
    DBAT0U = 536,
    DBAT0L = 537,
    DBAT1U = 538,
    DBAT1L = 539,
    DBAT2U = 540,
    DBAT2L = 541,
    DBAT3U = 542,
    DBAT3L = 543
};

} // namespace fable2::ppc 