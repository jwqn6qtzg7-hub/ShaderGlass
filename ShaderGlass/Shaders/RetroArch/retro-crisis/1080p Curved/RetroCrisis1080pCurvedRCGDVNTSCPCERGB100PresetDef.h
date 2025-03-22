/*
ShaderGlass preset retro-crisis/1080p-Curved / RC GDV-NTSC - PCE RGB 100 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/retro-crisis/1080p Curved/RC GDV-NTSC - PCE RGB 100.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class RetroCrisis1080pCurvedRCGDVNTSCPCERGB100PresetDef : public PresetDef
{
public:
	RetroCrisis1080pCurvedRCGDVNTSCPCERGB100PresetDef() : PresetDef{}
	{
		Name = "RC GDV-NTSC - PCE RGB 100";
		Category = "retro-crisis/1080p-Curved";
	}

	virtual void Build() {
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedStockShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedStockShaderDef()
.Param("alias", "StockPass")
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedAfterglow0ShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedPreShadersAfterglowShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedNtscNtscPass1ShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedNtscNtscPass2ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "0.500000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedNtscNtscPass3ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedCustomFastSharpenShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedStockShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedAvgLumNtscShaderDef()
.Param("alias", "AvgLumPass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "true")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedLinearizeNtscShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestHdGaussian_horizontalShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "800")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedGaussian_verticalShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestHdBloom_horizontalShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "800")
.Param("scale_y", "600")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedBloom_verticalShaderDef()
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
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(SlangShadersCrtShadersGuestAdvancedDeconvergenceNtscShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(SlangShadersCrtShadersGuestAdvancedLutTrinitronLutTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "SamplerLUT1")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(SlangShadersCrtShadersGuestAdvancedLutInvTrinitronLutTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "SamplerLUT2")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(SlangShadersCrtShadersGuestAdvancedLutNecLutTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "SamplerLUT3")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(SlangShadersCrtShadersGuestAdvancedLutNtscLutTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "SamplerLUT4")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("CCONTR", (float)0.000000);
            OverrideParam("CSHARPEN", (float)5.000000);
            OverrideParam("addnoised", (float)0.300000);
            OverrideParam("beam_max", (float)1.000000);
            OverrideParam("beam_min", (float)0.700000);
            OverrideParam("bloom", (float)0.500000);
            OverrideParam("bsize1", (float)0.010000);
            OverrideParam("c_shape", (float)0.050000);
            OverrideParam("csize", (float)0.010000);
            OverrideParam("cust_artifacting", (float)0.500000);
            OverrideParam("cust_fringing", (float)0.500000);
            OverrideParam("deconrb", (float)3.750000);
            OverrideParam("deconrg", (float)1.500000);
            OverrideParam("deconrr", (float)1.750000);
            OverrideParam("double_slot", (float)2.000000);
            OverrideParam("gsl", (float)2.000000);
            OverrideParam("m_glow", (float)1.000000);
            OverrideParam("mask_gamma", (float)5.000000);
            OverrideParam("mask_zoom", (float)-2.000000);
            OverrideParam("maskboost", (float)3.000000);
            OverrideParam("masksize", (float)1.000000);
            OverrideParam("maskstr", (float)1.000000);
            OverrideParam("mcut", (float)2.000000);
            OverrideParam("noiseresd", (float)1.000000);
            OverrideParam("noisetype", (float)1.000000);
            OverrideParam("ntsc_cscale1", (float)1.300001);
            OverrideParam("ntsc_fields", (float)0.000000);
            OverrideParam("ntsc_gamma", (float)1.500000);
            OverrideParam("ntsc_phase", (float)3.000000);
            OverrideParam("ntsc_sat", (float)1.200001);
            OverrideParam("ntsc_scale", (float)1.899998);
            OverrideParam("sborder", (float)0.250000);
            OverrideParam("scan_falloff", (float)2.000000);
            OverrideParam("scanline1", (float)0.000000);
            OverrideParam("scanline2", (float)10.000000);
            OverrideParam("shadowMask", (float)12.000000);
            OverrideParam("slotwidth", (float)1.000000);
            OverrideParam("tds", (float)1.000000);
            OverrideParam("warpX", (float)0.030000);
            OverrideParam("warpY", (float)0.040000);
	}
};
}
