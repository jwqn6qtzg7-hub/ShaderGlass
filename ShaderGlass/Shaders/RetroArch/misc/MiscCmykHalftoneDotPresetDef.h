/*
ShaderGlass preset misc / cmyk-halftone-dot imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/cmyk-halftone-dot.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersCmykHalftoneDotShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
