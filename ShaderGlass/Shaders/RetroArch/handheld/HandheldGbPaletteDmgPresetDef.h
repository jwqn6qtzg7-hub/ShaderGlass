/*
ShaderGlass preset handheld / gb-palette-dmg imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/handheld/gb-palette-dmg.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldGbPaletteDmgPresetDef : public PresetDef
{
public:
	HandheldGbPaletteDmgPresetDef() : PresetDef{}
	{
		Name = "gb-palette-dmg";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersGbPaletteGbPaletteShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
            TextureDefs.push_back(HandheldShadersGbPaletteResourcesPaletteDmgTextureDef()
.Param("linear", "false")
.Param("name", "COLOR_PALETTE"));
	}
};
}
