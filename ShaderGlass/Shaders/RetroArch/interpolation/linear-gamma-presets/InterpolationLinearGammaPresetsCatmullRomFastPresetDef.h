/*
ShaderGlass preset interpolation/linear-gamma-presets / catmull-rom-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/linear-gamma-presets/catmull-rom-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationLinearGammaPresetsCatmullRomFastPresetDef : public PresetDef
{
public:
	InterpolationLinearGammaPresetsCatmullRomFastPresetDef() : PresetDef{}
	{
		Name = "catmull-rom-fast";
		Category = "interpolation/linear-gamma-presets";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersBicubicCatmullRomYShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "source")
.Param("scale_type_y", "viewport")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersBicubicCatmullRomXShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
            OverrideParam("C_LINEAR_GAMMA", (float)1.000000);
	}
};
}
