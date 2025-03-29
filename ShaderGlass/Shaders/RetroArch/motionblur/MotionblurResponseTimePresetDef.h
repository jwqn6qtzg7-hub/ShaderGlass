/*
ShaderGlass preset motionblur / response-time imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/motionblur/response-time.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MotionblurShadersResponseTimeShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
