/*
ShaderGlass preset misc / ega imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/ega.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscEgaPresetDef : public PresetDef
{
public:
	MiscEgaPresetDef() : PresetDef{}
	{
		Name = "ega";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersEgaShaderDef()
.Param("scale_type", "source"));
	}
};
}
