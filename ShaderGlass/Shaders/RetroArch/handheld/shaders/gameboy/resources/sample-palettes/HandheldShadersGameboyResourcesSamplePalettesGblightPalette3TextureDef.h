/*
ShaderGlass texture handheld/shaders/gameboy/resources/sample-palettes / gblight-palette-3 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/shaders/gameboy/resources/sample-palettes/gblight-palette-3.png
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace HandheldShadersGameboyResourcesSamplePalettesGblightPalette3TextureDefs
{
const BYTE sData[] =
{137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,64,1,3,0,0,0,232,24,237,60,0,0,0,6,80,76,84
,69,5,186,155,0,83,80,63,97,1,15,0,0,0,23,73,68,65,84,120,1,99,128,129,255,80,64,164,192,168,192,168,192,168,192,168,0,0,11,76
,254,16,194,179,25,208,0,0,0,0,73,69,78,68,174,66,96,130};
}

class HandheldShadersGameboyResourcesSamplePalettesGblightPalette3TextureDef : public TextureDef
{
public:
	HandheldShadersGameboyResourcesSamplePalettesGblightPalette3TextureDef() : TextureDef{}
	{
		Name = "gblight-palette-3.png";
		Data = HandheldShadersGameboyResourcesSamplePalettesGblightPalette3TextureDefs::sData;
		DataLength = sizeof(HandheldShadersGameboyResourcesSamplePalettesGblightPalette3TextureDefs::sData);
	}
};
