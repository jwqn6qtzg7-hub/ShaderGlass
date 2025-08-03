/*
ShaderGlass preset interpolation / catmull-rom-5-taps imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/interpolation/catmull-rom-5-taps.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersCatmullRom5TapsShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
