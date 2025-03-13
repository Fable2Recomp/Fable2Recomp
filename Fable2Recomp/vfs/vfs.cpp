#include "vfs.hpp"
#include <tinyxml2.h>
#include <filesystem>
#include <iostream>

namespace vfs {

bool VirtualFileSystem::LoadConfig(const ::std::string& config_path) {
    tinyxml2::XMLDocument doc;
    if (doc.LoadFile(config_path.c_str()) != tinyxml2::XML_SUCCESS) {
        return false;
    }

    auto root = doc.FirstChildElement("vfs");
    if (!root) {
        return false;
    }

    // Get config directory for relative paths
    ::std::filesystem::path config_dir = ::std::filesystem::absolute(::std::filesystem::path(config_path)).parent_path();
    ::std::cout << "VFS::LoadConfig: Config directory is " << config_dir << std::endl;

    // Parse banks
    auto banks = root->FirstChildElement("banks");
    if (!banks) {
        return false;
    }

    for (auto bank = banks->FirstChildElement("bank"); bank; bank = bank->NextSiblingElement("bank")) {
        Bank info;
        info.path = bank->Attribute("path");
        
        // Make path absolute if relative
        if (::std::filesystem::path(info.path).is_relative()) {
            info.path = ::std::filesystem::absolute(::std::filesystem::current_path() / info.path).string();
            ::std::cout << "VFS::LoadConfig: Resolved relative path " << bank->Attribute("path") << " to " << info.path << std::endl;
        }
        
        info.id = bank->UnsignedAttribute("id");
        m_banks.push_back(info);
    }

    // Parse initial banks
    auto initial = root->FirstChildElement("initial");
    if (initial) {
        for (auto bank = initial->FirstChildElement("bank"); bank; bank = bank->NextSiblingElement("bank")) {
            uint32_t id = bank->UnsignedAttribute("id");
            for (const auto& b : m_banks) {
                if (b.id == id) {
                    m_initial_banks.push_back(b);
                    break;
                }
            }
        }
    }

    // Parse dependencies
    auto deps = root->FirstChildElement("dependencies");
    if (deps) {
        for (auto comp = deps->FirstChildElement("composite"); comp; comp = comp->NextSiblingElement("composite")) {
            uint32_t bank_id = comp->UnsignedAttribute("bank_id");
            
            // Find the bank
            for (auto& bank : m_banks) {
                if (bank.id == bank_id) {
                    // Parse required banks
                    auto req = comp->FirstChildElement("required");
                    if (req) {
                        for (auto b = req->FirstChildElement("bank"); b; b = b->NextSiblingElement("bank")) {
                            bank.required_banks.push_back(b->UnsignedAttribute("id"));
                        }
                    }

                    // Parse optional banks
                    auto opt = comp->FirstChildElement("optional");
                    if (opt) {
                        for (auto b = opt->FirstChildElement("bank"); b; b = b->NextSiblingElement("bank")) {
                            bank.optional_banks.push_back(b->UnsignedAttribute("id"));
                        }
                    }
                    break;
                }
            }
        }
    }

    return ValidateConfig();
}

const Bank* VirtualFileSystem::GetBankById(uint32_t id) const {
    for (const auto& bank : m_banks) {
        if (bank.id == id) {
            return &bank;
        }
    }
    return nullptr;
}

const Bank* VirtualFileSystem::GetBankByPath(const ::std::string& path) const {
    // Convert to absolute path for comparison
    ::std::filesystem::path abs_path = ::std::filesystem::absolute(path);
    ::std::cout << "VFS::GetBankByPath: Looking for bank with path " << abs_path << std::endl;
    
    for (const auto& bank : m_banks) {
        ::std::filesystem::path bank_path = ::std::filesystem::absolute(bank.path);
        ::std::cout << "VFS::GetBankByPath: Comparing with bank path " << bank_path << std::endl;
        if (bank_path == abs_path || bank.path == path) {
            return &bank;
        }
    }
    return nullptr;
}

bool VirtualFileSystem::ValidateConfig() const {
    // Check that all bank IDs are unique
    for (size_t i = 0; i < m_banks.size(); ++i) {
        for (size_t j = i + 1; j < m_banks.size(); ++j) {
            if (m_banks[i].id == m_banks[j].id) {
                return false;
            }
        }
    }

    // Check that all initial banks exist
    for (const auto& initial_bank : m_initial_banks) {
        bool found = false;
        for (const auto& bank : m_banks) {
            if (bank.id == initial_bank.id) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }

    // Check that all dependency banks exist
    for (const auto& bank : m_banks) {
        // Check required banks
        for (uint32_t id : bank.required_banks) {
            bool found = false;
            for (const auto& b : m_banks) {
                if (b.id == id) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return false;
            }
        }

        // Check optional banks
        for (uint32_t id : bank.optional_banks) {
            bool found = false;
            for (const auto& b : m_banks) {
                if (b.id == id) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return false;
            }
        }
    }

    return true;
}

} // namespace vfs 