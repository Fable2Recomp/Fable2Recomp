#include "shader_bank.hpp"
#include <iostream>
#include <iomanip>

void PrintShaderInfo(const gpu::shader::ShaderEntry& shader) {
    std::cout << "Shader: " << shader.name << "\n";
    std::cout << "Type: " << shader.type << "\n";
    std::cout << "Version: " << shader.version << "\n";
    std::cout << "Bytecode size: " << shader.bytecode.size() << " bytes\n";
    
    // Print first 32 bytes of bytecode in hex
    std::cout << "Bytecode preview: ";
    for (size_t i = 0; i < std::min(size_t(32), shader.bytecode.size()); ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(shader.bytecode[i]) << " ";
    }
    std::cout << std::dec << "\n\n";
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <shader_bank_file>\n";
        return 1;
    }

    gpu::shader::ShaderBank bank;
    if (!bank.LoadFromFile(argv[1])) {
        std::cerr << "Failed to load shader bank: " << argv[1] << "\n";
        return 1;
    }

    std::cout << "Successfully loaded shader bank\n";
    std::cout << "Total shaders: " << bank.GetShaders().size() << "\n\n";

    // Print info for each shader
    for (const auto& shader : bank.GetShaders()) {
        PrintShaderInfo(shader);
    }

    return 0;
} 