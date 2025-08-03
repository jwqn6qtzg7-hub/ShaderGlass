/*
ShaderGlass preset misc / retro-palettes imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/retro-palettes.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersRetroPalettesShaderDef()
.Param("scale_type", "source"));
	}
};
}
