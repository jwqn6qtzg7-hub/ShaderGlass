/*
ShaderGlass preset edge-smoothing/xbr / hybrid-jinc2-xbr-lv2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/xbr/hybrid-jinc2-xbr-lv2.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingXbrHybridJinc2XbrLv2PresetDef : public PresetDef
{
public:
	EdgeSmoothingXbrHybridJinc2XbrLv2PresetDef() : PresetDef{}
	{
		Name = "hybrid-jinc2-xbr-lv2";
		Category = "edge-smoothing/xbr";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "XbrSource")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale", "1.000000")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale", "3.000000")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportBSplineXShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportBSplineYShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersJinc2BilateralXbrShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportDeblurFastShaderDef()
.Param("filter_linear", "false"));
            OverrideParam("DEBLUR_F", (float)5.000000);
            OverrideParam("KA", (float)0.350000);
            OverrideParam("OFFSET_F", (float)0.500000);
            OverrideParam("SMALL_DETAILS", (float)1.000000);
            OverrideParam("SMART_F", (float)0.500000);
            OverrideParam("WP4", (float)0.800000);
	}
};
}
