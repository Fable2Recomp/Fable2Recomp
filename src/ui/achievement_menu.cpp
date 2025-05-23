#include "achievement_menu.h"
#include <gpu/imgui/imgui_snapshot.h>
#include <gpu/video.h>
#include <hid/hid.h>
#include <kernel/xdbf.h>
#include <locale/locale.h>
#include <ui/button_guide.h>
#include <ui/imgui_utils.h>
#include <user/achievement_manager.h>
#include <user/config.h>
#include <app.h>
#include <exports.h>
#include <decompressor.h>

static bool g_isClosing = false;
static double g_appearTime;
static std::vector<std::tuple<Achievement, time_t>> g_achievements;
static ImFont* g_fntSeurat;
static ImFont* g_fntNewRodinDB;
static ImFont* g_fntNewRodinUB;
static int g_firstVisibleRowIndex;
static int g_selectedRowIndex;
static double g_rowSelectionTime;
static double g_lastTappedTime;
static double g_lastIncrementTime;
static bool g_upWasHeld;
static bool g_downWasHeld;

static void ResetSelection()
{
    g_firstVisibleRowIndex = 0;
    g_selectedRowIndex = 0;
    g_rowSelectionTime = ImGui::GetTime();
    g_upWasHeld = false;
    g_downWasHeld = false;
}

void AchievementMenu::Init()
{
    g_fntSeurat = nullptr;
    g_fntNewRodinDB = nullptr;
    g_fntNewRodinUB = nullptr;
}

void AchievementMenu::Draw()
{
    if (!s_isVisible)
        return;
}

void AchievementMenu::Open()
{
    s_isVisible = true;
    g_isClosing = false;
    g_appearTime = ImGui::GetTime();

    g_achievements.clear();

    for (auto& achievement : g_xdbfWrapper.GetAchievements((EXDBFLanguage)Config::Language.Value))
    {
        if (Config::Language == ELanguage::English)
            achievement.Name = xdbf::FixInvalidSequences(achievement.Name);

        g_achievements.push_back(std::make_tuple(achievement, AchievementManager::GetTimestamp(achievement.ID)));
    }

    std::sort(g_achievements.begin(), g_achievements.end(), [](const auto& a, const auto& b)
    {
        return std::get<1>(a) > std::get<1>(b);
    });

    ButtonGuide::Open(Button("Common_Back", FLT_MAX, EButtonIcon::B, EFontQuality::Low));
    ResetSelection();
    Game_PlaySound("sys_actstg_pausewinopen");

    hid::SetProhibitedInputs(XAMINPUT_GAMEPAD_START);
}

void AchievementMenu::Close()
{
    if (!g_isClosing)
    {
        g_appearTime = ImGui::GetTime();
        g_isClosing = true;

        hid::SetProhibitedInputs();
    }

    ButtonGuide::Close();
    Game_PlaySound("sys_actstg_pausewinclose");
    Game_PlaySound("sys_actstg_pausecansel");
}
