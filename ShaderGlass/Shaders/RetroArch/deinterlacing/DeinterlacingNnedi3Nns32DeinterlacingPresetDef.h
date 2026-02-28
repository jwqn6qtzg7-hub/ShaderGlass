/*
ShaderGlass preset deinterlacing / nnedi3-nns32-deinterlacing imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/deinterlacing/nnedi3-nns32-deinterlacing.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeinterlacingNnedi3Nns32DeinterlacingPresetDef : public PresetDef
{
public:
	DeinterlacingNnedi3Nns32DeinterlacingPresetDef() : PresetDef{}
	{
		Name = "nnedi3-nns32-deinterlacing";
		Category = "deinterlacing";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "nnedipreint0")
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(DeinterlacingShadersNnedi3DeinterlacingBobDeinterlacingLiteShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_y", "0.5"));
         	ShaderDefs.push_back(EdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "2.0")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(DeinterlacingShadersNnedi3DeinterlacingNnedi3DeintPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
