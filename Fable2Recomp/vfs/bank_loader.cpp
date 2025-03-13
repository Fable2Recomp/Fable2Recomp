#include "bank_loader.hpp"
#include <fstream>
#include <iostream>

namespace vfs {

struct BankHeader {
    uint32_t magic;
    uint32_t version_major;
    uint32_t version_minor;
    uint32_t flags;
    uint32_t entry_count;
};

bool BankLoader::LoadFromFile(const ::std::string& filename) {
    std::cout << "BankLoader::LoadFromFile: " << filename << std::endl;

    ::std::ifstream file(filename, ::std::ios::binary);
    if (!file.is_open()) {
        std::cout << "BankLoader::LoadFromFile: Failed to open file" << std::endl;
        return false;
    }

    // Read header
    BankHeader header;
    file.read(reinterpret_cast<char*>(&header), sizeof(BankHeader));
    if (!file) {
        std::cout << "BankLoader::LoadFromFile: Failed to read header" << std::endl;
        return false;
    }

    std::cout << "BankLoader::LoadFromFile: Header magic: " << std::hex << header.magic << std::dec << std::endl;
    std::cout << "BankLoader::LoadFromFile: Version: " << header.version_major << "." << header.version_minor << std::endl;
    std::cout << "BankLoader::LoadFromFile: Entry count: " << header.entry_count << std::endl;

    // Verify magic number
    if (header.magic != BANK_MAGIC) {
        std::cout << "BankLoader::LoadFromFile: Invalid magic number" << std::endl;
        return false;
    }

    // Store version information
    m_version_major = header.version_major;
    m_version_minor = header.version_minor;

    // Clear existing entries
    m_entries.clear();
    m_entry_map.clear();

    // Read entries
    for (uint32_t i = 0; i < header.entry_count; ++i) {
        BankEntry entry;
        
        // Read name length
        uint32_t name_length;
        file.read(reinterpret_cast<char*>(&name_length), sizeof(uint32_t));
        if (!file) {
            std::cout << "BankLoader::LoadFromFile: Failed to read name length" << std::endl;
            return false;
        }

        std::cout << "BankLoader::LoadFromFile: Entry " << i << " name length: " << name_length << std::endl;

        // Read name
        ::std::string name(name_length, '\0');
        file.read(&name[0], name_length);
        if (!file) {
            std::cout << "BankLoader::LoadFromFile: Failed to read name" << std::endl;
            return false;
        }

        std::cout << "BankLoader::LoadFromFile: Entry " << i << " name: " << name << std::endl;

        // Read entry type
        file.read(reinterpret_cast<char*>(&entry.type), sizeof(BankEntryType));
        if (!file) {
            std::cout << "BankLoader::LoadFromFile: Failed to read entry type" << std::endl;
            return false;
        }

        std::cout << "BankLoader::LoadFromFile: Entry " << i << " type: " << static_cast<int>(entry.type) << std::endl;

        // Read flags
        file.read(reinterpret_cast<char*>(&entry.flags), sizeof(uint32_t));
        if (!file) {
            std::cout << "BankLoader::LoadFromFile: Failed to read flags" << std::endl;
            return false;
        }

        // Read version
        file.read(reinterpret_cast<char*>(&entry.version), sizeof(uint32_t));
        if (!file) {
            std::cout << "BankLoader::LoadFromFile: Failed to read version" << std::endl;
            return false;
        }

        // Read data size
        uint32_t data_size;
        file.read(reinterpret_cast<char*>(&data_size), sizeof(uint32_t));
        if (!file) {
            std::cout << "BankLoader::LoadFromFile: Failed to read data size" << std::endl;
            return false;
        }

        std::cout << "BankLoader::LoadFromFile: Entry " << i << " data size: " << data_size << std::endl;

        // Read data
        entry.data.resize(data_size);
        file.read(reinterpret_cast<char*>(entry.data.data()), data_size);
        if (!file) {
            std::cout << "BankLoader::LoadFromFile: Failed to read data" << std::endl;
            return false;
        }

        // Store entry
        entry.name = name;
        m_entry_map[name] = m_entries.size();
        m_entries.push_back(entry);

        std::cout << "BankLoader::LoadFromFile: Successfully loaded entry " << i << std::endl;
    }

    // Determine bank type
    m_bank_type = DetermineBankType(filename);

    std::cout << "BankLoader::LoadFromFile: Successfully loaded bank with " << m_entries.size() << " entries" << std::endl;
    return true;
}

bool BankLoader::LoadFromMemory(const uint8_t* data, size_t size) {
    if (!data || size < sizeof(BankHeader)) {
        return false;
    }

    // Parse header
    if (!ParseHeader(data, size)) {
        return false;
    }

    // Parse entries
    if (!ParseEntries(data + sizeof(BankHeader), size - sizeof(BankHeader))) {
        return false;
    }

    return true;
}

bool BankLoader::ParseHeader(const uint8_t* data, size_t size) {
    if (size < sizeof(BankHeader)) {
        return false;
    }

    const BankHeader* header = reinterpret_cast<const BankHeader*>(data);
    if (header->magic != BANK_MAGIC) {
        return false;
    }

    // Verify version compatibility
    if (header->version_major != SUPPORTED_VERSION_MAJOR ||
        header->version_minor > SUPPORTED_VERSION_MINOR) {
        return false;
    }

    m_version_major = header->version_major;
    m_version_minor = header->version_minor;

    return true;
}

bool BankLoader::ParseEntries(const uint8_t* data, size_t size) {
    // Clear existing entries
    m_entries.clear();
    m_entry_map.clear();

    size_t offset = 0;
    while (offset < size) {
        // Read name length
        if (offset + sizeof(uint32_t) > size) {
            return false;
        }
        uint32_t name_length = *reinterpret_cast<const uint32_t*>(data + offset);
        offset += sizeof(uint32_t);

        // Read name
        if (offset + name_length > size) {
            return false;
        }
        ::std::string name(reinterpret_cast<const char*>(data + offset), name_length);
        offset += name_length;

        // Read entry type
        if (offset + sizeof(BankEntryType) > size) {
            return false;
        }
        BankEntryType type = *reinterpret_cast<const BankEntryType*>(data + offset);
        offset += sizeof(BankEntryType);

        // Read flags
        if (offset + sizeof(uint32_t) > size) {
            return false;
        }
        uint32_t flags = *reinterpret_cast<const uint32_t*>(data + offset);
        offset += sizeof(uint32_t);

        // Read version
        if (offset + sizeof(uint32_t) > size) {
            return false;
        }
        uint32_t version = *reinterpret_cast<const uint32_t*>(data + offset);
        offset += sizeof(uint32_t);

        // Read data size
        if (offset + sizeof(uint32_t) > size) {
            return false;
        }
        uint32_t data_size = *reinterpret_cast<const uint32_t*>(data + offset);
        offset += sizeof(uint32_t);

        // Read data
        if (offset + data_size > size) {
            return false;
        }
        ::std::vector<uint8_t> entry_data(data + offset, data + offset + data_size);
        offset += data_size;

        // Create entry
        BankEntry entry;
        entry.name = name;
        entry.type = type;
        entry.flags = flags;
        entry.version = version;
        entry.data = ::std::move(entry_data);

        // Store entry
        m_entry_map[name] = m_entries.size();
        m_entries.push_back(::std::move(entry));
    }

    return true;
}

bool BankLoader::DecompressData(const uint8_t* data, size_t size, ::std::vector<uint8_t>& output) {
    // Check for ZLIB header
    if (size < 2 || (data[0] != 0x78 || data[1] != 0xda)) {
        // Not compressed
        output.assign(data, data + size);
        return true;
    }

    // TODO: Implement ZLIB decompression
    return false;
}

BankEntryType BankLoader::DetermineBankType(const ::std::string& filename) const {
    // Bank type is determined by the extension
    if (filename.find("_model.bnk") != ::std::string::npos) {
        return BankEntryType::Model;
    } else if (filename.find("_texture.bnk") != ::std::string::npos) {
        return BankEntryType::Texture;
    } else if (filename.find("_animation.bnk") != ::std::string::npos) {
        return BankEntryType::Animation;
    } else if (filename.find("_sound.bnk") != ::std::string::npos) {
        return BankEntryType::Sound;
    } else if (filename.find("_script.bnk") != ::std::string::npos) {
        return BankEntryType::Script;
    } else if (filename.find("_shader.bnk") != ::std::string::npos) {
        return BankEntryType::Shader;
    }
    return BankEntryType::Unknown;
}

const BankEntry* BankLoader::GetEntry(const ::std::string& name) const {
    std::cout << "BankLoader::GetEntry: Looking for entry " << name << std::endl;
    std::cout << "BankLoader::GetEntry: Entry map contains " << m_entry_map.size() << " entries" << std::endl;
    for (const auto& [key, value] : m_entry_map) {
        std::cout << "BankLoader::GetEntry: Found entry " << key << std::endl;
    }
    auto it = m_entry_map.find(name);
    if (it != m_entry_map.end()) {
        std::cout << "BankLoader::GetEntry: Found entry " << name << " at index " << it->second << std::endl;
        return &m_entries[it->second];
    }
    std::cout << "BankLoader::GetEntry: Entry " << name << " not found" << std::endl;
    return nullptr;
}

} // namespace vfs