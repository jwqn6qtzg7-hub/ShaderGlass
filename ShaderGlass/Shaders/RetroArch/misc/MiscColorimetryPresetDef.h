/*
ShaderGlass preset misc / colorimetry imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/colorimetry.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersColorimetryShaderDef()
.Param("scale_type", "source"));
	}
};
}
