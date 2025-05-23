#pragma once

#include <filesystem>

#define USER_DIRECTORY "Fable2Recomp"

#ifndef GAME_INSTALL_DIRECTORY
#define GAME_INSTALL_DIRECTORY "."
#endif

extern std::filesystem::path g_executableRoot;

inline std::filesystem::path GetGamePath()
{
    return GAME_INSTALL_DIRECTORY;
}

bool CheckPortable();
std::filesystem::path BuildUserPath();
const std::filesystem::path& GetUserPath();

inline std::filesystem::path GetSavePath(bool checkForMods)
{
        return GetUserPath() / "save";
}

// Returned file name may not necessarily be
// equal to SYS-DATA as mods can assign anything.
inline std::filesystem::path GetSaveFilePath(bool checkForMods)
{
        return GetSavePath(false) / "SYS-DATA";
}
