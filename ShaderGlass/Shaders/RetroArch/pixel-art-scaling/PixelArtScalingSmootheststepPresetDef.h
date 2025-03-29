/*
ShaderGlass preset pixel-art-scaling / smootheststep imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/smootheststep.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersSmootheststepShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
