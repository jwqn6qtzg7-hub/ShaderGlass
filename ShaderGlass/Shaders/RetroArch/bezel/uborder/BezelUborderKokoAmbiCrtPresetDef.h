/*
ShaderGlass preset bezel/uborder / koko-ambi-crt imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/bezel/uborder/koko-ambi-crt.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelUborderKokoAmbiCrtPresetDef : public PresetDef
{
public:
	BezelUborderKokoAmbiCrtPresetDef() : PresetDef{}
	{
		Name = "koko-ambi-crt";
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
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelUborderShadersContent_shadersCrtNobodyShaderDef()
.Param("alias", "CRTPass")
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelUborderShadersUborderShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("geom_R", (float)4.000000);
            OverrideParam("geom_cornersize", (float)0.016000);
            OverrideParam("geom_cornersmooth", (float)280.000000);
            OverrideParam("geom_curvature", (float)1.000000);
            OverrideParam("geom_d", (float)1.000000);
            OverrideParam("ub_border_top", (float)0.000000);
	}
};
}
