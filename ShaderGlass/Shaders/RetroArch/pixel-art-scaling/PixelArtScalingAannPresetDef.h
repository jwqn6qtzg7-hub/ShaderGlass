/*
ShaderGlass preset pixel-art-scaling / aann imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/aann.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingAannPresetDef : public PresetDef
{
public:
	PixelArtScalingAannPresetDef() : PresetDef{}
	{
		Name = "aann";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersAannShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
