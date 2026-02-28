/*
ShaderGlass preset interpolation / cubic imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/cubic.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationCubicPresetDef : public PresetDef
{
public:
	InterpolationCubicPresetDef() : PresetDef{}
	{
		Name = "cubic";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersCubicShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
