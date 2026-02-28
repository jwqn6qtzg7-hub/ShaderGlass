/*
ShaderGlass preset deinterlacing / motion-adaptive-deinterlacing imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/deinterlacing/motion-adaptive-deinterlacing.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeinterlacingMotionAdaptiveDeinterlacingPresetDef : public PresetDef
{
public:
	DeinterlacingMotionAdaptiveDeinterlacingPresetDef() : PresetDef{}
	{
		Name = "motion-adaptive-deinterlacing";
		Category = "deinterlacing";
	}

	void Build() {
         	ShaderDefs.push_back(DeinterlacingShadersMotionAdaptiveDeinterlacingShaderDef()
.Param("scale_type", "source"));
	}
};
}
