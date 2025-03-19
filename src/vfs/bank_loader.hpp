#pragma once
#include <string>
#include <vector>
#include <memory>
#include <cstdint>
#include <unordered_map>

namespace vfs {

enum class BankEntryType {
    Unknown,
    Bank,
    Script,
    Model,
    Texture,
    Animation,
    Sound,
    Shader
};

struct BankEntry {
    ::std::string name;
    BankEntryType type;
    ::std::vector<uint8_t> data;
    uint32_t flags;
    uint32_t version;
};

class BankLoader {
public:
    static constexpr uint32_t BANK_MAGIC = 0x00008000;
    static constexpr uint32_t SUPPORTED_VERSION_MAJOR = 3;
    static constexpr uint32_t SUPPORTED_VERSION_MINOR = 1;
    static constexpr uint32_t ZLIB_HEADER = 0x78da;

    BankLoader() = default;
    ~BankLoader() = default;

    // Load bank from file
    bool LoadFromFile(const ::std::string& filename);
    
    // Load bank from memory
    bool LoadFromMemory(const uint8_t* data, size_t size);

    // Get entry by name
    const BankEntry* GetEntry(const ::std::string& name) const;

    // Get all entries
    const ::std::vector<BankEntry>& GetEntries() const { return m_entries; }

    // Get bank type
    BankEntryType GetBankType() const { return m_bank_type; }

private:
    bool ParseHeader(const uint8_t* data, size_t size);
    bool ParseEntries(const uint8_t* data, size_t size);
    bool DecompressData(const uint8_t* data, size_t size, ::std::vector<uint8_t>& output);
    BankEntryType DetermineBankType(const ::std::string& filename) const;

    ::std::vector<BankEntry> m_entries;
    ::std::unordered_map<::std::string, size_t> m_entry_map;
    BankEntryType m_bank_type = BankEntryType::Unknown;
    uint32_t m_version_major = 0;
    uint32_t m_version_minor = 0;
}; 

} // namespace vfs 