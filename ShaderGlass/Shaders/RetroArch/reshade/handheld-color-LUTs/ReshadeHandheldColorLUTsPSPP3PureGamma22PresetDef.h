/*
ShaderGlass preset reshade/handheld-color-LUTs / PSP-P3(pure-gamma2.2) imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/reshade/handheld-color-LUTs/PSP-P3(pure-gamma2.2).slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeHandheldColorLUTsPSPP3PureGamma22PresetDef : public PresetDef
{
public:
	ReshadeHandheldColorLUTsPSPP3PureGamma22PresetDef() : PresetDef{}
	{
		Name = "PSP-P3(pure-gamma2.2)";
		Category = "reshade/handheld-color-LUTs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTLUTShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000"));
            TextureDefs.push_back(ReshadeShadersLUTHandheldPSPP3PureGammaTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT"));
            OverrideParam("LUT_Size", (float)32.000000);
	}
};
}
