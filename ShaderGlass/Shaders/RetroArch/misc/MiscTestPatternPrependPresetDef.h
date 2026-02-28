/*
ShaderGlass preset misc / test-pattern-prepend imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/test-pattern-prepend.slangp
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

	void Build() {
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
