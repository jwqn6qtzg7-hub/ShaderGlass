/*
ShaderGlass preset pixel-art-scaling / bandlimit-pixel imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/bandlimit-pixel.slangp
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

	void Build() {
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
