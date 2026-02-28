/*
ShaderGlass preset motionblur / mix_frames_smart imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motionblur/mix_frames_smart.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurMix_frames_smartPresetDef : public PresetDef
{
public:
	MotionblurMix_frames_smartPresetDef() : PresetDef{}
	{
		Name = "mix_frames_smart";
		Category = "motionblur";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersMix_frames_smartShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
