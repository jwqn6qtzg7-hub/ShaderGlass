/*
ShaderGlass preset dithering / gdapt imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/dithering/gdapt.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringGdaptPresetDef : public PresetDef
{
public:
	DitheringGdaptPresetDef() : PresetDef{}
	{
		Name = "gdapt";
		Category = "dithering";
	}

	void Build() {
         	ShaderDefs.push_back(DitheringShadersGdaptGdaptPass0ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersGdaptGdaptPass1ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
