#include "config.h"
#include <fmt/format.h>
#include <os/logger.h>
#include <ui/game_window.h>
#include <user/paths.h>
#include <SDL3/SDL.h>
#include <unordered_map>
#include <filesystem>
#include <fstream>
#include <vector>

std::vector<IConfigDef*> g_configDefinitions;

#define CONFIG_DEFINE_ENUM_TEMPLATE(type) \
    static std::unordered_map<std::string, type> g_##type##_template =

CONFIG_DEFINE_ENUM_TEMPLATE(ELanguage)
{
    { "English",  ELanguage::English },
    { "Japanese", ELanguage::Japanese },
    { "German",   ELanguage::German },
    { "French",   ELanguage::French },
    { "Spanish",  ELanguage::Spanish },
    { "Italian",  ELanguage::Italian }
};

CONFIG_DEFINE_ENUM_TEMPLATE(ETimeOfDayTransition)
{
    { "Xbox",        ETimeOfDayTransition::Xbox },
    { "PlayStation", ETimeOfDayTransition::PlayStation }
};

CONFIG_DEFINE_ENUM_TEMPLATE(ECameraRotationMode)
{
    { "Normal",  ECameraRotationMode::Normal },
    { "Reverse", ECameraRotationMode::Reverse },
};

CONFIG_DEFINE_ENUM_TEMPLATE(EControllerIcons)
{
    { "Auto",        EControllerIcons::Auto },
    { "Xbox",        EControllerIcons::Xbox },
    { "PlayStation", EControllerIcons::PlayStation }
};

static std::unordered_map<std::string, SDL_Scancode> g_SDL_Scancode_template;
static void PopulateScancodeTemplate()
{
    for (int i = SDL_SCANCODE_UNKNOWN; i < SDL_SCANCODE_COUNT; ++i)
    {
        const char* name = SDL_GetScancodeName(static_cast<SDL_Scancode>(i));
        if (name && *name)
        {
            g_SDL_Scancode_template[name] = static_cast<SDL_Scancode>(i);
        }
    }

    // Optionally include fallback for unknown
    g_SDL_Scancode_template["???"] = SDL_SCANCODE_UNKNOWN;
};

CONFIG_DEFINE_ENUM_TEMPLATE(EChannelConfiguration)
{
    { "Stereo",   EChannelConfiguration::Stereo },
    { "Surround", EChannelConfiguration::Surround }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EVoiceLanguage)
{
    { "English",  EVoiceLanguage::English },
    { "Japanese", EVoiceLanguage::Japanese }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EGraphicsAPI)
{
    { "Auto", EGraphicsAPI::Auto },
#ifdef UNLEASHED_RECOMP_D3D12
    { "D3D12",  EGraphicsAPI::D3D12 },
#endif
    { "Vulkan", EGraphicsAPI::Vulkan }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EWindowState)
{
    { "Normal",    EWindowState::Normal },
    { "Maximised", EWindowState::Maximised },
    { "Maximized", EWindowState::Maximised }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EAspectRatio)
{
    { "Auto", EAspectRatio::Auto },
    { "16:9", EAspectRatio::Wide },
    { "4:3",  EAspectRatio::Narrow },
    { "Original 4:3",  EAspectRatio::OriginalNarrow },
};

CONFIG_DEFINE_ENUM_TEMPLATE(ETripleBuffering)
{
    { "Auto", ETripleBuffering::Auto },
    { "On",   ETripleBuffering::On },
    { "Off",  ETripleBuffering::Off }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EAntiAliasing)
{
    { "None",    EAntiAliasing::None },
    { "2x MSAA", EAntiAliasing::MSAA2x },
    { "4x MSAA", EAntiAliasing::MSAA4x },
    { "8x MSAA", EAntiAliasing::MSAA8x }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EShadowResolution)
{
    { "Original", EShadowResolution::Original },
    { "512",      EShadowResolution::x512 },
    { "1024",     EShadowResolution::x1024 },
    { "2048",     EShadowResolution::x2048 },
    { "4096",     EShadowResolution::x4096 },
    { "8192",     EShadowResolution::x8192 },
};

CONFIG_DEFINE_ENUM_TEMPLATE(EGITextureFiltering)
{
    { "Bilinear", EGITextureFiltering::Bilinear },
    { "Bicubic",  EGITextureFiltering::Bicubic }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EDepthOfFieldQuality)
{
    { "Auto",   EDepthOfFieldQuality::Auto },
    { "Low",    EDepthOfFieldQuality::Low },
    { "Medium", EDepthOfFieldQuality::Medium },
    { "High",   EDepthOfFieldQuality::High },
    { "Ultra",  EDepthOfFieldQuality::Ultra }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EMotionBlur)
{
    { "Off",      EMotionBlur::Off },
    { "Original", EMotionBlur::Original },
    { "Enhanced", EMotionBlur::Enhanced }
};

