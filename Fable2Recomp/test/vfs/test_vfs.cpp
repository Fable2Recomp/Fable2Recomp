#include "vfs.hpp"
#include <iostream>

void PrintBankInfo(const vfs::Bank& bank) {
    std::cout << "Bank " << bank.id << ":\n";
    std::cout << "  Path: " << bank.path << "\n";
    std::cout << "  Required Banks:\n";
    for (const auto& req_id : bank.required_banks) {
        std::cout << "    " << req_id << "\n";
    }
    std::cout << "  Optional Banks:\n";
    for (const auto& opt_id : bank.optional_banks) {
        std::cout << "    " << opt_id << "\n";
    }
    std::cout << "\n";
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <config_path>\n";
        return 1;
    }

    vfs::VirtualFileSystem vfs;
    if (!vfs.LoadConfig(argv[1])) {
        std::cerr << "Failed to load VFS config\n";
        return 1;
    }

    std::cout << "Initial Banks:\n";
    for (const auto& bank : vfs.GetInitialBanks()) {
        PrintBankInfo(bank);
    }

    std::cout << "All Banks:\n";
    for (const auto& bank : vfs.GetBanks()) {
        PrintBankInfo(bank);
    }

    return 0;
} 