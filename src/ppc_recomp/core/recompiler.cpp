#include "ppc/recompiler.h"
#include "ppc/utils.h"
#include <sstream>
#include <unordered_map>

namespace fable2::ppc {

Recompiler::Recompiler() {}

Recompiler::~Recompiler() {}

void Recompiler::AddBlock(uint32_t address, const std::vector<uint32_t>& instructions) {
    Block block;
    block.address = address;
    block.instructions = instructions;
    block.is_terminated = false;
    blocks_.push_back(block);
}

void Recompiler::Recompile() {
    for (auto& block : blocks_) {
        RecompileBlock(block);
    }
}

void Recompiler::RecompileBlock(Block& block) {
    std::stringstream ss;
    
    // Prologue
    ss << "push rbp\n";
    ss << "mov rbp, rsp\n";
    ss << "sub rsp, 0x1000\n"; // Allocate stack space for local variables
    
    // Save callee-saved registers
    ss << "push rbx\n";
    ss << "push r12\n";
    ss << "push r13\n";
    ss << "push r14\n";
    ss << "push r15\n";
    
    // Load PPC context
    ss << "mov r12, [rdi]\n"; // r12 = PPC context pointer
    
    for (const auto& instruction : block.instructions) {
        DecodedInstruction inst = Decoder::Decode(instruction);
        
        switch (inst.opcode) {
            case Opcode::ADD:
            case Opcode::ADDI:
            case Opcode::ADDIS:
            case Opcode::SUBF:
            case Opcode::MULLW:
            case Opcode::DIVW:
                RecompileIntegerArithmetic(inst, ss);
                break;
                
            case Opcode::AND:
            case Opcode::OR:
            case Opcode::XOR:
            case Opcode::NAND:
            case Opcode::NOR:
                RecompileLogical(inst, ss);
                break;
                
            case Opcode::SLW:
            case Opcode::SRW:
            case Opcode::SRAW:
            case Opcode::SRAWI:
                RecompileShiftRotate(inst, ss);
                break;
                
            case Opcode::CMP:
            case Opcode::CMPI:
            case Opcode::CMPL:
            case Opcode::CMPLI:
                RecompileCompare(inst, ss);
                break;
                
            case Opcode::B:
            case Opcode::BL:
            case Opcode::BC:
            case Opcode::BCLR:
            case Opcode::BCCTR:
                RecompileBranch(inst, ss);
                break;
                
            case Opcode::LBZ:
            case Opcode::LHZ:
            case Opcode::LWZ:
            case Opcode::LHA:
            case Opcode::LWA:
            case Opcode::STB:
            case Opcode::STH:
            case Opcode::STW:
                RecompileLoadStore(inst, ss);
                break;
                
            case Opcode::LFS:
            case Opcode::LFD:
            case Opcode::STFS:
            case Opcode::STFD:
            case Opcode::FADD:
            case Opcode::FSUB:
            case Opcode::FMUL:
            case Opcode::FDIV:
                RecompileFloatingPoint(inst, ss);
                break;
                
            case Opcode::SC:
            case Opcode::RFI:
            case Opcode::RFID:
            case Opcode::MTSPR:
            case Opcode::MFSPR:
                RecompileSystem(inst, ss);
                break;
        }
        
        if (block.is_terminated) {
            break;
        }
    }
    
    // Epilogue
    ss << "pop r15\n";
    ss << "pop r14\n";
    ss << "pop r13\n";
    ss << "pop r12\n";
    ss << "pop rbx\n";
    ss << "mov rsp, rbp\n";
    ss << "pop rbp\n";
    ss << "ret\n";
    
    block.x64_code = ss.str();
}

void Recompiler::RecompileIntegerArithmetic(const DecodedInstruction& inst, std::stringstream& ss) {
    std::string rd = GetPPCRegister(inst.rd);
    std::string ra = GetPPCRegister(inst.ra);
    std::string rb = GetPPCRegister(inst.rb);
    
    switch (inst.opcode) {
        case Opcode::ADD:
            ss << "add " << rd << ", " << ra << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::ADDI:
            ss << "add " << rd << ", " << ra << ", " << static_cast<int16_t>(inst.imm) << "\n";
            break;
            
        case Opcode::ADDIS:
            ss << "add " << rd << ", " << ra << ", " << (static_cast<int16_t>(inst.imm) << 16) << "\n";
            break;
            
        case Opcode::SUBF:
            ss << "sub " << rd << ", " << rb << ", " << ra << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::MULLW:
            ss << "imul " << rd << ", " << ra << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::DIVW:
            ss << "mov eax, " << ra << "\n";
            ss << "cdq\n";
            ss << "idiv " << rb << "\n";
            ss << "mov " << rd << ", rax\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
    }
}

void Recompiler::RecompileLogical(const DecodedInstruction& inst, std::stringstream& ss) {
    std::string ra = GetPPCRegister(inst.ra);
    std::string rs = GetPPCRegister(inst.rs);
    std::string rb = GetPPCRegister(inst.rb);
    
    switch (inst.opcode) {
        case Opcode::AND:
            ss << "and " << ra << ", " << rs << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::OR:
            ss << "or " << ra << ", " << rs << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::XOR:
            ss << "xor " << ra << ", " << rs << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::NAND:
            ss << "and " << ra << ", " << rs << ", " << rb << "\n";
            ss << "not " << ra << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::NOR:
            ss << "or " << ra << ", " << rs << ", " << rb << "\n";
            ss << "not " << ra << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
    }
}

void Recompiler::RecompileShiftRotate(const DecodedInstruction& inst, std::stringstream& ss) {
    std::string ra = GetPPCRegister(inst.ra);
    std::string rs = GetPPCRegister(inst.rs);
    std::string rb = GetPPCRegister(inst.rb);
    
    switch (inst.opcode) {
        case Opcode::SLW:
            ss << "mov cl, " << rb << "\n";
            ss << "shl " << ra << ", cl\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::SRW:
            ss << "mov cl, " << rb << "\n";
            ss << "shr " << ra << ", cl\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::SRAW:
            ss << "mov cl, " << rb << "\n";
            ss << "sar " << ra << ", cl\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::SRAWI:
            ss << "sar " << ra << ", " << inst.imm << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
    }
}

void Recompiler::RecompileCompare(const DecodedInstruction& inst, std::stringstream& ss) {
    std::string ra = GetPPCRegister(inst.ra);
    std::string rb = GetPPCRegister(inst.rb);
    
    switch (inst.opcode) {
        case Opcode::CMP:
            ss << "cmp " << ra << ", " << rb << "\n";
            break;
            
        case Opcode::CMPI:
            ss << "cmp " << ra << ", " << static_cast<int16_t>(inst.imm) << "\n";
            break;
            
        case Opcode::CMPL:
            ss << "cmp " << ra << ", " << rb << "\n";
            break;
            
        case Opcode::CMPLI:
            ss << "cmp " << ra << ", " << static_cast<uint16_t>(inst.imm) << "\n";
            break;
    }
    
    // Update condition register field
    UpdateConditionCode(inst);
}

void Recompiler::RecompileBranch(const DecodedInstruction& inst, std::stringstream& ss) {
    switch (inst.opcode) {
        case Opcode::B:
            if (inst.raw & AA_MASK) {
                ss << "jmp " << (inst.imm << 2) << "\n";
            } else {
                ss << "jmp " << (block.address + inst.imm << 2) << "\n";
            }
            break;
            
        case Opcode::BL:
            if (inst.raw & AA_MASK) {
                ss << "call " << (inst.imm << 2) << "\n";
            } else {
                ss << "call " << (block.address + inst.imm << 2) << "\n";
            }
            break;
            
        case Opcode::BC:
            ss << GetConditionCode(inst) << " " << (block.address + (inst.imm << 2)) << "\n";
            break;
            
        case Opcode::BCLR:
            ss << GetConditionCode(inst) << " " << GetPPCRegister(8) << "\n"; // LR
            break;
            
        case Opcode::BCCTR:
            ss << GetConditionCode(inst) << " " << GetPPCRegister(9) << "\n"; // CTR
            break;
    }
    
    block.is_terminated = true;
}

void Recompiler::RecompileLoadStore(const DecodedInstruction& inst, std::stringstream& ss) {
    std::string rd = GetPPCRegister(inst.rd);
    std::string ra = GetPPCRegister(inst.ra);
    std::string rs = GetPPCRegister(inst.rs);
    
    switch (inst.opcode) {
        case Opcode::LBZ:
            ss << "movzx " << rd << ", byte ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "]\n";
            break;
            
        case Opcode::LHZ:
            ss << "movzx " << rd << ", word ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "]\n";
            break;
            
