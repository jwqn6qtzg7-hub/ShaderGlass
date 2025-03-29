/*
ShaderGlass preset presets / gameboy-advance-dot-matrix-sepia imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/gameboy-advance-dot-matrix-sepia.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsGameboyAdvanceDotMatrixSepiaPresetDef : public PresetDef
{
public:
	PresetsGameboyAdvanceDotMatrixSepiaPresetDef() : PresetDef{}
	{
		Name = "gameboy-advance-dot-matrix-sepia";
		Category = "presets";
	}

	virtual void Build() {
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
            TextureDefs.push_back(HandheldShadersGameboyResourcesSamplePalettesGbpPaletteTextureDef()
.Param("linear", "false")
.Param("name", "COLOR_PALETTE"));
            TextureDefs.push_back(HandheldShadersGameboyResourcesSampleBgsPaperBgTextureDef()
.Param("linear", "true")
.Param("name", "BACKGROUND"));
            OverrideParam("baseline_alpha", (float)1.000000);
            OverrideParam("color_toggle", (float)1.000000);
            OverrideParam("contrast", (float)1.000000);
            OverrideParam("response_time", (float)0.000000);
	}
};
}
