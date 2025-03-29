/*
ShaderGlass preset pixel-art-scaling / pixel_aa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/pixel_aa.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingPixel_aaPresetDef : public PresetDef
{
public:
	PixelArtScalingPixel_aaPresetDef() : PresetDef{}
	{
		Name = "pixel_aa";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersPixel_aaTo_linShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(PixelArtScalingShadersPixel_aaPixel_aaShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
