#pragma once

#include "assets.h"
#include <string>
#include <vector>
#include <unordered_map>

namespace assets {

struct ScriptFunction {
    std::string name;
    std::vector<uint8_t> bytecode;
    size_t stack_size;
    size_t local_count;
};

class ScriptAsset : public Asset {
public:
    ScriptAsset();
    ~ScriptAsset();

    AssetType GetType() const override { return AssetType::Script; }
    bool Load(const std::string& path) override;
    void Unload() override;

    const std::vector<ScriptFunction>& GetFunctions() const { return m_functions; }
    const std::unordered_map<std::string, size_t>& GetFunctionMap() const { return m_function_map; }

private:
    bool LoadFromBNK(const std::string& path);
    bool ParseScriptHeader(const std::vector<uint8_t>& data, size_t& offset);
    bool ParseScriptFunction(const std::vector<uint8_t>& data, size_t& offset);

    std::vector<ScriptFunction> m_functions;
    std::unordered_map<std::string, size_t> m_function_map;
};

} // namespace assets 