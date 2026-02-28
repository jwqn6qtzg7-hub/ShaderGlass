/*
ShaderGlass preset misc / white_point imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/white_point.slangp
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

	void Build() {
         	ShaderDefs.push_back(MiscShadersWhite_pointShaderDef()
.Param("scale_type", "source"));
	}
};
}
