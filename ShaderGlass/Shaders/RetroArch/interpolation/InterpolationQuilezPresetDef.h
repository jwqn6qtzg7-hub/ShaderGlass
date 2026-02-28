/*
ShaderGlass preset interpolation / quilez imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/quilez.slangp
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

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersQuilezShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
