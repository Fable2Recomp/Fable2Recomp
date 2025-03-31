#define SAMPLE_COUNT 8
#include "resolve_msaa_color.hlsli"

float4 main(VS_OUTPUT input) : SV_TARGET
{
    return ResolveColor(input);
}
