/*
ShaderGlass preset pixel-art-scaling / controlled_sharpness imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/controlled_sharpness.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingControlled_sharpnessPresetDef : public PresetDef
{
public:
	PixelArtScalingControlled_sharpnessPresetDef() : PresetDef{}
	{
		Name = "controlled_sharpness";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersControlledSharpnessShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
