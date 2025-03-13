#include "copy_common.hlsli"

float main(VS_OUTPUT input) : SV_DEPTH
{
    return g_texture.Sample(g_sampler, input.uv).r;
}