        case Opcode::LWZ:
            ss << "mov " << rd << ", dword ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "]\n";
            break;
            
        case Opcode::LHA:
            ss << "movsx " << rd << ", word ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "]\n";
            break;
            
        case Opcode::LWA:
            ss << "movsxd " << rd << ", dword ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "]\n";
            break;
            
        case Opcode::STB:
            ss << "mov byte ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "], " << rs << "\n";
            break;
            
        case Opcode::STH:
            ss << "mov word ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "], " << rs << "\n";
            break;
            
        case Opcode::STW:
            ss << "mov dword ptr [" << ra << " + " << static_cast<int16_t>(inst.imm) << "], " << rs << "\n";
            break;
    }
}

void Recompiler::RecompileFloatingPoint(const DecodedInstruction& inst, std::stringstream& ss) {
    std::string rd = GetFPRegister(inst.rd);
    std::string ra = GetFPRegister(inst.ra);
    std::string rb = GetFPRegister(inst.rb);
    
    switch (inst.opcode) {
        case Opcode::LFS:
            ss << "movss " << rd << ", dword ptr [" << GetPPCRegister(inst.ra) << " + " << static_cast<int16_t>(inst.imm) << "]\n";
            break;
            
        case Opcode::LFD:
            ss << "movsd " << rd << ", qword ptr [" << GetPPCRegister(inst.ra) << " + " << static_cast<int16_t>(inst.imm) << "]\n";
            break;
            
        case Opcode::STFS:
            ss << "movss dword ptr [" << GetPPCRegister(inst.ra) << " + " << static_cast<int16_t>(inst.imm) << "], " << rd << "\n";
            break;
            
        case Opcode::STFD:
            ss << "movsd qword ptr [" << GetPPCRegister(inst.ra) << " + " << static_cast<int16_t>(inst.imm) << "], " << rd << "\n";
            break;
            
        case Opcode::FADD:
            ss << "addsd " << rd << ", " << ra << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::FSUB:
            ss << "subsd " << rd << ", " << ra << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::FMUL:
            ss << "mulsd " << rd << ", " << ra << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
            
        case Opcode::FDIV:
            ss << "divsd " << rd << ", " << ra << ", " << rb << "\n";
            if (inst.rc) UpdateConditionCode(inst);
            break;
    }
}

