/*
ShaderGlass preset misc / deinterlace imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/deinterlace.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscDeinterlacePresetDef : public PresetDef
{
public:
	MiscDeinterlacePresetDef() : PresetDef{}
	{
		Name = "deinterlace";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersDeinterlaceShaderDef()
.Param("scale_type", "source"));
	}
};
}
