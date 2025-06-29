/*
ShaderGlass preset anti-aliasing / advanced-aa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/anti-aliasing/advanced-aa.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class AntiAliasingAdvancedAaPresetDef : public PresetDef
{
public:
	AntiAliasingAdvancedAaPresetDef() : PresetDef{}
	{
		Name = "advanced-aa";
		Category = "anti-aliasing";
	}

	virtual void Build() {
         	ShaderDefs.push_back(AntiAliasingShadersAdvancedAaShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "2.0")
.Param("scale_y", "2.0")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersBicubicBicubicYShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "source")
.Param("scale_type_y", "viewport")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersBicubicBicubicXShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
