/*
ShaderGlass preset crt / glow_trails imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/glow_trails.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtGlow_trailsPresetDef : public PresetDef
{
public:
	CrtGlow_trailsPresetDef() : PresetDef{}
	{
		Name = "glow_trails";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "glow_trails_refpass"));
         	ShaderDefs.push_back(CrtShadersGlowTrailsGlowTrails0ShaderDef()
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
         	ShaderDefs.push_back(CrtShadersGlowTrailsGlowTrails1ShaderDef());
	}
};
}
