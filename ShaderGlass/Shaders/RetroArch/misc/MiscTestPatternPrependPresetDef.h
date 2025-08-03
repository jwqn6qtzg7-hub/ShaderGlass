/*
ShaderGlass preset misc / test-pattern-prepend imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/test-pattern-prepend.slangp
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
