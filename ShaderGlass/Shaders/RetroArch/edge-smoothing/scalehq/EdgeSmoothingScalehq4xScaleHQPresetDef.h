/*
ShaderGlass preset edge-smoothing/scalehq / 4xScaleHQ imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/scalehq/4xScaleHQ.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingScalehq4xScaleHQPresetDef : public PresetDef
{
public:
	EdgeSmoothingScalehq4xScaleHQPresetDef() : PresetDef{}
	{
		Name = "4xScaleHQ";
		Category = "edge-smoothing/scalehq";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingScalehqShaders4xScaleHQShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "4.0")
.Param("scale_y", "4.0")
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
