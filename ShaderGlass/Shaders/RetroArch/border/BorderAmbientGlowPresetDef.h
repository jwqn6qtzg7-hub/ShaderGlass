/*
ShaderGlass preset border / ambient-glow imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/border/ambient-glow.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderAmbientGlowPresetDef : public PresetDef
{
public:
	BorderAmbientGlowPresetDef() : PresetDef{}
	{
		Name = "ambient-glow";
		Category = "border";
	}

	void Build() {
         	ShaderDefs.push_back(MotionblurShadersFeedbackShaderDef()
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(BorderShadersAmbientGlowShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale_type", "viewport"));
            OverrideParam("mixfactor", (float)0.950000);
	}
};
}
