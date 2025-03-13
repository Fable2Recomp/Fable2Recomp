#pragma once
#include <string>
#include <vector>
#include <optional>
#include <memory>
#include <unordered_map>
#include <cstdint>
#include <filesystem>

namespace vfs {

struct Bank {
    ::std::string path;
    uint32_t id;
    ::std::vector<uint32_t> required_banks;
    ::std::vector<uint32_t> optional_banks;
};

class VirtualFileSystem {
public:
    VirtualFileSystem() = default;
    ~VirtualFileSystem() = default;

    // Load config from file
    bool LoadConfig(const ::std::string& config_path);

    // Get bank by ID
    const Bank* GetBankById(uint32_t id) const;

    // Get bank by path
    const Bank* GetBankByPath(const ::std::string& path) const;

    // Get initial banks
    const ::std::vector<Bank>& GetInitialBanks() const { return m_initial_banks; }

    // Get all banks
    const ::std::vector<Bank>& GetBanks() const { return m_banks; }

private:
    bool ValidateConfig() const;

    ::std::vector<Bank> m_banks;
    ::std::vector<Bank> m_initial_banks;
};

} // namespace vfs 