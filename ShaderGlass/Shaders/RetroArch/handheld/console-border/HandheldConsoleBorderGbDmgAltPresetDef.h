/*
ShaderGlass preset handheld/console-border / gb-dmg-alt imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/console-border/gb-dmg-alt.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldConsoleBorderGbDmgAltPresetDef : public PresetDef
{
public:
	HandheldConsoleBorderGbDmgAltPresetDef() : PresetDef{}
	{
		Name = "gb-dmg-alt";
		Category = "handheld/console-border";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass0ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass1ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass3ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass4ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass5ShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1")
.Param("scale_type", "source"));
            TextureDefs.push_back(HandheldShadersGameboyResourcesSamplePalettesDmgPalette0TextureDef()
.Param("linear", "false")
.Param("name", "COLOR_PALETTE"));
            TextureDefs.push_back(HandheldShadersGameboyResourcesSampleBgsDmgBgTextureDef()
.Param("linear", "true")
.Param("name", "BACKGROUND"));
            TextureDefs.push_back(HandheldConsoleBorderResourcesDmgBorderSquare4xTextureDef()
.Param("linear", "true")
.Param("name", "BORDER"));
            OverrideParam("blending_mode", (float)0.000000);
            OverrideParam("grey_balance", (float)3.000000);
            OverrideParam("integer_mode", (float)2.000000);
            OverrideParam("response_time", (float)0.444000);
            OverrideParam("video_scale", (float)4.000000);
	}
};
}
