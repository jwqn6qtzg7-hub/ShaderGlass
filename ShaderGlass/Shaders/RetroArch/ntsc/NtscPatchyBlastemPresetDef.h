/*
ShaderGlass preset ntsc / patchy-blastem imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/ntsc/patchy-blastem.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscPatchyBlastemPresetDef : public PresetDef
{
public:
	NtscPatchyBlastemPresetDef() : PresetDef{}
	{
		Name = "patchy-blastem";
		Category = "ntsc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(NtscShadersPatchyNtscPatchyNtscEncodeYCShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "8.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(NtscShadersPatchyNtscPatchyNtscCombineYCShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(NtscShadersPatchyNtscPatchyNtscNoiseShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(NtscShadersPatchyNtscPatchyNtscSeparateYCShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(NtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(NtscShadersPatchyNtscPatchyNtscEotfShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(NtscShadersPatchyNtscTrilinearLUTSwitchableShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(NtscShadersPatchyNtscLinearToSrgbShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "1000")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(NtscShadersPatchyNtscP22_80s_D65TextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "PhosphorSamplerLUT1")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(NtscShadersPatchyNtscP22_90s_D65TextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "PhosphorSamplerLUT2")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(NtscShadersPatchyNtscP22_J_D65TextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "PhosphorSamplerLUT3")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(NtscShadersPatchyNtscTrinitronP22_D65TextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "PhosphorSamplerLUT4")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(NtscShadersPatchyNtscP22_J_D93TextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "PhosphorSamplerLUT5")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(NtscShadersPatchyNtscTrinitronP22_D93TextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "PhosphorSamplerLUT6")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("feedback_pass", (float)0.000000);
            OverrideParam("pn_color_init_offset", (float)0.700000);
            OverrideParam("pn_dual_width_mode", (float)1.000000);
            OverrideParam("pn_genesis_jailbar_enable", (float)1.000000);
            OverrideParam("pn_genesis_jailbar_offset", (float)0.312500);
            OverrideParam("pn_modulator_luma_filter_type", (float)0.000000);
            OverrideParam("pn_modulator_luma_filter_width", (float)3.000000);
            OverrideParam("pn_modulator_luma_radius", (float)2.000000);
            OverrideParam("pn_modulator_luma_res", (float)220.000000);
            OverrideParam("pn_modulator_luma_sigma", (float)0.570000);
            OverrideParam("pn_noise_counter", (float)120.000000);
            OverrideParam("pn_noise_min_amp", (float)0.300000);
            OverrideParam("pn_noise_rand_offset", (float)273.000000);
            OverrideParam("pn_noise_severity", (float)0.500000);
            OverrideParam("pn_scanline_dur", (float)47.699997);
	}
};
}
