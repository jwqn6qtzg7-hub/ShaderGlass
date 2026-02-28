/*
ShaderGlass preset reshade/handheld-color-LUTs / SP101-sRGB imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/reshade/handheld-color-LUTs/SP101-sRGB.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeHandheldColorLUTsSP101SRGBPresetDef : public PresetDef
{
public:
	ReshadeHandheldColorLUTsSP101SRGBPresetDef() : PresetDef{}
	{
		Name = "SP101-sRGB";
		Category = "reshade/handheld-color-LUTs";
	}

	void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTMultiLUTShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000"));
            TextureDefs.push_back(ReshadeShadersLUTHandheldSP101SRGBTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT1"));
            TextureDefs.push_back(ReshadeShadersLUTHandheldSP101SRGBColdTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT2"));
	}
};
}
