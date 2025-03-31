#include "copy_common.hlsli"

#ifndef SAMPLE_COUNT
#error SAMPLE_COUNT must be defined
#endif

Texture2DMS<float4, SAMPLE_COUNT> g_textureMS : register(t0);

float4 ResolveColor(VS_OUTPUT input)
{
    int2 dimensions;
    g_textureMS.GetDimensions(dimensions.x, dimensions.y);
    
    int2 coord = int2(input.uv * dimensions);
    float4 color = 0;
    
    [unroll]
    for (uint i = 0; i < SAMPLE_COUNT; i++)
    {
        color += g_textureMS.Load(coord, i);
    }
    
    return color / SAMPLE_COUNT;
}
