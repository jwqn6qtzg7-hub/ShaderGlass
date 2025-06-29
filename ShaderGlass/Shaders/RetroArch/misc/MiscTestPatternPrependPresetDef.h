/*
ShaderGlass preset misc / test-pattern-prepend imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/test-pattern-prepend.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscTestPatternPrependPresetDef : public PresetDef
{
public:
	MiscTestPatternPrependPresetDef() : PresetDef{}
	{
		Name = "test-pattern-prepend";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersTestPatternTestPatternPrependShaderDef()
.Param("filter_linear", "false"));
            TextureDefs.push_back(MiscShadersTestPatternAll_palettesTextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "tpAllPalettes")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
