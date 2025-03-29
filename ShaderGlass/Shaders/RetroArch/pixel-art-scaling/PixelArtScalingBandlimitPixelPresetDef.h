/*
ShaderGlass preset pixel-art-scaling / bandlimit-pixel imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/bandlimit-pixel.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingBandlimitPixelPresetDef : public PresetDef
{
public:
	PixelArtScalingBandlimitPixelPresetDef() : PresetDef{}
	{
		Name = "bandlimit-pixel";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(LinearLinearizeShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(PixelArtScalingShadersBandlimitPixelShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
