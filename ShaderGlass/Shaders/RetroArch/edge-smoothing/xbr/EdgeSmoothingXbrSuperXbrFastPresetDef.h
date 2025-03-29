/*
ShaderGlass preset edge-smoothing/xbr / super-xbr-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/xbr/super-xbr-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingXbrSuperXbrFastPresetDef : public PresetDef
{
public:
	EdgeSmoothingXbrSuperXbrFastPresetDef() : PresetDef{}
	{
		Name = "super-xbr-fast";
		Category = "edge-smoothing/xbr";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportLinearizeShaderDef()
.Param("alias", "XbrSource")
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.000000")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "viewport")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportDelinearizeShaderDef()
.Param("filter_linear", "false"));
	}
};
}
