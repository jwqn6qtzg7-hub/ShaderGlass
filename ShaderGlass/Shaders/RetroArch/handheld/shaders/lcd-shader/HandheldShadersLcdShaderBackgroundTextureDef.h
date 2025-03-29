/*
ShaderGlass texture handheld/shaders/lcd-shader / background imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/shaders/lcd-shader/background.png
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace HandheldShadersLcdShaderBackgroundTextureDefs
{
const BYTE sData[] =
{137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,4,0,0,0,4,0,1,3,0,0,0,69,211,185,192,0,0,0,3,80,76,84
,69,127,127,127,144,202,27,35,0,0,0,150,73,68,65,84,120,1,237,193,1,1,0,0,0,195,144,245,79,253,32,71,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192
,189,1,4,30,0,1,109,13,52,190,0,0,0,0,73,69,78,68,174,66,96,130};
}

class HandheldShadersLcdShaderBackgroundTextureDef : public TextureDef
{
public:
	HandheldShadersLcdShaderBackgroundTextureDef() : TextureDef{}
	{
		Name = "background.png";
		Data = HandheldShadersLcdShaderBackgroundTextureDefs::sData;
		DataLength = sizeof(HandheldShadersLcdShaderBackgroundTextureDefs::sData);
	}
};