void Recompiler::RecompileSystem(const DecodedInstruction& inst, std::stringstream& ss) {
    switch (inst.opcode) {
        case Opcode::SC:
            ss << "int 0x80\n"; // System call
            block.is_terminated = true;
            break;
            
        case Opcode::RFI:
            ss << "ret\n";
            block.is_terminated = true;
            break;
            
        case Opcode::RFID:
            ss << "ret\n";
            block.is_terminated = true;
            break;
            
        case Opcode::MTSPR:
            ss << "mov [" << GetPPCRegister(inst.rs) << "], " << SPRToString(static_cast<SPR>(inst.spr)) << "\n";
            break;
            
        case Opcode::MFSPR:
            ss << "mov " << GetPPCRegister(inst.rd) << ", " << SPRToString(static_cast<SPR>(inst.spr)) << "\n";
            break;
    }
}

void Recompiler::UpdateConditionCode(const DecodedInstruction& inst) {
    // TODO: Implement condition code updates
}

std::string Recompiler::GetConditionCode(const DecodedInstruction& inst) {
    // TODO: Implement condition code retrieval
    return "cr0"; // Default to CR0 for now
}

std::string Recompiler::AllocateRegister() {
    // TODO: Implement register allocation
    return "rax"; // Default to rax for now
}

void Recompiler::FreeRegister(const std::string& reg) {
    // TODO: Implement register freeing
}

std::string Recompiler::GetPPCRegister(uint32_t reg_num) {
    static std::unordered_map<uint32_t, std::string> reg_map;
    
    if (reg_map.find(reg_num) == reg_map.end()) {
        reg_map[reg_num] = AllocateRegister();
    }
    
    return reg_map[reg_num];
}

std::string Recompiler::GetFPRegister(uint32_t reg_num) {
    static std::unordered_map<uint32_t, std::string> reg_map;
    
    if (reg_map.find(reg_num) == reg_map.end()) {
        reg_map[reg_num] = "xmm" + std::to_string(reg_num % 16);
    }
    
    return reg_map[reg_num];
}

const std::string& Recompiler::GetX64Code(uint32_t address) const {
    for (const auto& block : blocks_) {
        if (block.address == address) {
            return block.x64_code;
        }
    }
    static const std::string empty;
    return empty;
}

} // namespace fable2::ppc 