/*
ShaderGlass preset crt/crt-effects / vector-glow imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/vector-glow.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsVectorGlowPresetDef : public PresetDef
{
public:
	CrtCrtEffectsVectorGlowPresetDef() : PresetDef{}
	{
		Name = "vector-glow";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "glow_trails_refpass")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersGlowTrailsGlowTrails0ShaderDef()
.Param("alias", "Trails0")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur9fastVerticalShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur9fastHorizontalShaderDef()
.Param("alias", "TRAIL_BLUR")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersGlowTrailsGlowTrails1ShaderDef());
         	ShaderDefs.push_back(AntiAliasingShadersAdvancedAaShaderDef()
.Param("alias", "PASS1"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur9fastVerticalShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur9fastHorizontalShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersGlowTrailsCombineShaderDef());
         	ShaderDefs.push_back(MiscShadersImageAdjustmentShaderDef()
.Param("scale_type", "viewport"));
            OverrideParam("bright", (float)1.000000);
            OverrideParam("glowFactor", (float)0.100000);
            OverrideParam("haze_strength", (float)0.250000);
            OverrideParam("luminance", (float)1.500000);
            OverrideParam("mixfactor", (float)0.180000);
            OverrideParam("threshold", (float)0.900000);
            OverrideParam("trail_bright", (float)0.300000);
	}
};
}
