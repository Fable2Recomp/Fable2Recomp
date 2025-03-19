#include "copy_common.hlsli"

static const float weights[49] = {
    0.000036, 0.000363, 0.001446, 0.002291, 0.001446, 0.000363, 0.000036,
    0.000363, 0.003676, 0.014662, 0.023226, 0.014662, 0.003676, 0.000363,
    0.001446, 0.014662, 0.058488, 0.092651, 0.058488, 0.014662, 0.001446,
    0.002291, 0.023226, 0.092651, 0.146768, 0.092651, 0.023226, 0.002291,
    0.001446, 0.014662, 0.058488, 0.092651, 0.058488, 0.014662, 0.001446,
    0.000363, 0.003676, 0.014662, 0.023226, 0.014662, 0.003676, 0.000363,
    0.000036, 0.000363, 0.001446, 0.002291, 0.001446, 0.000363, 0.000036
};

static const float2 offsets[49] = {
    float2(-3, -3), float2(-2, -3), float2(-1, -3), float2(0, -3), float2(1, -3), float2(2, -3), float2(3, -3),
    float2(-3, -2), float2(-2, -2), float2(-1, -2), float2(0, -2), float2(1, -2), float2(2, -2), float2(3, -2),
    float2(-3, -1), float2(-2, -1), float2(-1, -1), float2(0, -1), float2(1, -1), float2(2, -1), float2(3, -1),
    float2(-3,  0), float2(-2,  0), float2(-1,  0), float2(0,  0), float2(1,  0), float2(2,  0), float2(3,  0),
    float2(-3,  1), float2(-2,  1), float2(-1,  1), float2(0,  1), float2(1,  1), float2(2,  1), float2(3,  1),
    float2(-3,  2), float2(-2,  2), float2(-1,  2), float2(0,  2), float2(1,  2), float2(2,  2), float2(3,  2),
    float2(-3,  3), float2(-2,  3), float2(-1,  3), float2(0,  3), float2(1,  3), float2(2,  3), float2(3,  3)
};

float4 main(VS_OUTPUT input) : SV_TARGET
{
    float2 texelSize;
    float mipLevel;
    g_texture.GetDimensions(0, texelSize.x, texelSize.y, mipLevel);
    texelSize = 1.0 / texelSize;

    float4 color = 0;
    
    [unroll]
    for (int i = 0; i < 49; i++)
    {
        float2 uv = input.uv + offsets[i] * texelSize;
        color += g_texture.Sample(g_sampler, uv) * weights[i];
    }
    
    return color;
}
