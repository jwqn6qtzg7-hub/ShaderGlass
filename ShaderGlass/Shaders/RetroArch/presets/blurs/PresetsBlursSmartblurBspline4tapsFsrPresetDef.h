/*
ShaderGlass preset presets/blurs / smartblur-bspline-4taps-fsr imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/blurs/smartblur-bspline-4taps-fsr.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsBlursSmartblurBspline4tapsFsrPresetDef : public PresetDef
{
public:
	PresetsBlursSmartblurBspline4tapsFsrPresetDef() : PresetDef{}
	{
		Name = "smartblur-bspline-4taps-fsr";
		Category = "presets/blurs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BlursShadersSmartBlurShaderDef()
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(InterpolationShadersBSpline4TapsShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingFsrShadersFsrPass0ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingFsrShadersFsrPass1ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_edge"));
            OverrideParam("FSR_SHARPENING", (float)0.300000);
            OverrideParam("SB_BLUR_LEVEL", (float)0.700000);
            OverrideParam("feedback_pass", (float)0.000000);
	}
};
}
