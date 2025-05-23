#include "button_guide.h"
#include "imgui_utils.h"
#include <gpu/imgui/imgui_snapshot.h>
#include <gpu/video.h>
#include <hid/hid.h>
#include <user/config.h>
#include <app.h>
#include <decompressor.h>

// Temporary fallback (replace with correct extern reference if needed)
float g_aspectRatioOffsetX = 0.0f;
float g_aspectRatioOffsetY = 0.0f;

constexpr float DEFAULT_SIDE_MARGINS = 379;

ImFont* g_fntNewRodin;
std::unique_ptr<GuestTexture> g_upControllerIcons;
std::unique_ptr<GuestTexture> g_upKBMIcons;

float g_sideMargins = DEFAULT_SIDE_MARGINS;
std::vector<Button> g_buttons;

std::unordered_map<EButtonIcon, float> g_iconWidths = {
    { EButtonIcon::A, 40 }, { EButtonIcon::B, 40 }, { EButtonIcon::X, 40 }, { EButtonIcon::Y, 40 },
    { EButtonIcon::LB, 70 }, { EButtonIcon::RB, 70 }, { EButtonIcon::LBRB, 70 },
    { EButtonIcon::LT, 42 }, { EButtonIcon::RT, 42 }, { EButtonIcon::LTRT, 42 },
    { EButtonIcon::Start, 40 }, { EButtonIcon::Back, 40 },
    { EButtonIcon::LMB, 40 }, { EButtonIcon::Enter, 40 }, { EButtonIcon::Escape, 40 }
};

std::unordered_map<EButtonIcon, float> g_iconHeights = g_iconWidths;

std::tuple<std::tuple<ImVec2, ImVec2>, GuestTexture*> GetButtonIcon(EButtonIcon icon)
{
    std::tuple<ImVec2, ImVec2> uv;
    GuestTexture* texture = nullptr;

    bool isPlayStation = Config::ControllerIcons == EControllerIcons::Auto
        ? hid::g_inputDeviceController == hid::EInputDevice::PlayStation
        : Config::ControllerIcons == EControllerIcons::PlayStation;

    int yOffsetCmn = isPlayStation ? 42 : 0;
    int yOffsetStartBack = isPlayStation ? 46 : 0;

    switch (icon) {
        case EButtonIcon::A:     uv = PIXELS_TO_UV_COORDS(512, 128, 0, yOffsetCmn, 40, 40); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::B:     uv = PIXELS_TO_UV_COORDS(512, 128, 40, yOffsetCmn, 40, 40); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::X:     uv = PIXELS_TO_UV_COORDS(512, 128, 80, yOffsetCmn, 40, 40); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::Y:     uv = PIXELS_TO_UV_COORDS(512, 128, 120, yOffsetCmn, 40, 40); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::LB:    uv = PIXELS_TO_UV_COORDS(512, 128, 166, yOffsetCmn, 70, 40); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::RB:    uv = PIXELS_TO_UV_COORDS(512, 128, 246, yOffsetCmn, 70, 40); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::LT:    uv = PIXELS_TO_UV_COORDS(512, 128, 320, yOffsetCmn, 40, 42); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::RT:    uv = PIXELS_TO_UV_COORDS(512, 128, 360, yOffsetCmn, 40, 42); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::Start: uv = PIXELS_TO_UV_COORDS(512, 128, 455, yOffsetStartBack, 46, 46); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::Back:  uv = PIXELS_TO_UV_COORDS(512, 128, 408, yOffsetStartBack, 46, 46); texture = g_upControllerIcons.get(); break;
        case EButtonIcon::LMB:   uv = PIXELS_TO_UV_COORDS(384, 128, 0, 0, 128, 128); texture = g_upKBMIcons.get(); break;
        case EButtonIcon::Enter: uv = PIXELS_TO_UV_COORDS(384, 128, 128, 0, 128, 128); texture = g_upKBMIcons.get(); break;
        case EButtonIcon::Escape:uv = PIXELS_TO_UV_COORDS(384, 128, 256, 0, 128, 128); texture = g_upKBMIcons.get(); break;
        default: break;
    }

    return std::make_tuple(uv, texture);
}

