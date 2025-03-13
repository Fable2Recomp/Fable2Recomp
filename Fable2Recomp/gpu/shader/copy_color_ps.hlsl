#include "copy_common.hlsli"

float4 main(VS_OUTPUT input) : SV_TARGET
{
    return g_texture.Sample(g_sampler, input.uv);
}
