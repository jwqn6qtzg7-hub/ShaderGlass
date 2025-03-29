/*
ShaderGlass preset pixel-art-scaling / pixel_aa_single_pass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/pixel_aa_single_pass.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingPixel_aa_single_passPresetDef : public PresetDef
{
public:
	PixelArtScalingPixel_aa_single_passPresetDef() : PresetDef{}
	{
		Name = "pixel_aa_single_pass";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
