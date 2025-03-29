/*
ShaderGlass preset interpolation / quilez imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/quilez.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationQuilezPresetDef : public PresetDef
{
public:
	InterpolationQuilezPresetDef() : PresetDef{}
	{
		Name = "quilez";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersQuilezShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
