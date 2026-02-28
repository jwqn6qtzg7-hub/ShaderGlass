/*
ShaderGlass preset pixel-art-scaling / pixel_aa_fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/pixel_aa_fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingPixel_aa_fastPresetDef : public PresetDef
{
public:
	PixelArtScalingPixel_aa_fastPresetDef() : PresetDef{}
	{
		Name = "pixel_aa_fast";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersPixel_aaTo_lin_fastShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(PixelArtScalingShadersPixel_aaPixel_aa_fastShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
