/*
ShaderGlass preset misc / accessibility_mods imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/accessibility_mods.slangp
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
