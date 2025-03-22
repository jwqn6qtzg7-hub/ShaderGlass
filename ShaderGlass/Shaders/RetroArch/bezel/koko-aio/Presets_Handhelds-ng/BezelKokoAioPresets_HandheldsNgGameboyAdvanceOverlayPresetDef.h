/*
ShaderGlass preset bezel/koko-aio / GameboyAdvance-Overlay imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/bezel/koko-aio/Presets_Handhelds-ng/GameboyAdvance-Overlay.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelKokoAioPresets_HandheldsNgGameboyAdvanceOverlayPresetDef : public PresetDef
{
public:
	BezelKokoAioPresets_HandheldsNgGameboyAdvanceOverlayPresetDef() : PresetDef{}
	{
		Name = "GameboyAdvance-Overlay";
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
            TextureDefs.push_back(BezelKokoAioTexturesOverlaysGbaTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "bg_under")
.Param("wrap_mode", "mirrored_repeat"));
            TextureDefs.push_back(BezelKokoAioTexturesOverlaysGbaTextureDef()
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
            OverrideParam("AMBI_BG_IMAGE_BLEND_MODE", (float)1.000000);
            OverrideParam("AMBI_BG_IMAGE_FORCE", (float)0.500000);
            OverrideParam("AMBI_FALLOFF", (float)0.300000);
            OverrideParam("AMBI_GAMMA", (float)2.000000);
            OverrideParam("AMBI_POWER", (float)6.800010);
            OverrideParam("AMBI_STEPS", (float)5.000000);
            OverrideParam("ASPECT_X", (float)254.000000);
            OverrideParam("ASPECT_Y", (float)162.000000);
            OverrideParam("BG_IMAGE_WRAP_MODE", (float)1.000000);
            OverrideParam("DOT_M_MBLUR_STR", (float)0.200000);
            OverrideParam("DO_AMBILIGHT", (float)0.000000);
            OverrideParam("DO_BG_IMAGE", (float)1.000000);
            OverrideParam("DO_BLOOM", (float)0.000000);
            OverrideParam("DO_CCORRECTION", (float)1.000000);
            OverrideParam("DO_CURVATURE", (float)1.000000);
            OverrideParam("DO_DOT_MATRIX", (float)1.000000);
            OverrideParam("DO_DYNZOOM", (float)0.000000);
            OverrideParam("DO_GLOBAL_SHZO", (float)1.000000);
            OverrideParam("DO_HALO", (float)0.000000);
            OverrideParam("DO_IN_GLOW", (float)1.000000);
            OverrideParam("DO_PIXELGRID", (float)1.000000);
            OverrideParam("DO_SPOT", (float)1.000000);
            OverrideParam("DO_VIGNETTE", (float)1.000000);
            OverrideParam("GAMMA_OUT", (float)0.400000);
            OverrideParam("GEOM_CORNER_SMOOTH", (float)350.000000);
            OverrideParam("GEOM_WARP_X", (float)0.000000);
            OverrideParam("GEOM_WARP_Y", (float)0.000000);
            OverrideParam("GLOBAL_OFFX", (float)0.001500);
            OverrideParam("GLOBAL_OFFY", (float)-0.029000);
            OverrideParam("GLOBAL_ZOOM", (float)0.481500);
            OverrideParam("IN_GLOW_GAMMA", (float)2.000000);
            OverrideParam("IN_GLOW_H", (float)-1.000000);
            OverrideParam("IN_GLOW_POWER", (float)1.200001);
            OverrideParam("IN_GLOW_SPREAD", (float)0.000000);
            OverrideParam("IN_GLOW_W", (float)-1.000000);
            OverrideParam("IN_GLOW_WARPSHARP_GAMMA", (float)0.010000);
            OverrideParam("IN_GLOW_WARPSHARP_X", (float)0.150000);
            OverrideParam("IN_GLOW_WARPSHARP_Y", (float)0.150000);
            OverrideParam("LUMINANCE", (float)0.100000);
            OverrideParam("PIXELGRID_B_SHIFT", (float)3.000000);
            OverrideParam("PIXELGRID_COREY_FAKE_SCAN", (float)0.000000);
            OverrideParam("PIXELGRID_G_SHIFT", (float)2.000000);
            OverrideParam("PIXELGRID_H_COUNT", (float)4.000000);
            OverrideParam("PIXELGRID_H_PRST", (float)4.000000);
            OverrideParam("PIXELGRID_MAX_H", (float)0.950000);
            OverrideParam("PIXELGRID_MAX_W", (float)0.930000);
            OverrideParam("PIXELGRID_MIN_H", (float)0.400000);
            OverrideParam("PIXELGRID_MIN_W", (float)0.500000);
            OverrideParam("PIXELGRID_R_SHIFT", (float)1.000000);
            OverrideParam("PIXELGRID_SIZE_W", (float)0.000000);
            OverrideParam("PIXELGRID_Y_MASK", (float)0.000000);
            OverrideParam("RESSWITCH_GLITCH_SIZE", (float)0.000000);
            OverrideParam("S_POSITION_X", (float)0.050000);
            OverrideParam("S_POSITION_Y", (float)2.000000);
            OverrideParam("S_SIZE", (float)3.000000);
            OverrideParam("V_POWER", (float)1.000001);
            OverrideParam("V_SIZE", (float)1.000001);
	}
};
}