static void DrawGuide(float* offset, ImVec2 regionMin, ImVec2 regionMax, EButtonIcon icon,
    EButtonAlignment alignment, ImVec2 iconMin, ImVec2 iconMax, EFontQuality fontQuality,
    float textWidth, float maxTextWidth, float textScale, float fontSize, const char* text)
{
    auto drawList = ImGui::GetBackgroundDrawList();
    auto iconWidth = Scale(g_iconWidths[icon]);
    auto textMarginY = regionMin.y + Scale(9.0f);
    ImVec2 textPos;

    if (icon == EButtonIcon::LBRB || icon == EButtonIcon::LTRT)
    {
        auto iconMarginX = Scale(16);

        iconMin.x = alignment == EButtonAlignment::Left
            ? regionMin.x + *offset - maxTextWidth + (iconWidth / 2)
            : regionMax.x - *offset - maxTextWidth - (iconWidth / 2) - iconMarginX;

        iconMax.x = iconMin.x + iconWidth;

        auto leftBtn = GetButtonIcon(icon == EButtonIcon::LBRB ? EButtonIcon::LB : EButtonIcon::LT);
        drawList->AddImage(reinterpret_cast<ImTextureID>(std::get<1>(leftBtn)), iconMin, iconMax, GET_UV_COORDS(std::get<0>(leftBtn)));

        ImVec2 dualIconMin = alignment == EButtonAlignment::Left
            ? ImVec2(iconMax.x + maxTextWidth + iconMarginX, iconMin.y)
            : ImVec2(regionMax.x - *offset + maxTextWidth - iconWidth, iconMin.y);
        ImVec2 dualIconMax = ImVec2(dualIconMin.x + iconWidth, iconMax.y);

        auto rightBtn = GetButtonIcon(icon == EButtonIcon::LBRB ? EButtonIcon::RB : EButtonIcon::RT);
        drawList->AddImage(reinterpret_cast<ImTextureID>(std::get<1>(rightBtn)), dualIconMin, dualIconMax, GET_UV_COORDS(std::get<0>(rightBtn)));

        textPos = { (iconMax.x + ((dualIconMin.x - iconMax.x) - maxTextWidth + std::max(0.0f, maxTextWidth - textWidth)) / 2) + Scale(2), textMarginY };
        *offset += iconWidth;
    }
    else
    {
        auto btnIcon = GetButtonIcon(icon);
        drawList->AddImage(reinterpret_cast<ImTextureID>(std::get<1>(btnIcon)), iconMin, iconMax, GET_UV_COORDS(std::get<0>(btnIcon)));

        auto textMarginX = alignment == EButtonAlignment::Left
            ? regionMin.x + *offset
            : regionMax.x - *offset;

        textPos = { textMarginX, textMarginY };
    }

    SetScale({ textScale, 1.0f });
    SetOrigin(textPos);

    if (fontQuality == EFontQuality::Low)
        SetShaderModifier(IMGUI_SHADER_MODIFIER_LOW_QUALITY_TEXT);

    DrawTextWithOutline(g_fntNewRodin, fontSize, textPos, IM_COL32_WHITE, text, 4, IM_COL32_BLACK);

    if (fontQuality == EFontQuality::Low)
    {
        auto drawList = ImGui::GetBackgroundDrawList();
        drawList->AddText(g_fntNewRodin, fontSize, textPos, IM_COL32(255, 255, 255, 127), text);
        SetShaderModifier(IMGUI_SHADER_MODIFIER_NONE);
    }

    SetScale({ 1.0f, 1.0f });
    SetOrigin({ 0.0f, 0.0f });
}

void ButtonGuide::Init()
{
    g_fntNewRodin = ImFontAtlasSnapshot::GetFont("FOT-NewRodinPro-M.otf");
    //g_upControllerIcons = LOAD_ZSTD_TEXTURE(g_controller);
    //g_upKBMIcons = LOAD_ZSTD_TEXTURE(g_kbm);
}

