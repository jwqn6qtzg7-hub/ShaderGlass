/*
ShaderGlass preset misc / colorimetry imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/colorimetry.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscColorimetryPresetDef : public PresetDef
{
public:
	MiscColorimetryPresetDef() : PresetDef{}
	{
		Name = "colorimetry";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersColorimetryShaderDef()
.Param("scale_type", "source"));
	}
};
}
