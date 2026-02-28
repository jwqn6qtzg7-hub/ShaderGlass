/*
ShaderGlass preset reshade/handheld-color-LUTs / SwitchOLED-rec2020(sRGB-gamma2.2) imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/reshade/handheld-color-LUTs/SwitchOLED-rec2020(sRGB-gamma2.2).slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeHandheldColorLUTsSwitchOLEDRec2020SRGBGamma22PresetDef : public PresetDef
{
public:
	ReshadeHandheldColorLUTsSwitchOLEDRec2020SRGBGamma22PresetDef() : PresetDef{}
	{
		Name = "SwitchOLED-rec2020(sRGB-gamma2.2)";
		Category = "reshade/handheld-color-LUTs";
	}

	void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTLUTShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000"));
            TextureDefs.push_back(ReshadeShadersLUTHandheldSWOLED2020PureGammaTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT"));
            OverrideParam("LUT_Size", (float)32.000000);
	}
};
}
