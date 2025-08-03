/*
ShaderGlass preset misc / accessibility_mods imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/accessibility_mods.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscAccessibility_modsPresetDef : public PresetDef
{
public:
	MiscAccessibility_modsPresetDef() : PresetDef{}
	{
		Name = "accessibility_mods";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersAccessibility_modsShaderDef()
.Param("scale_type", "source"));
	}
};
}
