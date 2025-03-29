/*
ShaderGlass texture crt/shaders/phosphorlut/luts / aperture-grille imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/shaders/phosphorlut/luts/aperture-grille.png
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace CrtShadersPhosphorlutLutsApertureGrilleTextureDefs
{
const BYTE sData[] =
{137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,20,0,0,0,20,8,2,0,0,0,2,235,138,90,0,0,0,26,73,68,65
,84,120,1,99,0,130,255,96,68,6,107,128,53,143,106,30,213,60,170,121,84,51,0,202,59,239,17,151,27,214,150,0,0,0,0,73,69,78,68,174
,66,96,130};
}

class CrtShadersPhosphorlutLutsApertureGrilleTextureDef : public TextureDef
{
public:
	CrtShadersPhosphorlutLutsApertureGrilleTextureDef() : TextureDef{}
	{
		Name = "aperture-grille.png";
		Data = CrtShadersPhosphorlutLutsApertureGrilleTextureDefs::sData;
		DataLength = sizeof(CrtShadersPhosphorlutLutsApertureGrilleTextureDefs::sData);
	}
};
