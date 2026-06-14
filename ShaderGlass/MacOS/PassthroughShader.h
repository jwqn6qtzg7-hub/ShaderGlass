#pragma once

#include "ShaderDef.h"

// Simple passthrough shader in GLSL for Vulkan.
// Used for testing the multi-pass chain.

class PassthroughShaderDef : public ShaderDef
{
public:
    PassthroughShaderDef() : ShaderDef {}
    {
        Name = "passthrough";

        VertexSource = R"(
#version 450
layout(binding = 0) uniform UBO {
    mat4 MVP;
};

layout(location = 0) in vec4 Position;
layout(location = 1) in vec2 TexCoord;
layout(location = 0) out vec2 vTexCoord;

void main() {
    gl_Position = MVP * Position;
    vTexCoord = TexCoord;
}
)";

        FragmentSource = R"(
#version 450
layout(binding = 2) uniform sampler2D Source;

layout(location = 0) in vec2 vTexCoord;
layout(location = 0) out vec4 FragColor;

void main() {
    FragColor = texture(Source, vTexCoord);
}
)";

        VertexByteCode   = nullptr;
        VertexLength     = 0;
        FragmentByteCode = nullptr;
        FragmentLength   = 0;

        Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.0f, 0.0f, 0.0f));
        Samplers.push_back(ShaderSampler("Source", 2));
    }
};
