#version 450

layout(location = 0) in vec2 inTexCoord;
layout(location = 1) in vec3 inNormal;
layout(location = 2) in vec4 inColor;

layout(location = 0) out vec4 outColor;

layout(set = 1, binding = 0) uniform sampler2D texSampler;

// Lighting parameters
layout(set = 2, binding = 0) uniform LightingParams {
    vec3 lightDir;
    vec3 lightColor;
    vec3 ambientColor;
    float specularPower;
} lighting;

void main() {
    // Sample texture
    vec4 texColor = texture(texSampler, inTexCoord);
    
    // Normalize vectors
    vec3 N = normalize(inNormal);
    vec3 L = normalize(-lighting.lightDir);
    
    // Calculate diffuse lighting
    float diff = max(dot(N, L), 0.0);
    vec3 diffuse = lighting.lightColor * diff;
    
    // Calculate specular lighting
    vec3 V = vec3(0.0, 0.0, 1.0); // View vector (assuming camera at z+)
    vec3 R = reflect(-L, N);
    float spec = pow(max(dot(R, V), 0.0), lighting.specularPower);
    vec3 specular = lighting.lightColor * spec;
    
    // Combine all lighting components
    vec3 finalColor = (lighting.ambientColor + diffuse) * texColor.rgb + specular;
    
    // Output final color with vertex color and alpha
    outColor = vec4(finalColor * inColor.rgb, texColor.a * inColor.a);
} 