void ButtonGuide::Draw()
{
    if (!s_isVisible)
        return;

    auto& res = ImGui::GetIO().DisplaySize;
    ImVec2 regionMin = { g_aspectRatioOffsetX + Scale(g_sideMargins), g_aspectRatioOffsetY * 2.0f + Scale(720.0f - 102.0f) };
    ImVec2 regionMax = { g_aspectRatioOffsetX + Scale(1280.0f - g_sideMargins), g_aspectRatioOffsetY * 2.0f + Scale(720.0f) };

    auto textMarginX = Scale(21.25f);
    auto iconMarginX = Scale(4);
    auto fontSize = Scale(21.8f);

    float offsetLeft = 0.0f;
    float offsetRight = 0.0f;

    for (size_t i = 0; i < g_buttons.size(); i++)
    {
        auto& btn = g_buttons[i];
        if (btn.Alignment != EButtonAlignment::Left || (btn.Visibility && !*btn.Visibility)) continue;

        auto str = Localise(btn.Name).c_str();
        float iconWidth = Scale(g_iconWidths[btn.Icon]);
        float iconHeight = Scale(g_iconHeights[btn.Icon]);
        float textWidth = g_fntNewRodin->CalcTextSizeA(fontSize, FLT_MAX, 0, str).x;
        float maxWidth = btn.MaxWidth == FLT_MAX ? textWidth : Scale(btn.MaxWidth);
        float textScale = std::min(1.0f, maxWidth / textWidth);

        if (i > 0)
            offsetLeft += maxWidth + iconWidth + textMarginX;

        ImVec2 iconMin = { regionMin.x + offsetLeft - iconWidth - iconMarginX, regionMin.y };
        ImVec2 iconMax = { regionMin.x + offsetLeft - iconMarginX, regionMin.y + iconHeight };

        DrawGuide(&offsetLeft, regionMin, regionMax, btn.Icon, btn.Alignment, iconMin, iconMax, btn.FontQuality, textWidth, maxWidth, textScale, fontSize, str);
    }

    for (int i = static_cast<int>(g_buttons.size()) - 1; i >= 0; i--)
    {
        auto& btn = g_buttons[i];
        if (btn.Alignment != EButtonAlignment::Right || (btn.Visibility && !*btn.Visibility)) continue;

        auto str = Localise(btn.Name).c_str();
        float iconWidth = Scale(g_iconWidths[btn.Icon]);
        float iconHeight = Scale(g_iconHeights[btn.Icon]);
        float textWidth = g_fntNewRodin->CalcTextSizeA(fontSize, FLT_MAX, 0, str).x;
        float maxWidth = btn.MaxWidth == FLT_MAX ? textWidth : Scale(btn.MaxWidth);
        float textScale = std::min(1.0f, maxWidth / textWidth);

        if (i < static_cast<int>(g_buttons.size()) - 1)
            offsetRight += maxWidth + iconWidth + textMarginX;

        ImVec2 iconMin = { regionMax.x - offsetRight - iconWidth - iconMarginX, regionMin.y };
        ImVec2 iconMax = { regionMax.x - offsetRight - iconMarginX, regionMin.y + iconHeight };

        DrawGuide(&offsetRight, regionMin, regionMax, btn.Icon, btn.Alignment, iconMin, iconMax, btn.FontQuality, textWidth, maxWidth, textScale, fontSize, str);
    }
}

void ButtonGuide::Open(Button button)
{
    s_isVisible = true;
    g_sideMargins = DEFAULT_SIDE_MARGINS;
    g_buttons.clear();
    g_buttons.push_back(button);
}

void ButtonGuide::Open(const std::span<Button> buttons)
{
    s_isVisible = true;
    g_sideMargins = DEFAULT_SIDE_MARGINS;
    g_buttons = std::vector<Button>(buttons.begin(), buttons.end());
}

void ButtonGuide::SetSideMargins(float width)
{
    g_sideMargins = width;
}

void ButtonGuide::Close()
{
    s_isVisible = false;
}

