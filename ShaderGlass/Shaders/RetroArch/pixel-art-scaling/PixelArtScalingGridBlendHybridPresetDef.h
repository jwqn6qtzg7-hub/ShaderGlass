/*
ShaderGlass preset pixel-art-scaling / grid-blend-hybrid imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/grid-blend-hybrid.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingGridBlendHybridPresetDef : public PresetDef
{
public:
	PixelArtScalingGridBlendHybridPresetDef() : PresetDef{}
	{
		Name = "grid-blend-hybrid";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersGridBlendHybridShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
