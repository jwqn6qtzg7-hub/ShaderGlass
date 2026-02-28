/*
ShaderGlass preset motionblur / braid-rewind imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/motionblur/braid-rewind.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurBraidRewindPresetDef : public PresetDef
{
public:
	MotionblurBraidRewindPresetDef() : PresetDef{}
	{
		Name = "braid-rewind";
		Category = "motionblur";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersBraidRewindShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
