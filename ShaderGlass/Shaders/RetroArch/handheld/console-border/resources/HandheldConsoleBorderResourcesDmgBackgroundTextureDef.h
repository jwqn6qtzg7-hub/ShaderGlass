/*
ShaderGlass texture handheld/console-border/resources / dmg-background imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/console-border/resources/dmg-background.png
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace HandheldConsoleBorderResourcesDmgBackgroundTextureDefs
{
const BYTE sData[] =
{137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,0,0,0,32,8,0,0,0,0,86,17,37,40,0,0,0,21,73,68,65
,84,120,1,99,104,32,0,70,172,130,81,5,163,10,70,21,0,0,66,0,0,31,96,190,166,104,0,0,0,0,73,69,78,68,174,66,96,130};
}

class HandheldConsoleBorderResourcesDmgBackgroundTextureDef : public TextureDef
{
public:
	HandheldConsoleBorderResourcesDmgBackgroundTextureDef() : TextureDef{}
	{
		Name = "dmg-background.png";
		Data = HandheldConsoleBorderResourcesDmgBackgroundTextureDefs::sData;
		DataLength = sizeof(HandheldConsoleBorderResourcesDmgBackgroundTextureDefs::sData);
	}
};
