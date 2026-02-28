/*
ShaderGlass preset motionblur / motionblur-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motionblur/motionblur-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurMotionblurColorPresetDef : public PresetDef
{
public:
	MotionblurMotionblurColorPresetDef() : PresetDef{}
	{
		Name = "motionblur-color";
		Category = "motionblur";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersMotionblurColorShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
