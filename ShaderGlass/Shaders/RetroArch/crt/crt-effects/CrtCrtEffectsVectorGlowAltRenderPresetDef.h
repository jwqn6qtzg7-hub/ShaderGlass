/*
ShaderGlass preset crt/crt-effects / vector-glow-alt-render imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/vector-glow-alt-render.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsVectorGlowAltRenderPresetDef : public PresetDef
{
public:
	CrtCrtEffectsVectorGlowAltRenderPresetDef() : PresetDef{}
	{
		Name = "vector-glow-alt-render";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersImageAdjustmentShaderDef()
.Param("alias", "PASS1")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur43fastVerticalShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur43fastHorizontalShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersGlowTrailsCombineShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "mirrored_repeat"));
            OverrideParam("glowFactor", (float)0.100000);
            OverrideParam("haze_strength", (float)0.750000);
            OverrideParam("luminance", (float)1.500000);
            OverrideParam("mixfactor", (float)0.180000);
            OverrideParam("screen_combine", (float)1.000000);
            OverrideParam("threshold", (float)0.900000);
            OverrideParam("trail_bright", (float)0.300000);
	}
};
}
