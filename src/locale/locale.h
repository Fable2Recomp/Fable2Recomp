#pragma once

#include <string>
#include <string_view>
#include <unordered_map>
#include <cstdint>

// Language enum used to select a translation
enum class ELanguage : uint32_t
{
    English = 1,
    Japanese,
    German,
    French,
    Spanish,
    Italian
};

// Fallback string if a key is missing in the locale map
inline const std::string g_localeMissing = "<missing string>";

// Global locale map: key -> language -> string
extern std::unordered_map<std::string_view, std::unordered_map<ELanguage, std::string>> g_locale;

// Returns a localized string by key, defaults to g_localeMissing if not found
const std::string& Localise(const std::string_view& key);

