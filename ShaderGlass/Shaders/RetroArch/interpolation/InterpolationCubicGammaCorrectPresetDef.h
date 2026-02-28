/*
ShaderGlass preset interpolation / cubic-gamma-correct imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/cubic-gamma-correct.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationCubicGammaCorrectPresetDef : public PresetDef
{
public:
	InterpolationCubicGammaCorrectPresetDef() : PresetDef{}
	{
		Name = "cubic-gamma-correct";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersSupportLinearizeShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(InterpolationShadersCubicGammaCorrectShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
