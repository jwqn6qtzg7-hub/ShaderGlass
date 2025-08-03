/*
ShaderGlass preset misc / natural-vision imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/natural-vision.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscNaturalVisionPresetDef : public PresetDef
{
public:
	MiscNaturalVisionPresetDef() : PresetDef{}
	{
		Name = "natural-vision";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersNaturalVisionShaderDef()
.Param("scale_type", "source"));
	}
};
}
