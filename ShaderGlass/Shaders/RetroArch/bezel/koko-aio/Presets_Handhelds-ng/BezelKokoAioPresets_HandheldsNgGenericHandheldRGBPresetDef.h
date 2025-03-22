/*
ShaderGlass preset bezel/koko-aio / Generic-Handheld-RGB imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/bezel/koko-aio/Presets_Handhelds-ng/Generic-Handheld-RGB.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelKokoAioPresets_HandheldsNgGenericHandheldRGBPresetDef : public PresetDef
{
public:
	BezelKokoAioPresets_HandheldsNgGenericHandheldRGBPresetDef() : PresetDef{}
	{
		Name = "Generic-Handheld-RGB";
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
            OverrideParam("AMBI_FALLOFF", (float)0.100000);
            OverrideParam("AMBI_GAMMA", (float)3.000000);
            OverrideParam("AMBI_INT_OFFSET", (float)0.220000);
            OverrideParam("AMBI_POWER", (float)1.999999);
            OverrideParam("AMBI_SMP_INT_OFFSET", (float)0.100000);
            OverrideParam("AMBI_STEPS", (float)60.000000);
            OverrideParam("AMBI_STRETCH", (float)1.000000);
            OverrideParam("AMBI_STRETCH_VERTICAL", (float)0.180001);
            OverrideParam("ASPECT_X", (float)-1.000000);
            OverrideParam("ASPECT_Y", (float)1.000000);
            OverrideParam("BLOOM_MIX", (float)0.500000);
            OverrideParam("BLOOM_POWER", (float)1.250000);
            OverrideParam("DO_AMBILIGHT", (float)1.000000);
            OverrideParam("DO_BLOOM", (float)1.000000);
            OverrideParam("DO_CCORRECTION", (float)1.000000);
            OverrideParam("DO_CURVATURE", (float)1.000000);
            OverrideParam("DO_DYNZOOM", (float)0.000000);
            OverrideParam("DO_GAME_GEOM_OVERRIDE", (float)1.000000);
            OverrideParam("DO_IN_GLOW", (float)1.000000);
            OverrideParam("DO_PIXELGRID", (float)1.000000);
            OverrideParam("DO_PIXELGRID_H", (float)0.000000);
            OverrideParam("DO_VIGNETTE", (float)1.000000);
            OverrideParam("GAME_GEOM_INT_SCALE", (float)2.000000);
            OverrideParam("GAME_GEOM_INT_SCALE_MAX", (float)5.000000);
            OverrideParam("GAME_GEOM_OFF_FIX", (float)0.000000);
            OverrideParam("GAMMA_OUT", (float)0.350000);
            OverrideParam("GEOM_CORNER_SIZE", (float)0.010000);
            OverrideParam("GEOM_CORNER_SMOOTH", (float)350.000000);
            OverrideParam("GEOM_WARP_X", (float)0.000000);
            OverrideParam("GEOM_WARP_Y", (float)0.000000);
            OverrideParam("HALO_GAMMA", (float)1.000000);
            OverrideParam("HALO_POWER", (float)0.380000);
            OverrideParam("HALO_SHARPNESS", (float)6.500000);
            OverrideParam("HALO_VS_SCAN", (float)0.010000);
            OverrideParam("IN_GLOW_GAMMA", (float)1.600000);
            OverrideParam("IN_GLOW_H", (float)7.000000);
            OverrideParam("IN_GLOW_POWER", (float)1.000001);
            OverrideParam("IN_GLOW_SPREAD", (float)0.000000);
            OverrideParam("IN_GLOW_W", (float)7.000000);
            OverrideParam("IN_GLOW_WARPSHARP_X", (float)0.000000);
            OverrideParam("IN_GLOW_WARPSHARP_Y", (float)0.000000);
            OverrideParam("PIXELGRID_B_SHIFT", (float)3.000000);
            OverrideParam("PIXELGRID_G_SHIFT", (float)2.000000);
            OverrideParam("PIXELGRID_H_COUNT", (float)4.000000);
            OverrideParam("PIXELGRID_H_PRST", (float)4.000000);
            OverrideParam("PIXELGRID_MAX_W", (float)0.800000);
            OverrideParam("PIXELGRID_MIN_W", (float)0.250000);
            OverrideParam("PIXELGRID_R_SHIFT", (float)1.000000);
            OverrideParam("PIXELGRID_SIZE_W", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK", (float)0.700000);
            OverrideParam("PIXELGRID_Y_MASK_COORDS", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK_HEIGHT", (float)1.000000);
            OverrideParam("PIXELGRID_Y_MASK_OFFSET", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK_ON_WHITE", (float)0.300000);
            OverrideParam("PIXELGRID_Y_MASK_STEEP", (float)7.000000);
            OverrideParam("RESSWITCH_GLITCH_SIZE", (float)0.000000);
            OverrideParam("S_POSITION_X", (float)-0.500000);
            OverrideParam("S_POSITION_Y", (float)0.500000);
            OverrideParam("V_POWER", (float)1.000001);
            OverrideParam("V_SIZE", (float)1.200000);
	}
};
}
