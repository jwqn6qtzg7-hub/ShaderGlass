/*
ShaderGlass preset misc / accessibility_mods imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/accessibility_mods.slangp
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

	void Build() {
         	ShaderDefs.push_back(MiscShadersAccessibility_modsShaderDef()
.Param("scale_type", "source"));
	}
};
}
