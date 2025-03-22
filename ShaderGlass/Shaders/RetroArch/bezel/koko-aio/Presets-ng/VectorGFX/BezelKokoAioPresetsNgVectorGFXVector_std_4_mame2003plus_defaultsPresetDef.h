/*
ShaderGlass preset bezel/koko-aio / Vector_std_4_mame2003plus_defaults imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/bezel/koko-aio/Presets-ng/VectorGFX/Vector_std_4_mame2003plus_defaults.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelKokoAioPresetsNgVectorGFXVector_std_4_mame2003plus_defaultsPresetDef : public PresetDef
{
public:
	BezelKokoAioPresetsNgVectorGFXVector_std_4_mame2003plus_defaultsPresetDef() : PresetDef{}
	{
		Name = "Vector_std_4_mame2003plus_defaults";
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
            OverrideParam("AMBI_FALLOFF", (float)0.210000);
            OverrideParam("AMBI_GAMMA", (float)1.500000);
            OverrideParam("AMBI_INT_OFFSET", (float)0.290001);
            OverrideParam("AMBI_OVER_BEZEL", (float)1.000000);
            OverrideParam("AMBI_OVER_BEZEL_SIZE", (float)0.221000);
            OverrideParam("AMBI_POWER", (float)40.000000);
            OverrideParam("AMBI_STEPS", (float)20.000000);
            OverrideParam("AMBI_STRETCH", (float)0.690000);
            OverrideParam("BEZEL_B", (float)-0.195000);
            OverrideParam("BEZEL_CON", (float)1.550000);
            OverrideParam("BEZEL_DIFFUSION_STR", (float)1.000000);
            OverrideParam("BEZEL_G", (float)-0.220000);
            OverrideParam("BEZEL_LIGHT_NO_FADEOUT", (float)0.900000);
            OverrideParam("BEZEL_R", (float)-0.255000);
            OverrideParam("BEZEL_REFL_STRENGTH", (float)0.400000);
            OverrideParam("BEZEL_RFL_BLR_SHD", (float)-0.359999);
            OverrideParam("BEZEL_RFL_CONTRAST", (float)0.400000);
            OverrideParam("BEZEL_ROUGHNESS", (float)5.000000);
            OverrideParam("BEZEL_SPCL_STRENGTH", (float)2.000001);
            OverrideParam("BLOOM_EYE_ADPT_SRT", (float)0.000000);
            OverrideParam("BLOOM_EYE_INERTIA", (float)10.000000);
            OverrideParam("BLOOM_GAMMA", (float)2.000000);
            OverrideParam("BLOOM_MIX", (float)0.200001);
            OverrideParam("BLOOM_OVER_WHITE", (float)0.000000);
            OverrideParam("BLOOM_POWER", (float)3.500000);
            OverrideParam("BLOOM_QUALITY", (float)2.000000);
            OverrideParam("BLOOM_SIZE", (float)10.000000);
            OverrideParam("CLIP_TO_WHITE", (float)0.500000);
            OverrideParam("DO_AMBILIGHT", (float)1.000000);
            OverrideParam("DO_BEZEL", (float)1.000000);
            OverrideParam("DO_BLOOM", (float)1.000000);
            OverrideParam("DO_CCORRECTION", (float)1.000000);
            OverrideParam("DO_CURVATURE", (float)1.000000);
            OverrideParam("DO_DYNZOOM", (float)0.000000);
            OverrideParam("DO_GLOBAL_SHZO", (float)1.000000);
            OverrideParam("DO_HALO", (float)1.000000);
            OverrideParam("DO_IN_GLOW", (float)0.000000);
            OverrideParam("DO_PIXELGRID", (float)0.000000);
            OverrideParam("DO_PPERSISTENCE", (float)1.000000);
            OverrideParam("DO_SPOT", (float)1.000000);
            OverrideParam("DO_VIGNETTE", (float)1.000000);
            OverrideParam("GAMMA_OUT", (float)1.000000);
            OverrideParam("GEOM_CORNER_SMOOTH", (float)150.000000);
            OverrideParam("GLOBAL_ZOOM", (float)0.830492);
            OverrideParam("HALO_GAMMA", (float)3.999997);
            OverrideParam("HALO_GAMMA_OUT", (float)0.250000);
            OverrideParam("HALO_NO_PREGAIN", (float)1.000000);
            OverrideParam("HALO_POWER", (float)-0.009999);
            OverrideParam("HALO_SHARPNESS", (float)0.050000);
            OverrideParam("HALO_VS_SCAN", (float)1.000000);
            OverrideParam("IN_GLOW_GAMMA", (float)1.000000);
            OverrideParam("IN_GLOW_POWER", (float)1.500000);
            OverrideParam("MIN_LINES_INTERLACED", (float)0.000000);
            OverrideParam("RESSWITCH_GLITCH_SIZE", (float)0.000000);
            OverrideParam("SATURATION", (float)1.050000);
            OverrideParam("S_POWER", (float)0.050000);
            OverrideParam("S_SIZE", (float)1.399999);
            OverrideParam("TATE", (float)0.000000);
            OverrideParam("TEMPERATURE", (float)6500.000000);
            OverrideParam("V_SIZE", (float)1.000001);
	}
};
}
