/*
ShaderGlass preset motionblur / response-time imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motionblur/response-time.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurResponseTimePresetDef : public PresetDef
{
public:
	MotionblurResponseTimePresetDef() : PresetDef{}
	{
		Name = "response-time";
		Category = "motionblur";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersResponseTimeShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
