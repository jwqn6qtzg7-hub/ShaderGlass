/*
ShaderGlass preset interpolation / catmull-rom-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/catmull-rom-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationCatmullRomFastPresetDef : public PresetDef
{
public:
	InterpolationCatmullRomFastPresetDef() : PresetDef{}
	{
		Name = "catmull-rom-fast";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersCatmullRomXShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersCatmullRomYShaderDef()
.Param("filter_linear", "false")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
