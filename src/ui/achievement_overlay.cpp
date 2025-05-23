#include "achievement_overlay.h"
#include <gpu/imgui/imgui_snapshot.h>
#include <gpu/video.h>
#include <kernel/memory.h>
#include <kernel/xdbf.h>
#include <locale/locale.h>
#include <ui/imgui_utils.h>
#include <user/achievement_data.h>
#include <user/config.h>
#include <app.h>
#include <exports.h>
#include <decompressor.h>
#include <cstdint>

constexpr double OVERLAY_CONTAINER_COMMON_MOTION_START = 0;
constexpr double OVERLAY_CONTAINER_COMMON_MOTION_END = 11;
constexpr double OVERLAY_CONTAINER_INTRO_FADE_START = 5;
constexpr double OVERLAY_CONTAINER_INTRO_FADE_END = 9;
constexpr double OVERLAY_CONTAINER_OUTRO_FADE_START = 0;
constexpr double OVERLAY_CONTAINER_OUTRO_FADE_END = 4;

constexpr double OVERLAY_DURATION = 3;

static bool g_isClosing = false;
static double g_appearTime = 0;
static Achievement g_achievement;
static ImFont* g_fntSeurat;

static bool DrawContainer(ImVec2 min, ImVec2 max, float cornerRadius = 25)
{
    auto drawList = ImGui::GetBackgroundDrawList();

    auto containerMotion = ComputeMotion(g_appearTime, OVERLAY_CONTAINER_COMMON_MOTION_START, OVERLAY_CONTAINER_COMMON_MOTION_END);
    auto centreX = (min.x + max.x) / 2;
    auto centreY = (min.y + max.y) / 2;

    if (g_isClosing)
    {
        min.x = Hermite(min.x, centreX, containerMotion);
        max.x = Hermite(max.x, centreX, containerMotion);
        min.y = Hermite(min.y, centreY, containerMotion);
        max.y = Hermite(max.y, centreY, containerMotion);
    }
    else
    {
        min.x = Hermite(centreX, min.x, containerMotion);
        max.x = Hermite(centreX, max.x, containerMotion);
        min.y = Hermite(centreY, min.y, containerMotion);
        max.y = Hermite(centreY, max.y, containerMotion);
    }

    auto colourMotion = g_isClosing
        ? ComputeMotion(g_appearTime, OVERLAY_CONTAINER_OUTRO_FADE_START, OVERLAY_CONTAINER_OUTRO_FADE_END)
        : ComputeMotion(g_appearTime, OVERLAY_CONTAINER_INTRO_FADE_START, OVERLAY_CONTAINER_INTRO_FADE_END);

    auto alpha = g_isClosing
        ? Hermite(1, 0, colourMotion)
        : Hermite(0, 1, colourMotion);

    DrawPauseContainer(min, max, alpha);

    if (containerMotion >= 1.0f)
    {
        drawList->PushClipRect(min, max);
        return true;
    }

    return false;
}

void AchievementOverlay::Init()
{
    g_fntSeurat = ImFontAtlasSnapshot::GetFont("FOT-SeuratPro-M.otf");
}

static bool g_soundAdministratorUpdated;
PPC_FUNC_IMPL(__imp__sub_82B43480);
PPC_FUNC(sub_82B43480)
{
    g_soundAdministratorUpdated = true;
    __imp__sub_82B43480(ctx, base);
}

static std::thread::id g_mainThreadId = std::this_thread::get_id();

static bool CanDequeueAchievement()
{
    if (g_soundAdministratorUpdated && std::this_thread::get_id() == g_mainThreadId && !AchievementOverlay::s_queue.empty())
    {
        uint32_t audioCenter = *reinterpret_cast<be<uint32_t>*>(g_memory.Translate(0x83362FFC));
        if (audioCenter != 0)
        {
            uint32_t member = *reinterpret_cast<be<uint32_t>*>(g_memory.Translate(audioCenter + 0x4));
            uint32_t category = 7; // Default to category 7

            return *reinterpret_cast<uint32_t*>(g_memory.Translate(member + 0x7C + category * 0x10 + 0x8)) != 0;
        }
    }

    return false;
}

