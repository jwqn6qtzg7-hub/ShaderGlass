/*
ShaderGlass preset pixel-art-scaling / controlled_sharpness imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/controlled_sharpness.slangp
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

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersControlledSharpnessShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
