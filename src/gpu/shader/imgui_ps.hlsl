#include "imgui_common.hlsli"

float4 main(VS_OUTPUT input) : SV_TARGET
{
    float4 color = input.col * g_texture.Sample(g_sampler, input.uv);
    return color;
}
