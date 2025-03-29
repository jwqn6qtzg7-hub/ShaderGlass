/*
ShaderGlass preset misc / white_point imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/white_point.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscWhite_pointPresetDef : public PresetDef
{
public:
	MiscWhite_pointPresetDef() : PresetDef{}
	{
		Name = "white_point";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersWhite_pointShaderDef()
.Param("scale_type", "source"));
	}
};
}
