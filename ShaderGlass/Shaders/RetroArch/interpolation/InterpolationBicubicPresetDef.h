/*
ShaderGlass preset interpolation / bicubic imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/bicubic.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationBicubicPresetDef : public PresetDef
{
public:
	InterpolationBicubicPresetDef() : PresetDef{}
	{
		Name = "bicubic";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersBicubicShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
