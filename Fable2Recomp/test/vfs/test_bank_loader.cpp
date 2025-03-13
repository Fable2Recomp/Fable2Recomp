#include "bank_loader.hpp"
#include <iostream>
#include <iomanip>

const char* GetBankTypeName(vfs::BankEntryType type) {
    switch (type) {
        case vfs::BankEntryType::Script: return "Script";
        case vfs::BankEntryType::Model: return "Model";
        case vfs::BankEntryType::Texture: return "Texture";
        case vfs::BankEntryType::Animation: return "Animation";
        case vfs::BankEntryType::Sound: return "Sound";
        case vfs::BankEntryType::Shader: return "Shader";
        default: return "Unknown";
    }
}

void PrintEntryInfo(const vfs::BankEntry& entry) {
    std::cout << "Entry: " << entry.name << "\n";
    std::cout << "  Type: " << GetBankTypeName(entry.type) << "\n";
    std::cout << "  Flags: 0x" << std::hex << entry.flags << std::dec << "\n";
    std::cout << "  Version: " << entry.version << "\n";
    std::cout << "  Data size: " << entry.data.size() << " bytes\n";
    
    // Print first 32 bytes of data in hex
    std::cout << "  Data preview: ";
    for (size_t i = 0; i < std::min(size_t(32), entry.data.size()); ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(entry.data[i]) << " ";
    }
    std::cout << std::dec << "\n\n";
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <bank_file>\n";
        return 1;
    }

    vfs::BankLoader loader;
    if (!loader.LoadFromFile(argv[1])) {
        std::cerr << "Failed to load bank file: " << argv[1] << "\n";
        return 1;
    }

    std::cout << "Successfully loaded bank file\n";
    std::cout << "Bank type: " << GetBankTypeName(loader.GetBankType()) << "\n";
    std::cout << "Total entries: " << loader.GetEntries().size() << "\n\n";

    // Print info for each entry
    for (const auto& entry : loader.GetEntries()) {
        PrintEntryInfo(entry);
    }

    return 0;
} 