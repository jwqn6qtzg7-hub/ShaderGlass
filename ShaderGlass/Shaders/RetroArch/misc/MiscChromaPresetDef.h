/*
ShaderGlass preset misc / chroma imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/chroma.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscChromaPresetDef : public PresetDef
{
public:
	MiscChromaPresetDef() : PresetDef{}
	{
		Name = "chroma";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersChromaShaderDef()
.Param("scale_type", "source"));
	}
};
}
