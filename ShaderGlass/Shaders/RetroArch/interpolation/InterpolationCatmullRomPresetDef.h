/*
ShaderGlass preset interpolation / catmull-rom imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/catmull-rom.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersCatmullRomShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
