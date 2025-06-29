/*
ShaderGlass preset interpolation / catmull-rom-4-taps imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/catmull-rom-4-taps.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationCatmullRom4TapsPresetDef : public PresetDef
{
public:
	InterpolationCatmullRom4TapsPresetDef() : PresetDef{}
	{
		Name = "catmull-rom-4-taps";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersSupportCheckerboardInvertedShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(InterpolationShadersCatmullRom4TapsShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
