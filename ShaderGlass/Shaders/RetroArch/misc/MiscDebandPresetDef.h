/*
ShaderGlass preset misc / deband imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/deband.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscDebandPresetDef : public PresetDef
{
public:
	MiscDebandPresetDef() : PresetDef{}
	{
		Name = "deband";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersDebandShaderDef()
.Param("scale_type", "source"));
	}
};
}
