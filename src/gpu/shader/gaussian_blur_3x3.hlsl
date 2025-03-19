#include "copy_common.hlsli"

static const float weights[9] = {
    0.077847, 0.123317, 0.077847,
    0.123317, 0.195346, 0.123317,
    0.077847, 0.123317, 0.077847
};

static const float2 offsets[9] = {
    float2(-1, -1), float2(0, -1), float2(1, -1),
    float2(-1,  0), float2(0,  0), float2(1,  0),
    float2(-1,  1), float2(0,  1), float2(1,  1)
};

float4 main(VS_OUTPUT input) : SV_TARGET
{
    float2 texelSize;
    float mipLevel;
    g_texture.GetDimensions(0, texelSize.x, texelSize.y, mipLevel);
    texelSize = 1.0 / texelSize;

    float4 color = 0;
    
    [unroll]
    for (int i = 0; i < 9; i++)
    {
        float2 uv = input.uv + offsets[i] * texelSize;
        color += g_texture.Sample(g_sampler, uv) * weights[i];
    }
    
    return color;
}
