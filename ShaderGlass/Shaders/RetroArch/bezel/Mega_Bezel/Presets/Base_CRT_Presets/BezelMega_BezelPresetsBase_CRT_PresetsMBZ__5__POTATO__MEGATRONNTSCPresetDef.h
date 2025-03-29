/*
ShaderGlass preset bezel/Mega_Bezel_Base / MBZ__5__POTATO__MEGATRON-NTSC imported from MegaBezel:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/bezel/Mega_Bezel
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__MEGATRONNTSCPresetDef : public PresetDef
{
public:
	BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__MEGATRONNTSCPresetDef() : PresetDef{}
	{
		Name = "MBZ__5__POTATO__MEGATRON-NTSC";
		Category = "bezel/Mega_Bezel_Base";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDef()
.Param("alias", "DerezedPass")
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "1")
.Param("scale_y", "1")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(BezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDef()
.Param("alias", "InfoCachePass")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(BezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "1")
.Param("scale_y", "1")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(BezelMega_BezelShadersDogwayHsmGradeShaderDef()
.Param("alias", "ColorCorrectPass")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(BezelMega_BezelShadersBaseStockShaderDef()
.Param("alias", "PrePass0"));
         	ShaderDefs.push_back(BezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDef()
.Param("alias", "NPass1")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "2")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "4.0")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(BezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale_type", "source")
.Param("scale_x", "0.5")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(BezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(BezelMega_BezelShadersBaseStockShaderDef()
.Param("alias", "PrePass")
.Param("float_framebuffer", "true"));
         	ShaderDefs.push_back(BezelMega_BezelShadersGuestHsmAvgLumShaderDef()
.Param("alias", "AvgLumPass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(BezelMega_BezelShadersGuestHsmInterlaceShaderDef()
.Param("alias", "LinearizePass")
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(BezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDef()
.Param("alias", "SourceSDR")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDef()
.Param("alias", "SourceHDR")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDef()
.Param("alias", "CRTPass")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(BezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDef()
.Param("alias", "PostCRTPass")
.Param("float_framebuffer", "true")
.Param("mipmap_input", "true")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(BezelMega_BezelShadersBaseOutputHdrShaderDef()
.Param("alias", "OutputPass"));
            TextureDefs.push_back(BezelMega_BezelShadersGuestLutTrinitronLutTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT1"));
            TextureDefs.push_back(BezelMega_BezelShadersGuestLutInvTrinitronLutTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT2"));
            TextureDefs.push_back(BezelMega_BezelShadersGuestLutNecLutTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT3"));
            TextureDefs.push_back(BezelMega_BezelShadersGuestLutNtscLutTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT4"));
            TextureDefs.push_back(BezelMega_BezelShadersTexturesPlaceholder_Transparent_16x16TextureDef()
.Param("linear", "false")
.Param("name", "ScreenPlacementImage"));
            TextureDefs.push_back(BezelMega_BezelShadersTexturesBaked_Frame_Carbonfiber_BackgroundTextureDef()
.Param("linear", "true")
.Param("mipmap", "1")
.Param("name", "BackgroundImage"));
            TextureDefs.push_back(BezelMega_BezelShadersTexturesBaked_Frame_Carbonfiber_Background_VertTextureDef()
.Param("linear", "true")
.Param("mipmap", "1")
.Param("name", "BackgroundVertImage"));
            OverrideParam("GAMMA_INPUT", (float)2.000000);
            OverrideParam("HSM_ASPECT_RATIO_MODE", (float)1.000000);
            OverrideParam("HSM_CRT_CURVATURE_SCALE", (float)0.000000);
            OverrideParam("HSM_GLOBAL_GRAPHICS_BRIGHTNESS", (float)100.000000);
            OverrideParam("HSM_INT_SCALE_MODE", (float)1.000000);
            OverrideParam("HSM_REFLECT_GLOBAL_AMOUNT", (float)7.000000);
            OverrideParam("feedback_pass", (float)0.000000);
            OverrideParam("gamma_out", (float)1.950000);
            OverrideParam("h_sharp", (float)15.000000);
            OverrideParam("hcrt_hdr", (float)0.000000);
            OverrideParam("s_sharp", (float)1.500000);
	}
};
}
