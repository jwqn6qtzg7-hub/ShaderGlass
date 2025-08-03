/*
ShaderGlass preset sonkun/shadow-mask/flat-screen/4k / 37-pal-warm-composite imported from Sonkun:
https://forums.libretro.com/t/new-sonkun-crt-guest-advanced-hd-presets-thread/39091
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class SonkunShadowMaskFlatScreen4k374kCrtGuestAdvancedHdShadowMaskPalWarmCompositePresetDef : public PresetDef
{
public:
	SonkunShadowMaskFlatScreen4k374kCrtGuestAdvancedHdShadowMaskPalWarmCompositePresetDef() : PresetDef{}
	{
		Name = "37-pal-warm-composite";
		Category = "sonkun/shadow-mask/flat-screen/4k";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersGuestHdStockShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtResswitchGlitchKokoShaderDef()
.Param("alias", "StockPass")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdAfterglow0ShaderDef()
.Param("alias", "AfterglowPass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestAdvancedGradePreShadersAfterglowGradeShaderDef()
.Param("alias", "PrePass0")
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestAdvancedNtscNtscPass1ShaderDef()
.Param("alias", "NPass1")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "4.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestAdvancedNtscNtscPass2ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "0.500000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestAdvancedNtscNtscPass3ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestAdvancedCustomFastSharpenShaderDef()
.Param("alias", "NtscPass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdStockShaderDef()
.Param("alias", "PrePass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "true")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdLinearizeHdShaderDef()
.Param("alias", "LinearizePass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDef()
.Param("alias", "Pass1")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdGaussian_horizontalShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "800")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdGaussian_verticalShaderDef()
.Param("alias", "GlowPass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "800")
.Param("scale_y", "600")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdBloom_horizontalShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "800")
.Param("scale_y", "600")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdBloom_verticalShaderDef()
.Param("alias", "BloomPass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "800")
.Param("scale_y", "600")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersGuestHdDeconvergenceHdShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(CrtShadersGuestAdvancedLutTrinitronLutTextureDef()
.Param("mipmap", "false")
.Param("name", "SamplerLUT1")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(CrtShadersGuestAdvancedLutInvTrinitronLutTextureDef()
.Param("mipmap", "false")
.Param("name", "SamplerLUT2")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(CrtShadersGuestAdvancedLutNecLutTextureDef()
.Param("mipmap", "false")
.Param("name", "SamplerLUT3")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(CrtShadersGuestAdvancedLutNtscLutTextureDef()
.Param("mipmap", "false")
.Param("name", "SamplerLUT4")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("CCONTR", (float)0.000000);
            OverrideParam("CSHARPEN", (float)5.000000);
            OverrideParam("FINE_GLOW", (float)3.000000);
            OverrideParam("GAMMA_INPUT", (float)2.400000);
            OverrideParam("LUT1_toggle", (float)1.000000);
            OverrideParam("SIGMA_H", (float)0.600000);
            OverrideParam("SIGMA_HB", (float)0.600000);
            OverrideParam("SIGMA_HOR", (float)0.100000);
            OverrideParam("SIGMA_V", (float)0.600000);
            OverrideParam("beam_max", (float)3.000000);
            OverrideParam("beam_min", (float)1.000000);
            OverrideParam("beam_size", (float)0.000000);
            OverrideParam("bg", (float)0.010000);
            OverrideParam("blb", (float)0.020000);
            OverrideParam("blg", (float)0.020000);
            OverrideParam("bloom", (float)-1.000000);
            OverrideParam("bloom_dist", (float)0.050000);
            OverrideParam("blr", (float)0.020000);
            OverrideParam("bmask", (float)0.070000);
            OverrideParam("br", (float)-0.010000);
            OverrideParam("brightboost", (float)0.250000);
            OverrideParam("brightboost1", (float)0.250000);
            OverrideParam("cust_artifacting", (float)0.000000);
            OverrideParam("cust_fringing", (float)0.000000);
            OverrideParam("deconrby", (float)0.500000);
            OverrideParam("deconrgy", (float)0.750000);
            OverrideParam("deconrry", (float)0.750000);
            OverrideParam("g_CRT_b", (float)40.000000);
            OverrideParam("g_CRT_bb", (float)0.900000);
            OverrideParam("g_CRT_br", (float)1.100000);
            OverrideParam("g_CRT_l", (float)2.400000);
            OverrideParam("g_U_MUL", (float)1.150000);
            OverrideParam("g_U_SHIFT", (float)0.010000);
            OverrideParam("g_V_MUL", (float)1.050000);
            OverrideParam("g_V_SHIFT", (float)-0.020000);
            OverrideParam("g_crtgamut", (float)3.000000);
            OverrideParam("g_hue_degrees", (float)-3.000000);
            OverrideParam("g_lift", (float)-15.000000);
            OverrideParam("g_sat", (float)0.500000);
            OverrideParam("g_satb", (float)-0.250000);
            OverrideParam("g_satg", (float)0.250000);
            OverrideParam("g_satr", (float)-0.250000);
            OverrideParam("g_space_out", (float)-1.000000);
            OverrideParam("g_vignette", (float)0.000000);
            OverrideParam("gamma_c", (float)1.800000);
            OverrideParam("gamma_c2", (float)1.150000);
            OverrideParam("gamma_out", (float)2.400000);
            OverrideParam("gb", (float)0.270000);
            OverrideParam("glow", (float)0.500000);
            OverrideParam("gr", (float)0.350000);
            OverrideParam("gsl", (float)2.000000);
            OverrideParam("halation", (float)0.050000);
            OverrideParam("iscan", (float)0.450000);
            OverrideParam("iscans", (float)0.000000);
            OverrideParam("m_glow", (float)2.000000);
            OverrideParam("m_glow_cutoff", (float)0.020000);
            OverrideParam("m_glow_dist", (float)4.000000);
            OverrideParam("m_glow_high", (float)7.000000);
            OverrideParam("m_glow_low", (float)7.000000);
            OverrideParam("m_glow_mask", (float)0.750000);
            OverrideParam("mask_bloom", (float)0.050000);
            OverrideParam("mask_gamma", (float)1.000000);
            OverrideParam("mask_zoom", (float)2.000000);
            OverrideParam("masksize", (float)2.000000);
            OverrideParam("maskstr", (float)1.000000);
            OverrideParam("mshift", (float)0.500000);
            OverrideParam("mzoom_sh", (float)0.250000);
            OverrideParam("ntsc_charp", (float)10.000000);
            OverrideParam("ntsc_charp3", (float)10.000000);
            OverrideParam("ntsc_cscale", (float)1.450000);
            OverrideParam("ntsc_cscale1", (float)2.200000);
            OverrideParam("ntsc_gamma", (float)1.075000);
            OverrideParam("ntsc_ring", (float)1.000000);
            OverrideParam("ntsc_shape", (float)1.000000);
            OverrideParam("ntsc_sharp", (float)10.000000);
            OverrideParam("ntsc_taps", (float)6.000000);
            OverrideParam("post_br", (float)1.070000);
            OverrideParam("pr_scan", (float)0.000000);
            OverrideParam("rb", (float)-0.020000);
            OverrideParam("rg", (float)0.020000);
            OverrideParam("scangamma", (float)16.000000);
            OverrideParam("scanline1", (float)20.000000);
            OverrideParam("scanline2", (float)20.000000);
            OverrideParam("scans", (float)0.000000);
            OverrideParam("shadowMask", (float)6.000000);
            OverrideParam("smoothmask", (float)0.500000);
            OverrideParam("spike", (float)1.500000);
            OverrideParam("ssharp", (float)0.150000);
            OverrideParam("wlb", (float)0.700000);
            OverrideParam("wlg", (float)0.900000);
            OverrideParam("wlr", (float)0.700000);
            OverrideParam("wp_temperature", (float)6504.000000);
	}
};
}
