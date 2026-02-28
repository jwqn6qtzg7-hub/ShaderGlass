/*
ShaderGlass preset misc / retro-palettes imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/retro-palettes.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscRetroPalettesPresetDef : public PresetDef
{
public:
	MiscRetroPalettesPresetDef() : PresetDef{}
	{
		Name = "retro-palettes";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersRetroPalettesShaderDef()
.Param("scale_type", "source"));
	}
};
}
