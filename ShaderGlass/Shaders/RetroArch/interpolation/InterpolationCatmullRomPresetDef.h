/*
ShaderGlass preset interpolation / catmull-rom imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/catmull-rom.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationCatmullRomPresetDef : public PresetDef
{
public:
	InterpolationCatmullRomPresetDef() : PresetDef{}
	{
		Name = "catmull-rom";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersCatmullRomShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
