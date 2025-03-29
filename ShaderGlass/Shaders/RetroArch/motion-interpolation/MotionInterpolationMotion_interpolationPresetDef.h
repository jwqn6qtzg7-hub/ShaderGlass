/*
ShaderGlass preset motion-interpolation / motion_interpolation imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/motion-interpolation/motion_interpolation.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDef()
.Param("alias", "Pass0")
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(MotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDef()
.Param("filter_linear", "true"));
	}
};
}
