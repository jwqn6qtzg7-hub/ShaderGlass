/*
ShaderGlass preset bezel/koko-aio / Dots_4-3 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/bezel/koko-aio/Presets_Handhelds-ng/Dots_4-3.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelKokoAioPresets_HandheldsNgDots_43PresetDef : public PresetDef
{
public:
	BezelKokoAioPresets_HandheldsNgDots_43PresetDef() : PresetDef{}
	{
		Name = "Dots_4-3";
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
            OverrideParam("ADAPTIVE_BLACK", (float)0.000000);
            OverrideParam("BLOOM_EYE_ADPT_SRT", (float)1.500000);
            OverrideParam("BLOOM_GAMMA", (float)2.500000);
            OverrideParam("BLOOM_GAMMA_OUT", (float)1.500000);
            OverrideParam("BLOOM_MIX", (float)0.300001);
            OverrideParam("BLOOM_OVER_WHITE", (float)1.000000);
            OverrideParam("BLOOM_POWER", (float)1.350000);
            OverrideParam("BLOOM_SIZE", (float)1.000000);
            OverrideParam("DO_BEZEL", (float)0.000000);
            OverrideParam("DO_BLOOM", (float)1.000000);
            OverrideParam("DO_CCORRECTION", (float)1.000000);
            OverrideParam("DO_CURVATURE", (float)1.000000);
            OverrideParam("DO_DOT_MATRIX", (float)0.000000);
            OverrideParam("DO_DYNZOOM", (float)0.000000);
            OverrideParam("DO_HALO", (float)1.000000);
            OverrideParam("DO_IN_GLOW", (float)1.000000);
            OverrideParam("DO_PIXELGRID", (float)1.000000);
            OverrideParam("DO_SHIFT_RGB", (float)0.000000);
            OverrideParam("DO_SPOT", (float)1.000000);
            OverrideParam("DO_VIGNETTE", (float)1.000000);
            OverrideParam("GAMMA_OUT", (float)0.330000);
            OverrideParam("GEOM_CORNER_SIZE", (float)0.010000);
            OverrideParam("GEOM_CORNER_SMOOTH", (float)500.000000);
            OverrideParam("GEOM_WARP_X", (float)0.000000);
            OverrideParam("GEOM_WARP_Y", (float)0.000000);
            OverrideParam("HALO_GAMMA", (float)1.999999);
            OverrideParam("HALO_GAMMA_OUT", (float)1.850000);
            OverrideParam("HALO_POWER", (float)0.250000);
            OverrideParam("HALO_SHARPNESS", (float)3.999991);
            OverrideParam("HALO_VS_SCAN", (float)1.000000);
            OverrideParam("IN_GLOW_BIAS", (float)0.000000);
            OverrideParam("IN_GLOW_GAMMA", (float)2.000000);
            OverrideParam("IN_GLOW_H", (float)-0.900000);
            OverrideParam("IN_GLOW_POWER", (float)1.200000);
            OverrideParam("IN_GLOW_SPREAD", (float)2.000000);
            OverrideParam("IN_GLOW_W", (float)-0.900000);
            OverrideParam("IN_GLOW_WARPSHARP_X", (float)0.000000);
            OverrideParam("IN_GLOW_WARPSHARP_Y", (float)0.000000);
            OverrideParam("LUMINANCE", (float)0.000000);
            OverrideParam("PIXELGRID_GAMMA_H", (float)3.000001);
            OverrideParam("PIXELGRID_H_PRST", (float)3.000000);
            OverrideParam("PIXELGRID_MAX_H", (float)0.500000);
            OverrideParam("PIXELGRID_MAX_W", (float)0.500000);
            OverrideParam("PIXELGRID_MIN_W", (float)0.200000);
            OverrideParam("PIXELGRID_SIZE_W", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK", (float)0.000000);
            OverrideParam("RESSWITCH_GLITCH_SIZE", (float)0.000000);
            OverrideParam("S_POWER", (float)0.056000);
            OverrideParam("V_SIZE", (float)1.600000);
	}
};
}
