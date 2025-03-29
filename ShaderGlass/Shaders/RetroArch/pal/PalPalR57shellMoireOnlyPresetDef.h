/*
ShaderGlass preset pal / pal-r57shell-moire-only imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pal/pal-r57shell-moire-only.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PalPalR57shellMoireOnlyPresetDef : public PresetDef
{
public:
	PalPalR57shellMoireOnlyPresetDef() : PresetDef{}
	{
		Name = "pal-r57shell-moire-only";
		Category = "pal";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PalShadersPalR57shellMoireOnlyShaderDef()
.Param("scale_type", "source"));
	}
};
}
