/*
ShaderGlass preset interpolation / lanczos2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/lanczos2.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationLanczos2PresetDef : public PresetDef
{
public:
	InterpolationLanczos2PresetDef() : PresetDef{}
	{
		Name = "lanczos2";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersLanczos2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersSupportShiftHalfPixelShaderDef()
.Param("filter_linear", "false")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
