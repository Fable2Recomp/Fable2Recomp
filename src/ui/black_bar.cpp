#include "black_bar.h"

void BlackBar::Draw()
{
    auto drawList = ImGui::GetBackgroundDrawList();
    auto& res = ImGui::GetIO().DisplaySize;

    // Draw side pillarbox bars for Inspire mode
    if (g_inspirePillarbox)
    {
        float width = (res.x - (res.y * 16.0f / 9.0f)) / 2.0f;

        drawList->AddRectFilled(
            { 0.0f, 0.0f },
            { width, res.y },
            IM_COL32_BLACK);

        drawList->AddRectFilled(
            { res.x - width, 0.0f },
            res,
            IM_COL32_BLACK);

        g_inspirePillarbox = false;
    }

    // Draw loading black bars if needed
    if (g_loadingBlackBarAlpha != 0)
    {
        if (g_aspectRatio > WIDE_ASPECT_RATIO)
        {
            drawList->AddRectFilled(
                { 0.0f, 0.0f }, 
                { g_loadingBlackBarMin.x, g_loadingBlackBarMax.y },
                IM_COL32(0, 0, 0, g_loadingBlackBarAlpha));

            drawList->AddRectFilled(
                { g_loadingBlackBarMax.x, g_loadingBlackBarMin.y }, 
                res,
                IM_COL32(0, 0, 0, g_loadingBlackBarAlpha));
        }
        else if (g_aspectRatio < NARROW_ASPECT_RATIO)
        {
            drawList->AddRectFilled(
                { 0.0f, 0.0f },
                { g_loadingBlackBarMax.x, g_loadingBlackBarMin.y },
                IM_COL32(0, 0, 0, g_loadingBlackBarAlpha));

            drawList->AddRectFilled(
                { g_loadingBlackBarMin.x, g_loadingBlackBarMax.y },
                res,
                IM_COL32(0, 0, 0, g_loadingBlackBarAlpha));
        }

        g_loadingBlackBarAlpha = 0;
    }
}

