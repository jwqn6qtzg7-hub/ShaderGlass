/*
ShaderGlass preset edge-smoothing/xbr / super-xbr-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/xbr/super-xbr-fast.slangp
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

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportLumaShaderDef()
.Param("alias", "XbrSource")
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source"));
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
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportDeblurFastShaderDef()
.Param("filter_linear", "true")
.Param("wrap_mode", "clamp_to_edge"));
            OverrideParam("XBR_EDGE_STR_P0", (float)0.400000);
	}
};
}
