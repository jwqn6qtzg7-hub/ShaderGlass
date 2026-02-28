/*
ShaderGlass preset presets / mdapt+fast-bilateral+super-4xbr+scanlines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/mdapt+fast-bilateral+super-4xbr+scanlines.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsMdaptFastBilateralSuper4xbrScanlinesPresetDef : public PresetDef
{
public:
	PresetsMdaptFastBilateralSuper4xbrScanlinesPresetDef() : PresetDef{}
	{
		Name = "mdapt+fast-bilateral+super-4xbr+scanlines";
		Category = "presets";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "mdapt_refpass"));
         	ShaderDefs.push_back(DitheringShadersMdaptPassesMdaptPass0ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersMdaptPassesMdaptPass1ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersMdaptPassesMdaptPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersMdaptPassesMdaptPass3ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersMdaptPassesMdaptPass4ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersMdaptPassesMdaptPass4ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DenoisersShadersFastBilateralShaderDef()
.Param("alias", "XbrSource")
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDef()
.Param("alias", "PassPrev2")
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "2.000000")
.Param("scale_y", "2.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "2.000000")
.Param("scale_y", "2.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(StockStockShaderDef());
         	ShaderDefs.push_back(ScanlinesShadersScanlineShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
