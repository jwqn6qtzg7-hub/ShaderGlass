/*
ShaderGlass preset edge-smoothing/nedi / nedi-hybrid imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/nedi/nedi-hybrid.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingNediNediHybridPresetDef : public PresetDef
{
public:
	EdgeSmoothingNediNediHybridPresetDef() : PresetDef{}
	{
		Name = "nedi-hybrid";
		Category = "edge-smoothing/nedi";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingNediShadersNediHybridPass0ShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "2.000000")
.Param("scale_y", "1.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingNediShadersNediHybridPass1ShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "2.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingNediShadersNediHybridPass2ShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingNediShadersNediJincShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
