/*
ShaderGlass preset dithering / gendither imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/dithering/gendither.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringGenditherPresetDef : public PresetDef
{
public:
	DitheringGenditherPresetDef() : PresetDef{}
	{
		Name = "gendither";
		Category = "dithering";
	}

	void Build() {
         	ShaderDefs.push_back(DitheringShadersGenditherShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
