/*
ShaderGlass preset pixel-art-scaling / smootheststep imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/pixel-art-scaling/smootheststep.slangp
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
