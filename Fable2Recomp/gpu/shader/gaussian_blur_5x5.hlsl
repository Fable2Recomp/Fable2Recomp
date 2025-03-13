#include "copy_common.hlsli"

static const float weights[25] = {
    0.003765, 0.015019, 0.023792, 0.015019, 0.003765,
    0.015019, 0.059912, 0.094907, 0.059912, 0.015019,
    0.023792, 0.094907, 0.150342, 0.094907, 0.023792,
    0.015019, 0.059912, 0.094907, 0.059912, 0.015019,
    0.003765, 0.015019, 0.023792, 0.015019, 0.003765
};

static const float2 offsets[25] = {
    float2(-2, -2), float2(-1, -2), float2(0, -2), float2(1, -2), float2(2, -2),
    float2(-2, -1), float2(-1, -1), float2(0, -1), float2(1, -1), float2(2, -1),
    float2(-2,  0), float2(-1,  0), float2(0,  0), float2(1,  0), float2(2,  0),
    float2(-2,  1), float2(-1,  1), float2(0,  1), float2(1,  1), float2(2,  1),
    float2(-2,  2), float2(-1,  2), float2(0,  2), float2(1,  2), float2(2,  2)
};

float4 main(VS_OUTPUT input) : SV_TARGET
{
    float2 texelSize;
    float mipLevel;
    g_texture.GetDimensions(0, texelSize.x, texelSize.y, mipLevel);
    texelSize = 1.0 / texelSize;

    float4 color = 0;
    
    [unroll]
    for (int i = 0; i < 25; i++)
    {
        float2 uv = input.uv + offsets[i] * texelSize;
        color += g_texture.Sample(g_sampler, uv) * weights[i];
    }
    
    return color;
}
