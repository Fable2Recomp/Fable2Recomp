#define SAMPLE_COUNT 4
#include "resolve_msaa_depth.hlsli"

float main(VS_OUTPUT input) : SV_DEPTH
{
    return ResolveDepth(input);
}
