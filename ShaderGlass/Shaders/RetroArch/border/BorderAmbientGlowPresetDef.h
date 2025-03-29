/*
ShaderGlass preset border / ambient-glow imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/border/ambient-glow.slangp
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

	virtual void Build() {
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
