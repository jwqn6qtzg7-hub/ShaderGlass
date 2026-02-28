/*
ShaderGlass preset pixel-art-scaling / smootheststep imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/smootheststep.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingSmootheststepPresetDef : public PresetDef
{
public:
	PixelArtScalingSmootheststepPresetDef() : PresetDef{}
	{
		Name = "smootheststep";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersSmootheststepShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
