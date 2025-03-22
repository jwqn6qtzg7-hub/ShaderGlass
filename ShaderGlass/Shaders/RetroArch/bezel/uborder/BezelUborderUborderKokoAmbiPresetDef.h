/*
ShaderGlass preset bezel/uborder / uborder-koko-ambi imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/bezel/uborder/uborder-koko-ambi.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelUborderUborderKokoAmbiPresetDef : public PresetDef
{
public:
	BezelUborderUborderKokoAmbiPresetDef() : PresetDef{}
	{
		Name = "uborder-koko-ambi";
		Category = "bezel/uborder";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDef()
.Param("alias", "avglum_pass")
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDef()
.Param("alias", "ambi_temporal_pass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(BezelUborderShadersSupport_shadersOriginalShaderDef()
.Param("alias", "OriginalFake")
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelUborderShadersContent_koko_ambiCrtNobodyShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(BezelUborderTexturesBordersDefaultTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "BORDER")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(BezelUborderTexturesBordersDefault_layer2TextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "LAYER2")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("CN_MASK_STRENGTH", (float)0.500000);
            OverrideParam("CN_SCAN_SIZE", (float)0.950000);
            OverrideParam("CN_VIG_EXP", (float)0.320000);
            OverrideParam("CN_VIG_TOGGLE", (float)1.000000);
            OverrideParam("bz_blue", (float)50.000000);
            OverrideParam("bz_green", (float)50.000000);
            OverrideParam("bz_inner_bezel_x", (float)0.000000);
            OverrideParam("bz_inner_bezel_y", (float)0.000000);
            OverrideParam("bz_middle_bezel_x", (float)0.060000);
            OverrideParam("bz_middle_bezel_y", (float)0.037000);
            OverrideParam("bz_outer_bezel_x", (float)0.000000);
            OverrideParam("bz_outer_bezel_y", (float)0.000000);
            OverrideParam("bz_radius", (float)0.015000);
            OverrideParam("bz_red", (float)50.000000);
            OverrideParam("bz_ref_str", (float)0.350000);
            OverrideParam("bz_shine", (float)0.150000);
            OverrideParam("bz_shine_size", (float)0.850000);
            OverrideParam("fr_i_scaling_fac", (float)0.000000);
            OverrideParam("fr_zoom", (float)37.799999);
            OverrideParam("h_cornersize", (float)0.020000);
            OverrideParam("mixfactor", (float)0.980000);
	}
};
}
