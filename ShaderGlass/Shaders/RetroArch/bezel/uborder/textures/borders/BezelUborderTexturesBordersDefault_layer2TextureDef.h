/*
ShaderGlass texture bezel/uborder/textures/borders / default_layer2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/bezel/uborder/textures/borders/default_layer2.png
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace BezelUborderTexturesBordersDefault_layer2TextureDefs
{
const BYTE sData[] =
{137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,1,0,0,0,1,8,6,0,0,0,31,21,196,137,0,0,0,9,112,72,89
,115,0,0,46,35,0,0,46,35,1,120,165,63,118,0,0,0,11,73,68,65,84,8,215,99,96,0,2,0,0,5,0,1,226,38,5,155,0,0,0
,0,73,69,78,68,174,66,96,130};
}

class BezelUborderTexturesBordersDefault_layer2TextureDef : public TextureDef
{
public:
	BezelUborderTexturesBordersDefault_layer2TextureDef() : TextureDef{}
	{
		Name = "default_layer2.png";
		Data = BezelUborderTexturesBordersDefault_layer2TextureDefs::sData;
		DataLength = sizeof(BezelUborderTexturesBordersDefault_layer2TextureDefs::sData);
	}
};
