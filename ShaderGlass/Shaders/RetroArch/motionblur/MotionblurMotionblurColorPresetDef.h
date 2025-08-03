/*
ShaderGlass preset motionblur / motionblur-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/motionblur/motionblur-color.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MotionblurShadersMotionblurColorShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
