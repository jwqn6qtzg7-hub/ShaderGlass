/*
ShaderGlass preset presets/crt-beam-simulator / crt-beam-simulator-fsr-sony-crt-megatron-hdr imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/crt-beam-simulator/crt-beam-simulator-fsr-sony-crt-megatron-hdr.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsCrtBeamSimulatorCrtBeamSimulatorFsrSonyCrtMegatronHdrPresetDef : public PresetDef
{
public:
	PresetsCrtBeamSimulatorCrtBeamSimulatorFsrSonyCrtMegatronHdrPresetDef() : PresetDef{}
	{
		Name = "crt-beam-simulator-fsr-sony-crt-megatron-hdr";
		Category = "presets/crt-beam-simulator";
	}

	virtual void Build() {
         	ShaderDefs.push_back(SubframeBfiShadersCrtBeamSimulatorShaderDef()
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
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
         	ShaderDefs.push_back(HdrShadersCrtSonyMegatronSourcePassShaderDef()
.Param("alias", "SourceSDR")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(HdrShadersCrtSonyMegatronHdrPassShaderDef()
.Param("alias", "SourceHDR")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(HdrShadersCrtSonyMegatronShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("FSR_SHARPENING", (float)0.300000);
            OverrideParam("LCD_ANTI_RETENTION_TOGGLE", (float)0.000000);
            OverrideParam("feedback_pass", (float)0.000000);
            OverrideParam("hcrt_blue_beam_attack", (float)1.000000);
            OverrideParam("hcrt_blue_beam_sharpness", (float)1.300000);
            OverrideParam("hcrt_blue_scanline_attack", (float)0.300000);
            OverrideParam("hcrt_blue_scanline_max", (float)0.800000);
            OverrideParam("hcrt_blue_scanline_min", (float)0.600000);
            OverrideParam("hcrt_brightness", (float)0.050000);
            OverrideParam("hcrt_colour_system", (float)3.000000);
            OverrideParam("hcrt_crt_screen_type", (float)2.000000);
            OverrideParam("hcrt_expand_gamut", (float)1.000000);
            OverrideParam("hcrt_green_beam_attack", (float)1.000000);
            OverrideParam("hcrt_green_beam_sharpness", (float)1.300000);
            OverrideParam("hcrt_green_scanline_attack", (float)0.300000);
            OverrideParam("hcrt_green_scanline_max", (float)0.800000);
            OverrideParam("hcrt_green_scanline_min", (float)0.600000);
            OverrideParam("hcrt_lcd_resolution", (float)0.000000);
            OverrideParam("hcrt_lcd_subpixel", (float)1.000000);
            OverrideParam("hcrt_red_beam_attack", (float)1.000000);
            OverrideParam("hcrt_red_beam_sharpness", (float)1.300000);
            OverrideParam("hcrt_red_scanline_attack", (float)0.300000);
            OverrideParam("hcrt_red_scanline_min", (float)0.890000);
            OverrideParam("hcrt_saturation", (float)0.450000);
	}
};
}
