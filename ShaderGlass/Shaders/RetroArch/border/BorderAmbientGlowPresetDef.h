/*
ShaderGlass preset border / ambient-glow imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/border/ambient-glow.slangp
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
