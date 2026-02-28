/*
ShaderGlass preset misc / cmyk-halftone-dot imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/cmyk-halftone-dot.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscCmykHalftoneDotPresetDef : public PresetDef
{
public:
	MiscCmykHalftoneDotPresetDef() : PresetDef{}
	{
		Name = "cmyk-halftone-dot";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersCmykHalftoneDotShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
