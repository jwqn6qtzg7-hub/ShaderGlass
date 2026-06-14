#pragma once

#include "ShaderDef.h"

// GLSL equivalent of the preprocess shader for Vulkan (SPIR-V target).
// Original Windows version uses HLSL compiled to DXBC.
// This provides the GLSL source directly so GLSL::GenerateSPIRV can
// produce Vulkan-compatible SPIR-V.

class PreprocessShaderDef : public ShaderDef
{
public:
    PreprocessShaderDef() : ShaderDef {}
    {
        Name = "preprocess";

        // GLSL vertex shader: fullscreen triangle, outputs UV coords.
        // Supports vertical flip via SGVertical uniform.
        VertexSource = R"(
#version 450
layout(binding = 0) uniform UBO {
    mat4 MVP;
    float SGVertical;
};

layout(location = 0) in vec4 Position;
layout(location = 1) in vec2 TexCoord;

layout(location = 0) out vec2 vTexCoord;

void main() {
    vec4 pos = MVP * Position;
    gl_Position = SGVertical > 0.5 ? pos.yxzw : pos;
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
        Params.push_back(ShaderParam("SGVertical", 0, 64, 4, 0.0f, 1.0f, 0.0f));
        Samplers.push_back(ShaderSampler("Source", 2));
    }
};
