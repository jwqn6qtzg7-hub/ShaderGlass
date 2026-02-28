/*
ShaderGlass preset handheld / gb-palette-pocket imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/gb-palette-pocket.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldGbPalettePocketPresetDef : public PresetDef
{
public:
	HandheldGbPalettePocketPresetDef() : PresetDef{}
	{
		Name = "gb-palette-pocket";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersGbPaletteGbPaletteShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
            TextureDefs.push_back(HandheldShadersGbPaletteResourcesPalettePocketTextureDef()
.Param("linear", "false")
.Param("name", "COLOR_PALETTE"));
	}
};
}
