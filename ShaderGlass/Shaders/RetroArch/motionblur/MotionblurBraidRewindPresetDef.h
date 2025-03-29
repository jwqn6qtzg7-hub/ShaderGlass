/*
ShaderGlass preset motionblur / braid-rewind imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/motionblur/braid-rewind.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MotionblurShadersBraidRewindShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
