/*
ShaderGlass preset handheld / gameboy-light-mode imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/gameboy-light-mode.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldGameboyLightModePresetDef : public PresetDef
{
public:
	HandheldGameboyLightModePresetDef() : PresetDef{}
	{
		Name = "gameboy-light-mode";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass0ShaderDef()
.Param("alias", "PASS0")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass1ShaderDef()
.Param("alias", "PASS1")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass2ShaderDef()
.Param("alias", "PASS2")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass3ShaderDef()
.Param("alias", "PASS3")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersGameboyShaderFilesGbPass4ShaderDef()
.Param("alias", "PASS4")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
            TextureDefs.push_back(HandheldShadersGameboyResourcesSamplePalettesBWPaletteTextureDef()
.Param("linear", "false")
.Param("name", "COLOR_PALETTE"));
            TextureDefs.push_back(HandheldShadersGameboyResourcesSampleBgsPaperBgTextureDef()
.Param("linear", "true")
.Param("name", "BACKGROUND"));
            OverrideParam("response_time", (float)0.330000);
	}
};
}
