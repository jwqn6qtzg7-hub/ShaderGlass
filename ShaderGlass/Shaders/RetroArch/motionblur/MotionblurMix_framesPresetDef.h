/*
ShaderGlass preset motionblur / mix_frames imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motionblur/mix_frames.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurMix_framesPresetDef : public PresetDef
{
public:
	MotionblurMix_framesPresetDef() : PresetDef{}
	{
		Name = "mix_frames";
		Category = "motionblur";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersMix_framesShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