void AchievementOverlay::Draw()
{
    if (!AchievementOverlay::s_isVisible && CanDequeueAchievement())
    {
        s_isVisible = true;
        g_isClosing = false;
        g_appearTime = ImGui::GetTime();
        g_achievement = g_xdbfWrapper.GetAchievement((EXDBFLanguage)Config::Language.Value, s_queue.front());
        s_queue.pop();

        if (Config::Language == ELanguage::English)
            g_achievement.Name = xdbf::FixInvalidSequences(g_achievement.Name);

        Game_PlaySound("obj_navi_appear");
    }

    if (!s_isVisible)
    {
        g_soundAdministratorUpdated = false;
        return;
    }

    if (ImGui::GetTime() - g_appearTime >= OVERLAY_DURATION)
        AchievementOverlay::Close();

    g_soundAdministratorUpdated = false;

    auto drawList = ImGui::GetBackgroundDrawList();
    auto& res = ImGui::GetIO().DisplaySize;

    auto strAchievementUnlocked = Localise("Achievements_Unlock").c_str();
    auto strAchievementName = g_achievement.Name.c_str();

    float fontSize = Scale(24);
    ImVec2 headerSize = g_fntSeurat->CalcTextSizeA(fontSize, FLT_MAX, 0, strAchievementUnlocked);
    ImVec2 bodySize = g_fntSeurat->CalcTextSizeA(fontSize, FLT_MAX, 0, strAchievementName);
    float maxSize = std::max(headerSize.x, bodySize.x) + Scale(5);

    float imageMarginX = Scale(25);
    float imageMarginY = Scale(22.5f);
    float imageSize = Scale(60);
    float textMarginX = imageMarginX * 2 + imageSize - Scale(5);
    float textMarginY = imageMarginY + Scale(2);
    float containerWidth = imageMarginX + textMarginX + maxSize;

    ImVec2 min((res.x / 2.0f) - (containerWidth / 2.0f), Scale(55));
    ImVec2 max(min.x + containerWidth, min.y + Scale(105));

    if (DrawContainer(min, max))
    {
        if (!g_isClosing)
        {
            drawList->AddImage(
                (ImTextureID)(uintptr_t)(g_xdbfTextureCache[g_achievement.ID]),
                ImVec2(min.x + imageMarginX, min.y + imageMarginY),
                ImVec2(min.x + imageMarginX + imageSize, min.y + imageMarginY + imageSize),
                ImVec2(0, 0),
                ImVec2(1, 1),
                IM_COL32(255, 255, 255, 255)
            );

            SetShaderModifier(IMGUI_SHADER_MODIFIER_LOW_QUALITY_TEXT);

            DrawTextWithShadow(
                g_fntSeurat,
                fontSize,
                ImVec2(min.x + textMarginX + (maxSize - headerSize.x) / 2, min.y + textMarginY),
                IM_COL32(252, 243, 5, 255),
                strAchievementUnlocked,
                2,
                1.0f,
                IM_COL32(0, 0, 0, 255)
            );

            DrawTextWithShadow(
                g_fntSeurat,
                fontSize,
                ImVec2(min.x + textMarginX + (maxSize - bodySize.x) / 2, min.y + textMarginY + bodySize.y + Scale(6)),
                IM_COL32(255, 255, 255, 255),
                strAchievementName,
                2,
                1.0f,
                IM_COL32(0, 0, 0, 255)
            );

            SetShaderModifier(IMGUI_SHADER_MODIFIER_NONE);
        }
        else
        {
            s_isVisible = false;
        }

        drawList->PopClipRect();
    }
}


void AchievementOverlay::Open(int id)
{
    s_queue.push(static_cast<uint16_t>(id));
}

void AchievementOverlay::Close()
{
    if (!g_isClosing)
    {
        g_appearTime = ImGui::GetTime();
        g_isClosing = true;
    }

    if (CanDequeueAchievement())
        s_isVisible = false;
}

