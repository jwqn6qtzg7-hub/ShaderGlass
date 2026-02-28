/*
ShaderGlass preset motion-interpolation / motion_interpolation imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motion-interpolation/motion_interpolation.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionInterpolationMotion_interpolationPresetDef : public PresetDef
{
public:
	MotionInterpolationMotion_interpolationPresetDef() : PresetDef{}
	{
		Name = "motion_interpolation";
		Category = "motion-interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(MotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDef()
.Param("alias", "Pass0")
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(MotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDef()
.Param("filter_linear", "true"));
	}
};
}
