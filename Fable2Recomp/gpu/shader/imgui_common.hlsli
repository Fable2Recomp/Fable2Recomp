struct VS_INPUT
{
    float2 pos : POSITION;
    float2 uv : TEXCOORD0;
    float4 col : COLOR0;
};

struct VS_OUTPUT
{
    float4 pos : SV_POSITION;
    float4 col : COLOR0;
    float2 uv : TEXCOORD0;
};

cbuffer Constants : register(b0)
{
    float4x4 g_projectionMatrix;
};

Texture2D g_texture : register(t0);
SamplerState g_sampler : register(s0);
