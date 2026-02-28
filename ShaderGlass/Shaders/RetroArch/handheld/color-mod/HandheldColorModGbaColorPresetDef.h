/*
ShaderGlass preset handheld/color-mod / gba-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/color-mod/gba-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldColorModGbaColorPresetDef : public PresetDef
{
public:
	HandheldColorModGbaColorPresetDef() : PresetDef{}
	{
		Name = "gba-color";
		Category = "handheld/color-mod";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersColorLutGBALUTShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersColorGbaColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
            TextureDefs.push_back(HandheldShadersColorLutGbaGrey1TextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT1"));
            TextureDefs.push_back(HandheldShadersColorLutGbaGrey2TextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT2"));
	}
};
}
