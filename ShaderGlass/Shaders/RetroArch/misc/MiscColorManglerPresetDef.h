/*
ShaderGlass preset misc / color-mangler imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/color-mangler.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscColorManglerPresetDef : public PresetDef
{
public:
	MiscColorManglerPresetDef() : PresetDef{}
	{
		Name = "color-mangler";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersColorManglerShaderDef()
.Param("scale_type", "source"));
	}
};
}
