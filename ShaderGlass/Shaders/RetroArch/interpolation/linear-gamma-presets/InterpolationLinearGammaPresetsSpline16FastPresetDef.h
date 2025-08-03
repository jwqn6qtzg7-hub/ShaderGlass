/*
ShaderGlass preset interpolation/linear-gamma-presets / spline16-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/interpolation/linear-gamma-presets/spline16-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationLinearGammaPresetsSpline16FastPresetDef : public PresetDef
{
public:
	InterpolationLinearGammaPresetsSpline16FastPresetDef() : PresetDef{}
	{
		Name = "spline16-fast";
		Category = "interpolation/linear-gamma-presets";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersSplineSpline16YShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "source")
.Param("scale_type_y", "viewport")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersSplineSpline16XShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
            OverrideParam("S16_LINEAR_GAMMA", (float)1.000000);
	}
};
}
