/*
ShaderGlass preset handheld / gb-palette-light imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/gb-palette-light.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldGbPaletteLightPresetDef : public PresetDef
{
public:
	HandheldGbPaletteLightPresetDef() : PresetDef{}
	{
		Name = "gb-palette-light";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersGbPaletteGbPaletteShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
            TextureDefs.push_back(HandheldShadersGbPaletteResourcesPaletteLightTextureDef()
.Param("linear", "false")
.Param("name", "COLOR_PALETTE"));
	}
};
}
