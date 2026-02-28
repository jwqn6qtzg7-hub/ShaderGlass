/*
ShaderGlass preset misc / natural-vision imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/natural-vision.slangp
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

	void Build() {
         	ShaderDefs.push_back(MiscShadersNaturalVisionShaderDef()
.Param("scale_type", "source"));
	}
};
}
