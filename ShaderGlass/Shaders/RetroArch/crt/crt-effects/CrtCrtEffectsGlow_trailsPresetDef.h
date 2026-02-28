/*
ShaderGlass preset crt/crt-effects / glow_trails imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/glow_trails.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsGlow_trailsPresetDef : public PresetDef
{
public:
	CrtCrtEffectsGlow_trailsPresetDef() : PresetDef{}
	{
		Name = "glow_trails";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "glow_trails_refpass"));
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
	}
};
}
