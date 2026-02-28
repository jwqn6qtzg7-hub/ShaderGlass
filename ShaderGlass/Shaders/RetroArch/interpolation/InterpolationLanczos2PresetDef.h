/*
ShaderGlass preset interpolation / lanczos2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/lanczos2.slangp
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

	void Build() {
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
