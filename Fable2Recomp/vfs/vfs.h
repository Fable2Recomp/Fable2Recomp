#pragma once

#include <string>
#include <vector>
#include <optional>
#include <filesystem>

namespace vfs {

struct Bank {
    uint32_t id;
    std::string path;
    std::vector<uint32_t> required_banks;
    std::vector<uint32_t> optional_banks;
};

class VirtualFileSystem {
public:
    bool LoadConfig(const std::string& config_path);
    bool ValidateConfig() const;
    const Bank* GetBankByPath(const std::string& path) const;
    const Bank* GetBankById(uint32_t id) const;
    const std::vector<Bank>& GetInitialBanks() const { return m_initial_banks; }
    const std::vector<Bank>& GetBanks() const { return m_banks; }

private:
    std::vector<Bank> m_banks;
    std::vector<Bank> m_initial_banks;
};

} // namespace vfs 