/*
ShaderGlass preset crt/crt-effects / ray_traced_curvature imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/ray_traced_curvature.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsRay_traced_curvaturePresetDef : public PresetDef
{
public:
	CrtCrtEffectsRay_traced_curvaturePresetDef() : PresetDef{}
	{
		Name = "ray_traced_curvature";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersRt_curvatureRt_curvatureShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale_type", "viewport"));
	}
};
}
