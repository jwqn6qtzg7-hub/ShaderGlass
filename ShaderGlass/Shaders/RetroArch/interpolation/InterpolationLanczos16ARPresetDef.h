/*
ShaderGlass preset interpolation / lanczos16-AR imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/lanczos16-AR.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationLanczos16ARPresetDef : public PresetDef
{
public:
	InterpolationLanczos16ARPresetDef() : PresetDef{}
	{
		Name = "lanczos16-AR";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersLanczos16ARShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
