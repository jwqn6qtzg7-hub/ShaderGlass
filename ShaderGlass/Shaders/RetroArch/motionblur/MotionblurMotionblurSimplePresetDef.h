/*
ShaderGlass preset motionblur / motionblur-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motionblur/motionblur-simple.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurMotionblurSimplePresetDef : public PresetDef
{
public:
	MotionblurMotionblurSimplePresetDef() : PresetDef{}
	{
		Name = "motionblur-simple";
		Category = "motionblur";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersMotionblurSimpleShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
