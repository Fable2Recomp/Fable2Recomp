#include "copy_common.hlsli"

#ifndef SAMPLE_COUNT
#error SAMPLE_COUNT must be defined
#endif

Texture2DMS<float, SAMPLE_COUNT> g_textureMS : register(t0);

float ResolveDepth(VS_OUTPUT input)
{
    int2 dimensions;
    g_textureMS.GetDimensions(dimensions.x, dimensions.y);
    
    int2 coord = int2(input.uv * dimensions);
    float depth = 0;
    
    [unroll]
    for (uint i = 0; i < SAMPLE_COUNT; i++)
    {
        depth = max(depth, g_textureMS.Load(coord, i));
    }
    
    return depth;
}
