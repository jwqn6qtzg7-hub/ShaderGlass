/*
ShaderGlass preset bezel/koko-aio / Monitor-FXAA_sharp-Core_SlotMask imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/bezel/koko-aio/Presets-ng/Monitor-FXAA_sharp-Core_SlotMask.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelKokoAioPresetsNgMonitorFXAA_sharpCore_SlotMaskPresetDef : public PresetDef
{
public:
	BezelKokoAioPresetsNgMonitorFXAA_sharpCore_SlotMaskPresetDef() : PresetDef{}
	{
		Name = "Monitor-FXAA_sharp-Core_SlotMask";
		Category = "bezel/koko-aio";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BezelKokoAioShadersNgColortools_and_ntsc_passShaderDef()
.Param("alias", "colortools_and_ntsc_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgFxaaShaderDef()
.Param("alias", "upscale_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "true")
.Param("scale", "2.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgShift_and_bleedShaderDef()
.Param("alias", "shift_and_bleed_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgIn_glow_xShaderDef()
.Param("alias", "in_glow_pass_x")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgIn_glow_yShaderDef()
.Param("alias", "in_glow_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgHalo_pre_gammaShaderDef()
.Param("alias", "halo_pre_gamma_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgHaloShaderDef()
.Param("alias", "halo_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgAvglum_passShaderDef()
.Param("alias", "avglum_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "0.5")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgReflection_blur_preShaderDef()
.Param("alias", "reflected_blurred_pass_pre")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgReflection_blurShaderDef()
.Param("alias", "reflected_blurred_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgBloom_pass_1ShaderDef()
.Param("alias", "bloom_pass_1")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgBloom_pass_2ShaderDef()
.Param("alias", "bloom_pass_2")
.Param("filter_linear", "true")
.Param("scale", "0.5")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgBloom_pass_3ShaderDef()
.Param("alias", "bloom_pass_3")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgBloom_pass_4ShaderDef()
.Param("alias", "bloom_pass_final")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgAmbi_temporal_passShaderDef()
.Param("alias", "ambi_temporal_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "0.05")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgHelper_passShaderDef()
.Param("alias", "helper_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "128")
.Param("scale_type", "absolute")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelKokoAioShadersNgFinal_passShaderDef()
.Param("alias", "final_pass")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
            TextureDefs.push_back(BezelKokoAioTexturesMonitor_body_curvedTextureDef()
.Param("linear", "true")
.Param("mipmap", "true")
.Param("name", "monitor_body_curved")
.Param("wrap_mode", "clamp_to_edge"));
            TextureDefs.push_back(BezelKokoAioTexturesMonitor_body_straightTextureDef()
.Param("linear", "true")
.Param("mipmap", "true")
.Param("name", "monitor_body_straight")
.Param("wrap_mode", "clamp_to_edge"));
            TextureDefs.push_back(BezelKokoAioTexturesBackground_underTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "bg_under")
.Param("wrap_mode", "mirrored_repeat"));
            TextureDefs.push_back(BezelKokoAioTexturesBackground_overTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "bg_over")
.Param("wrap_mode", "mirrored_repeat"));
            TextureDefs.push_back(BezelKokoAioTexturesBoothillTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "backdrop")
.Param("wrap_mode", "mirrored_repeat"));
            TextureDefs.push_back(BezelKokoAioTexturesSide_shadeHelperTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "sideshade")
.Param("wrap_mode", "mirrored_repeat"));
            OverrideParam("pixel", (float)1.000000);
            OverrideParam("only", (float)2.000000);
            OverrideParam("AMBI_FALLOFF", (float)0.400000);
            OverrideParam("AMBI_OVER_BEZEL", (float)0.200000);
            OverrideParam("AMBI_POWER", (float)1.800000);
            OverrideParam("AMBI_STEPS", (float)60.000000);
            OverrideParam("BEZEL_DIFFUSION_STR", (float)0.150000);
            OverrideParam("BEZEL_FRAME_ZOOM", (float)0.179000);
            OverrideParam("BEZEL_REFL_STRENGTH", (float)0.370000);
            OverrideParam("BEZEL_REFL_ZOOM", (float)1.000000);
            OverrideParam("BEZEL_RFL_BLR_SHD", (float)-0.200000);
            OverrideParam("BEZEL_RFL_OFFSET", (float)0.001000);
            OverrideParam("BLOOM_EYE_ADPT_SRT", (float)0.000000);
            OverrideParam("BLOOM_EYE_INERTIA", (float)750.000000);
            OverrideParam("BLOOM_GAMMA", (float)4.000000);
            OverrideParam("BLOOM_GAMMA_OUT", (float)1.200000);
            OverrideParam("BLOOM_MIX", (float)0.050000);
            OverrideParam("BLOOM_OVER_WHITE", (float)0.000000);
            OverrideParam("BLOOM_POWER", (float)3.300000);
            OverrideParam("BLOOM_QUALITY", (float)1.000000);
            OverrideParam("BLOOM_SIZE", (float)4.000000);
            OverrideParam("DECON_BX", (float)0.000000);
            OverrideParam("DECON_BY", (float)1.000000);
            OverrideParam("DECON_GX", (float)0.000000);
            OverrideParam("DECON_GY", (float)0.000000);
            OverrideParam("DECON_RX", (float)0.000000);
            OverrideParam("DECON_RY", (float)-1.000000);
            OverrideParam("DO_AMBILIGHT", (float)1.000000);
            OverrideParam("DO_BEZEL", (float)1.000000);
            OverrideParam("DO_BLOOM", (float)1.000000);
            OverrideParam("DO_CCORRECTION", (float)1.000000);
            OverrideParam("DO_CURVATURE", (float)1.000000);
            OverrideParam("DO_DEDITHER", (float)1.000000);
            OverrideParam("DO_DYNZOOM", (float)0.015000);
            OverrideParam("DO_FXAA", (float)1.000000);
            OverrideParam("DO_GLOBAL_SHZO", (float)1.000000);
            OverrideParam("DO_HALO", (float)1.000000);
            OverrideParam("DO_IN_GLOW", (float)1.000000);
            OverrideParam("DO_NTSC_ARTIFACTS", (float)0.000000);
            OverrideParam("DO_PIXELGRID", (float)1.000000);
            OverrideParam("DO_PIXELGRID_H", (float)1.000000);
            OverrideParam("DO_RF_NOISE", (float)0.000000);
            OverrideParam("DO_SAT_BLEED", (float)0.000000);
            OverrideParam("DO_SHIFT_RGB", (float)1.000000);
            OverrideParam("DO_SPOT", (float)1.000000);
            OverrideParam("DO_VIGNETTE", (float)1.000000);
            OverrideParam("GAMMA_OUT", (float)0.300000);
            OverrideParam("GEOM_CORNER_SIZE", (float)0.005000);
            OverrideParam("GEOM_CORNER_SMOOTH", (float)150.000000);
            OverrideParam("GLOBAL_ZOOM", (float)0.991500);
            OverrideParam("HALO_GAMMA", (float)1.300000);
            OverrideParam("HALO_GAMMA_OUT", (float)2.000000);
            OverrideParam("HALO_NO_PREGAIN", (float)1.000000);
            OverrideParam("HALO_POWER", (float)0.890003);
            OverrideParam("HALO_SHARPNESS", (float)7.000000);
            OverrideParam("HALO_VS_SCAN", (float)0.300000);
            OverrideParam("IN_GLOW_GAMMA", (float)2.000000);
            OverrideParam("IN_GLOW_H", (float)-1.050000);
            OverrideParam("IN_GLOW_POWER", (float)1.000000);
            OverrideParam("IN_GLOW_W", (float)-1.000000);
            OverrideParam("LUMINANCE", (float)0.100000);
            OverrideParam("OFFSET_STRENGTH", (float)0.300000);
            OverrideParam("PIXELGRID_BASAL_GRID", (float)0.020000);
            OverrideParam("PIXELGRID_DECON_B_H", (float)0.600000);
            OverrideParam("PIXELGRID_DECON_R_H", (float)-0.600000);
            OverrideParam("PIXELGRID_GAMMA_H", (float)5.199997);
            OverrideParam("PIXELGRID_GAMMA_W", (float)2.200000);
            OverrideParam("PIXELGRID_H_COUNT", (float)2.000000);
            OverrideParam("PIXELGRID_H_PRST", (float)1.000000);
            OverrideParam("PIXELGRID_MAX_H", (float)0.900000);
            OverrideParam("PIXELGRID_MAX_W", (float)0.920000);
            OverrideParam("PIXELGRID_MIN_H", (float)0.250000);
            OverrideParam("PIXELGRID_MIN_W", (float)0.250000);
            OverrideParam("PIXELGRID_NO_INTERBLEED_H", (float)2.000000);
            OverrideParam("PIXELGRID_OFFSET_CORE", (float)0.100000);
            OverrideParam("PIXELGRID_OVERMASK", (float)1.100000);
            OverrideParam("PIXELGRID_Y_MASK", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK_COORDS", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK_HEIGHT", (float)1.000000);
            OverrideParam("PIXELGRID_Y_MASK_ON_WHITE", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK_SHIFT", (float)0.150000);
            OverrideParam("PIXELGRID_Y_MASK_STEEP", (float)1.000000);
            OverrideParam("PIXELGRID_Y_SPARK", (float)1.000000);
            OverrideParam("SATURATION", (float)1.080000);
            OverrideParam("SHIFT_B", (float)20.000000);
            OverrideParam("SHIFT_G", (float)0.000000);
            OverrideParam("SHIFT_R", (float)-20.000000);
            OverrideParam("S_POSITION_X", (float)-0.500000);
            OverrideParam("S_POSITION_Y", (float)0.500000);
            OverrideParam("S_POWER", (float)0.067000);
            OverrideParam("S_SIZE", (float)0.360000);
            OverrideParam("TEMPERATURE", (float)7200.000000);
            OverrideParam("V_POWER", (float)1.000000);
            OverrideParam("V_SIZE", (float)1.080000);
	}
};
}
