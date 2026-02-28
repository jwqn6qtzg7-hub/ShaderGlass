/*
ShaderGlass preset interpolation / catmull-rom-5-taps imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/catmull-rom-5-taps.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationCatmullRom5TapsPresetDef : public PresetDef
{
public:
	InterpolationCatmullRom5TapsPresetDef() : PresetDef{}
	{
		Name = "catmull-rom-5-taps";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersCatmullRom5TapsShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
