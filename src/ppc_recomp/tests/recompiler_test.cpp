#include <gtest/gtest.h>
#include "ppc/recompiler.h"

using namespace fable2::ppc;

TEST(RecompilerTest, RecompileSimpleAdd) {
    Recompiler recompiler;
    
    // add r1, r2, r3
    std::vector<uint32_t> instructions = {0x7C011214};
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("add"), std::string::npos);
    EXPECT_NE(code.find("r8"), std::string::npos);
    EXPECT_NE(code.find("r9"), std::string::npos);
    EXPECT_NE(code.find("r10"), std::string::npos);
}

TEST(RecompilerTest, RecompileSimpleAddi) {
    Recompiler recompiler;
    
    // addi r1, r2, 0x100
    std::vector<uint32_t> instructions = {0x38020100};
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("add"), std::string::npos);
    EXPECT_NE(code.find("256"), std::string::npos);
}

TEST(RecompilerTest, RecompileSimpleLoadStore) {
    Recompiler recompiler;
    
    // lwz r1, 0x100(r2)
    // stw r1, 0x200(r3)
    std::vector<uint32_t> instructions = {
        0x80020100,  // lwz r1, 0x100(r2)
        0x90030100   // stw r1, 0x100(r3)
    };
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("mov"), std::string::npos);
    EXPECT_NE(code.find("dword ptr"), std::string::npos);
}

TEST(RecompilerTest, RecompileSimpleBranch) {
    Recompiler recompiler;
    
    // b 0x2000
    std::vector<uint32_t> instructions = {0x48002000};
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("jmp"), std::string::npos);
    EXPECT_NE(code.find("8192"), std::string::npos); // 0x2000
}

TEST(RecompilerTest, RecompileSimpleCompare) {
    Recompiler recompiler;
    
    // cmp 0, r1, r2
    std::vector<uint32_t> instructions = {0x7C010000};
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("cmp"), std::string::npos);
    EXPECT_NE(code.find("seto"), std::string::npos);
    EXPECT_NE(code.find("setc"), std::string::npos);
    EXPECT_NE(code.find("setz"), std::string::npos);
    EXPECT_NE(code.find("sets"), std::string::npos);
}

TEST(RecompilerTest, RecompileSimpleLogical) {
    Recompiler recompiler;
    
    // and r1, r2, r3
    std::vector<uint32_t> instructions = {0x7C011838};
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("and"), std::string::npos);
}

TEST(RecompilerTest, RecompileSimpleShift) {
    Recompiler recompiler;
    
    // slw r1, r2, r3
    std::vector<uint32_t> instructions = {0x7C011830};
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("mov cl"), std::string::npos);
    EXPECT_NE(code.find("shl"), std::string::npos);
}

TEST(RecompilerTest, RecompileSimpleFloatingPoint) {
    Recompiler recompiler;
    
    // fadd f1, f2, f3
    std::vector<uint32_t> instructions = {0xFC01102A};
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("addsd"), std::string::npos);
    EXPECT_NE(code.find("xmm"), std::string::npos);
}

TEST(RecompilerTest, RecompileMultipleBlocks) {
    Recompiler recompiler;
    
    // Block 1: add r1, r2, r3
    std::vector<uint32_t> block1 = {0x7C011214};
    recompiler.AddBlock(0x1000, block1);
    
    // Block 2: addi r4, r5, 0x100
    std::vector<uint32_t> block2 = {0x38050100};
    recompiler.AddBlock(0x2000, block2);
    
    recompiler.Recompile();
    
    const std::string& code1 = recompiler.GetX64Code(0x1000);
    const std::string& code2 = recompiler.GetX64Code(0x2000);
    
    EXPECT_NE(code1.find("add"), std::string::npos);
    EXPECT_NE(code2.find("add"), std::string::npos);
    EXPECT_NE(code2.find("256"), std::string::npos);
}

TEST(RecompilerTest, RecompileBlockWithTermination) {
    Recompiler recompiler;
    
    // add r1, r2, r3
    // b 0x3000
    std::vector<uint32_t> instructions = {
        0x7C011214,  // add r1, r2, r3
        0x48003000   // b 0x3000
    };
    recompiler.AddBlock(0x1000, instructions);
    recompiler.Recompile();
    
    const std::string& code = recompiler.GetX64Code(0x1000);
    EXPECT_NE(code.find("add"), std::string::npos);
    EXPECT_NE(code.find("jmp"), std::string::npos);
    EXPECT_NE(code.find("12288"), std::string::npos); // 0x3000
} 