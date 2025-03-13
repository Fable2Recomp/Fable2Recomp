#include "copy_common.hlsli"

VS_OUTPUT main(VS_INPUT input)
{
    VS_OUTPUT output;
    output.pos = mul(g_transform, float4(input.pos, 0.0f, 1.0f));
    output.uv = input.uv;
    return output;
}
