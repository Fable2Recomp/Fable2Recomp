#pragma once

#include <string>
#include <vector>
#include <cstdint>

namespace fable2::ppc {

class CodeGenerator {
public:
    CodeGenerator();
    ~CodeGenerator();

    // Convert assembly string to machine code
    std::vector<uint8_t> GenerateCode(const std::string& assembly);
    
    // Allocate executable memory and write code to it
    void* AllocateExecutableMemory(const std::vector<uint8_t>& code);
    
    // Free executable memory
    void FreeExecutableMemory(void* ptr);

private:
    // Internal helper functions
    void InitializeAssembler();
    void CleanupAssembler();
    
    // Platform-specific implementation
    void* platform_handle_;
};

} // namespace fable2::ppc 