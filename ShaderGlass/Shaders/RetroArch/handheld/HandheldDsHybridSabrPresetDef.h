/*
ShaderGlass preset handheld / ds-hybrid-sabr imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/ds-hybrid-sabr.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldDsHybridSabrPresetDef : public PresetDef
{
public:
	HandheldDsHybridSabrPresetDef() : PresetDef{}
	{
		Name = "ds-hybrid-sabr";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "ds_hybrid_view_refpass")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(EdgeSmoothingSabrShadersSabrV30ShaderDef()
.Param("alias", "Ref")
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersDsHybridViewShaderDef()
.Param("filter_linear", "true"));
	}
};
}
