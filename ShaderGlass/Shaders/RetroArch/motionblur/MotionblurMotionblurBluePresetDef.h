/*
ShaderGlass preset motionblur / motionblur-blue imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motionblur/motionblur-blue.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurMotionblurBluePresetDef : public PresetDef
{
public:
	MotionblurMotionblurBluePresetDef() : PresetDef{}
	{
		Name = "motionblur-blue";
		Category = "motionblur";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersMotionblurBlueShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
