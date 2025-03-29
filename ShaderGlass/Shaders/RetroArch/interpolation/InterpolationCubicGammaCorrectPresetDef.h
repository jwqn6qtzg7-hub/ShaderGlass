/*
ShaderGlass preset interpolation / cubic-gamma-correct imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/cubic-gamma-correct.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersLinearizeShaderDef()
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
