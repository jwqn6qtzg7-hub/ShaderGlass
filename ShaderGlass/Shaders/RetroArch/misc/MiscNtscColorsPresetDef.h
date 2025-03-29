/*
ShaderGlass preset misc / ntsc-colors imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/ntsc-colors.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscNtscColorsPresetDef : public PresetDef
{
public:
	MiscNtscColorsPresetDef() : PresetDef{}
	{
		Name = "ntsc-colors";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersNtscColorsShaderDef()
.Param("scale_type", "source"));
	}
};
}
