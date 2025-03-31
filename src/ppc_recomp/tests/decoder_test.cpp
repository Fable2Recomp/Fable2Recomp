#include <gtest/gtest.h>
#include "ppc/decoder.h"

using namespace fable2::ppc;

TEST(DecoderTest, DecodeAdd) {
    // add r1, r2, r3
    uint32_t instruction = 0x7C011214;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::ADD);
    EXPECT_EQ(inst.rd, 1);
    EXPECT_EQ(inst.ra, 2);
    EXPECT_EQ(inst.rb, 3);
    EXPECT_EQ(inst.oe, false);
    EXPECT_EQ(inst.rc, false);
    EXPECT_EQ(inst.mnemonic, "add r1, r2, r3");
}

TEST(DecoderTest, DecodeAddi) {
    // addi r1, r2, 0x100
    uint32_t instruction = 0x38020100;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::ADDI);
    EXPECT_EQ(inst.rd, 1);
    EXPECT_EQ(inst.ra, 2);
    EXPECT_EQ(inst.imm, 0x100);
    EXPECT_EQ(inst.mnemonic, "addi r1, r2, 256");
}

TEST(DecoderTest, DecodeAddis) {
    // addis r1, r2, 0x100
    uint32_t instruction = 0x3C020100;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::ADDIS);
    EXPECT_EQ(inst.rd, 1);
    EXPECT_EQ(inst.ra, 2);
    EXPECT_EQ(inst.imm, 0x100);
    EXPECT_EQ(inst.mnemonic, "addis r1, r2, 256");
}

TEST(DecoderTest, DecodeSubf) {
    // subf r1, r2, r3
    uint32_t instruction = 0x7C011050;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::SUBF);
    EXPECT_EQ(inst.rd, 1);
    EXPECT_EQ(inst.ra, 2);
    EXPECT_EQ(inst.rb, 3);
    EXPECT_EQ(inst.oe, false);
    EXPECT_EQ(inst.rc, false);
    EXPECT_EQ(inst.mnemonic, "subf r1, r3, r2");
}

TEST(DecoderTest, DecodeMullw) {
    // mullw r1, r2, r3
    uint32_t instruction = 0x7C0119D6;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::MULLW);
    EXPECT_EQ(inst.rd, 1);
    EXPECT_EQ(inst.ra, 2);
    EXPECT_EQ(inst.rb, 3);
    EXPECT_EQ(inst.oe, false);
    EXPECT_EQ(inst.rc, false);
    EXPECT_EQ(inst.mnemonic, "mullw r1, r2, r3");
}

TEST(DecoderTest, DecodeAnd) {
    // and r1, r2, r3
    uint32_t instruction = 0x7C011838;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::AND);
    EXPECT_EQ(inst.ra, 1);
    EXPECT_EQ(inst.rs, 2);
    EXPECT_EQ(inst.rb, 3);
    EXPECT_EQ(inst.rc, false);
    EXPECT_EQ(inst.mnemonic, "and r1, r2, r3");
}

TEST(DecoderTest, DecodeOr) {
    // or r1, r2, r3
    uint32_t instruction = 0x7C011B78;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::OR);
    EXPECT_EQ(inst.ra, 1);
    EXPECT_EQ(inst.rs, 2);
    EXPECT_EQ(inst.rb, 3);
    EXPECT_EQ(inst.rc, false);
    EXPECT_EQ(inst.mnemonic, "or r1, r2, r3");
}

TEST(DecoderTest, DecodeXor) {
    // xor r1, r2, r3
    uint32_t instruction = 0x7C011A78;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::XOR);
    EXPECT_EQ(inst.ra, 1);
    EXPECT_EQ(inst.rs, 2);
    EXPECT_EQ(inst.rb, 3);
    EXPECT_EQ(inst.rc, false);
    EXPECT_EQ(inst.mnemonic, "xor r1, r2, r3");
}

TEST(DecoderTest, DecodeCmp) {
    // cmp 0, r1, r2
    uint32_t instruction = 0x7C010000;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::CMP);
    EXPECT_EQ(inst.crf, CRField::CR0);
    EXPECT_EQ(inst.ra, 1);
    EXPECT_EQ(inst.rb, 2);
    EXPECT_EQ(inst.mnemonic, "cmp 0, r1, r2");
}

TEST(DecoderTest, DecodeB) {
    // b 0x1000
    uint32_t instruction = 0x48001000;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::B);
    EXPECT_EQ(inst.imm, 0x1000);
    EXPECT_EQ(inst.raw & AA_MASK, 0);
    EXPECT_EQ(inst.raw & LK_MASK, 0);
    EXPECT_EQ(inst.mnemonic, "b 4096");
}

TEST(DecoderTest, DecodeBL) {
    // bl 0x1000
    uint32_t instruction = 0x48001001;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::BL);
    EXPECT_EQ(inst.imm, 0x1000);
    EXPECT_EQ(inst.raw & AA_MASK, 0);
    EXPECT_EQ(inst.raw & LK_MASK, 1);
    EXPECT_EQ(inst.mnemonic, "bl 4096");
}

TEST(DecoderTest, DecodeLWZ) {
    // lwz r1, 0x100(r2)
    uint32_t instruction = 0x80020100;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::LWZ);
    EXPECT_EQ(inst.rd, 1);
    EXPECT_EQ(inst.ra, 2);
    EXPECT_EQ(inst.imm, 0x100);
    EXPECT_EQ(inst.mnemonic, "lwz r1, 256(r2)");
}

TEST(DecoderTest, DecodeSTW) {
    // stw r1, 0x100(r2)
    uint32_t instruction = 0x90020100;
    DecodedInstruction inst = Decoder::Decode(instruction);
    
    EXPECT_EQ(inst.opcode, Opcode::STW);
    EXPECT_EQ(inst.rs, 1);
    EXPECT_EQ(inst.ra, 2);
    EXPECT_EQ(inst.imm, 0x100);
    EXPECT_EQ(inst.mnemonic, "stw r1, 256(r2)");
} 