CONFIG_DEFINE_ENUM_TEMPLATE(ECutsceneAspectRatio)
{
    { "Original", ECutsceneAspectRatio::Original },
    { "Unlocked", ECutsceneAspectRatio::Unlocked }
};

CONFIG_DEFINE_ENUM_TEMPLATE(EUIAlignmentMode)
{
    { "Edge",    EUIAlignmentMode::Edge },
    { "Centre",  EUIAlignmentMode::Centre },
    { "Center",  EUIAlignmentMode::Centre }
};

#undef  CONFIG_DEFINE
#define CONFIG_DEFINE(section, type, name, defaultValue) \
    ConfigDef<type> Config::name{section, #name, defaultValue};

#undef  CONFIG_DEFINE_HIDDEN
#define CONFIG_DEFINE_HIDDEN(section, type, name, defaultValue) \
    ConfigDef<type, true> Config::name{section, #name, defaultValue};

#undef  CONFIG_DEFINE_LOCALISED
#define CONFIG_DEFINE_LOCALISED(section, type, name, defaultValue) \
    extern CONFIG_LOCALE g_##name##_locale; \
    ConfigDef<type> Config::name{section, #name, &g_##name##_locale, defaultValue};

#undef  CONFIG_DEFINE_ENUM
#define CONFIG_DEFINE_ENUM(section, type, name, defaultValue) \
    ConfigDef<type> Config::name{section, #name, defaultValue, &g_##type##_template};

#undef  CONFIG_DEFINE_ENUM_LOCALISED
#define CONFIG_DEFINE_ENUM_LOCALISED(section, type, name, defaultValue) \
    extern CONFIG_LOCALE g_##name##_locale; \
    extern CONFIG_ENUM_LOCALE(type) g_##type##_locale; \
    ConfigDef<type> Config::name{section, #name, &g_##name##_locale, defaultValue, &g_##type##_template, &g_##type##_locale};

#include "config_def.h"

// CONFIG_DEFINE
template<typename T, bool isHidden>
ConfigDef<T, isHidden>::ConfigDef(std::string section, std::string name, T defaultValue) : Section(section), Name(name), DefaultValue(defaultValue)
{
    g_configDefinitions.emplace_back(this);
}

// CONFIG_DEFINE_LOCALISED
template<typename T, bool isHidden>
ConfigDef<T, isHidden>::ConfigDef(std::string section, std::string name, CONFIG_LOCALE* nameLocale, T defaultValue) : Section(section), Name(name), Locale(nameLocale), DefaultValue(defaultValue)
{
    g_configDefinitions.emplace_back(this);
}

// CONFIG_DEFINE_ENUM
template<typename T, bool isHidden>
ConfigDef<T, isHidden>::ConfigDef(std::string section, std::string name, T defaultValue, std::unordered_map<std::string, T>* enumTemplate) : Section(section), Name(name), DefaultValue(defaultValue), EnumTemplate(enumTemplate)
{
    for (const auto& pair : *EnumTemplate)
        EnumTemplateReverse[pair.second] = pair.first;

    g_configDefinitions.emplace_back(this);
}

// CONFIG_DEFINE_ENUM_LOCALISED
template<typename T, bool isHidden>
ConfigDef<T, isHidden>::ConfigDef(std::string section, std::string name, CONFIG_LOCALE* nameLocale, T defaultValue, std::unordered_map<std::string, T>* enumTemplate, CONFIG_ENUM_LOCALE(T)* enumLocale) : Section(section), Name(name), Locale(nameLocale), DefaultValue(defaultValue), EnumTemplate(enumTemplate), EnumLocale(enumLocale)
{
    for (const auto& pair : *EnumTemplate)
        EnumTemplateReverse[pair.second] = pair.first;

    g_configDefinitions.emplace_back(this);
}

template<typename T, bool isHidden>
ConfigDef<T, isHidden>::~ConfigDef() = default;

template<typename T, bool isHidden>
bool ConfigDef<T, isHidden>::IsHidden()
{
    return isHidden && !IsLoadedFromConfig;
}

template<typename T, bool isHidden>
void ConfigDef<T, isHidden>::ReadValue(const toml::table& toml)
{
    if (auto pSection = toml[Section].as_table())
    {
        const auto& section = *pSection;

        if constexpr (std::is_same<T, std::string>::value)
        {
            Value = section[Name].value_or(DefaultValue);
        }
        else if constexpr (std::is_enum_v<T>)
        {
            auto value = section[Name].value_or(std::string());
            auto it = EnumTemplate->find(value);

            if (it != EnumTemplate->end())
            {
                Value = it->second;
            }
            else
            {
                Value = DefaultValue;
            }
        }
        else
        {
            Value = section[Name].value_or(DefaultValue);
        }

        if (Callback)
            Callback(this);

        if (pSection->contains(Name))
            IsLoadedFromConfig = true;
    }
}

template<typename T, bool isHidden>
void ConfigDef<T, isHidden>::MakeDefault()
{
    Value = DefaultValue;

    if constexpr (std::is_enum_v<T>)
        SnapToNearestAccessibleValue(false);
}

template<typename T, bool isHidden>
std::string_view ConfigDef<T, isHidden>::GetSection() const
{
    return Section;
}

template<typename T, bool isHidden>
std::string_view ConfigDef<T, isHidden>::GetName() const
{
    return Name;
}

template<typename T, bool isHidden>
std::string ConfigDef<T, isHidden>::GetNameLocalised(ELanguage language) const
{
    if (Locale != nullptr)
    {
        auto languageFindResult = Locale->find(language);
        if (languageFindResult == Locale->end())
            languageFindResult = Locale->find(ELanguage::English);

        if (languageFindResult != Locale->end())
            return std::get<0>(languageFindResult->second);
    }

    return Name;
}

template<typename T, bool isHidden>
std::string ConfigDef<T, isHidden>::GetDescription(ELanguage language) const
{
    if (Locale != nullptr)
    {
        auto languageFindResult = Locale->find(language);
        if (languageFindResult == Locale->end())
            languageFindResult = Locale->find(ELanguage::English);

        if (languageFindResult != Locale->end())
            return std::get<1>(languageFindResult->second);
    }

    return "";
}

template<typename T, bool isHidden>
bool ConfigDef<T, isHidden>::IsDefaultValue() const
{
    return Value == DefaultValue;
}

template<typename T, bool isHidden>
const void* ConfigDef<T, isHidden>::GetValue() const
{
    return &Value;
}

template<typename T, bool isHidden>
std::string ConfigDef<T, isHidden>::GetValueLocalised(ELanguage language) const
{
    CONFIG_ENUM_LOCALE(T)* locale = nullptr;

    if constexpr (std::is_enum_v<T>)
    {
        locale = EnumLocale;
    }
    else if constexpr (std::is_same_v<T, bool>)
    {
        return Value
            ? Localise("Common_On")
            : Localise("Common_Off");
    }

    if (locale != nullptr)
    {
        ELanguage languages[] = { language, ELanguage::English };

        for (auto languageToFind : languages)
        {
            auto languageFindResult = locale->find(languageToFind);

            if (languageFindResult != locale->end())
            {
                auto valueFindResult = languageFindResult->second.find(Value);
                if (valueFindResult != languageFindResult->second.end())
                    return std::get<0>(valueFindResult->second);
            }

            if (languageToFind == ELanguage::English)
                break;
        }
    }

    return ToString(false);
}

template<typename T, bool isHidden>
std::string ConfigDef<T, isHidden>::GetValueDescription(ELanguage language) const
{
    CONFIG_ENUM_LOCALE(T)* locale = nullptr;

    if constexpr (std::is_enum_v<T>)
    {
        locale = EnumLocale;
    }
    else if constexpr (std::is_same_v<T, bool>)
    {
        return "";
    }

    if (locale != nullptr)
    {
        ELanguage languages[] = { language, ELanguage::English };

        for (auto languageToFind : languages)
        {
            auto languageFindResult = locale->find(languageToFind);

            if (languageFindResult != locale->end())
            {
                auto valueFindResult = languageFindResult->second.find(Value);
                if (valueFindResult != languageFindResult->second.end())
                    return std::get<1>(valueFindResult->second);
            }

            if (languageToFind == ELanguage::English)
                break;
        }
    }

    return "";
}

template<typename T, bool isHidden>
std::string ConfigDef<T, isHidden>::GetDefinition(bool withSection) const
{
    std::string result;

    if (withSection)
        result += "[" + Section + "]\n";

    result += Name + " = " + ToString();

    return result;
}

template<typename T, bool isHidden>
std::string ConfigDef<T, isHidden>::ToString(bool strWithQuotes) const
{
    std::string result = "N/A";

    if constexpr (std::is_same_v<T, std::string>)
    {
        result = fmt::format("{}", Value);

        if (strWithQuotes)
            result = fmt::format("\"{}\"", result);
    }
    else if constexpr (std::is_enum_v<T>)
    {
        auto it = EnumTemplateReverse.find(Value);

        if (it != EnumTemplateReverse.end())
            result = fmt::format("{}", it->second);

        if (strWithQuotes)
            result = fmt::format("\"{}\"", result);
    }
    else
    {
        result = fmt::format("{}", Value);
    }

    return result;
}

template<typename T, bool isHidden>
void ConfigDef<T, isHidden>::GetLocaleStrings(std::vector<std::string_view>& localeStrings) const
{
    if (Locale != nullptr)
    {
        for (auto& [language, nameAndDesc] : *Locale)
        {
            localeStrings.push_back(std::get<0>(nameAndDesc));
            localeStrings.push_back(std::get<1>(nameAndDesc));
        }
    }

    if (EnumLocale != nullptr)
    {
        for (auto& [language, locale] : *EnumLocale)
        {
            for (auto& [value, nameAndDesc] : locale)
            {
                localeStrings.push_back(std::get<0>(nameAndDesc));
                localeStrings.push_back(std::get<1>(nameAndDesc));
            }
        }
    }
}

template<typename T, bool isHidden>
void ConfigDef<T, isHidden>::SnapToNearestAccessibleValue(bool searchUp)
{
    if constexpr (std::is_enum_v<T>)
    {
        if (EnumTemplateReverse.empty() || InaccessibleValues.empty())
            return;

        if (EnumTemplateReverse.size() == InaccessibleValues.size())
        {
            assert(false && "All enum values are marked inaccessible and the nearest accessible value cannot be determined.");
            return;
        }

        auto it = EnumTemplateReverse.find(Value);

        if (it == EnumTemplateReverse.end())
        {
            assert(false && "Enum value does not exist in the template.");
            return;
        }

        // Skip the enum value if it's marked as inaccessible.
        while (InaccessibleValues.find(it->first) != InaccessibleValues.end())
        {
            if (searchUp)
            {
                ++it;

                if (it == EnumTemplateReverse.end())
                    it = EnumTemplateReverse.begin();
            }
            else
            {
                if (it == EnumTemplateReverse.begin())
                    it = EnumTemplateReverse.end();

                --it;
            }
        }

        Value = it->first;
    }
}

std::filesystem::path Config::GetConfigPath()
{
    return GetUserPath() / "config.toml";
}

void Config::CreateCallbacks()
{
    Config::WindowSize.LockCallback = [](ConfigDef<int32_t>* def)
    {
        // Try matching the current window size with a known configuration.
        if (def->Value < 0)
            def->Value = GameWindow::FindNearestDisplayMode();
    };

    Config::WindowSize.ApplyCallback = [](ConfigDef<int32_t>* def)
    {
        auto displayModes = GameWindow::GetDisplayModes();

        // Use largest supported resolution if overflowed.
        if (def->Value >= displayModes.size())
            def->Value = displayModes.size() - 1;

        auto& mode = displayModes[def->Value];
        auto centre = SDL_WINDOWPOS_CENTERED_DISPLAY(GameWindow::GetDisplay());

        GameWindow::SetDimensions(mode.w, mode.h, centre, centre);
    };

    Config::Monitor.Callback = [](ConfigDef<int32_t>* def)
    {
        GameWindow::SetDisplay(def->Value);
    };

    Config::Fullscreen.Callback = [](ConfigDef<bool>* def)
    {
        GameWindow::SetFullscreen(def->Value);
        GameWindow::SetDisplay(Config::Monitor);
    };

    Config::ResolutionScale.Callback = [](ConfigDef<float>* def)
    {
        def->Value = std::clamp(def->Value, 0.25f, 2.0f);
    };
}

void Config::Load()
{
    if (!s_isCallbacksCreated)
    {
        CreateCallbacks();
        s_isCallbacksCreated = true;
    }

    auto configPath = GetConfigPath();

    if (!std::filesystem::exists(configPath))
    {
        Config::Save();
        return;
    }

    try
    {
        toml::table toml;
        std::ifstream tomlStream(configPath);

        if (tomlStream.is_open())
            toml = toml::parse(tomlStream);

        for (auto def : g_configDefinitions)
        {
            def->ReadValue(toml);

#if _DEBUG
            LOGFN_UTILITY("{} (0x{:X})", def->GetDefinition().c_str(), (intptr_t)def->GetValue());
#endif
        }
    }
    catch (toml::parse_error& err)
    {
        LOGFN_ERROR("Failed to parse configuration: {}", err.what());
    }
}

void Config::Save()
{
    LOGN("Saving configuration...");

    auto userPath = GetUserPath();

    if (!std::filesystem::exists(userPath))
        std::filesystem::create_directory(userPath);

    std::string result;
    std::string section;

    for (auto def : g_configDefinitions)
    {
        if (def->IsHidden())
            continue;

        auto isFirstSection = section.empty();
        auto isDefWithSection = section != def->GetSection();
        auto tomlDef = def->GetDefinition(isDefWithSection);

        section = def->GetSection();

        // Don't output prefix space for first section.
        if (!isFirstSection && isDefWithSection)
            result += '\n';

        result += tomlDef + '\n';
    }

    std::ofstream out(GetConfigPath());

    if (out.is_open())
    {
        out << result;
        out.close();
    }
    else
    {
        LOGN_ERROR("Failed to write configuration.");
    }
}
