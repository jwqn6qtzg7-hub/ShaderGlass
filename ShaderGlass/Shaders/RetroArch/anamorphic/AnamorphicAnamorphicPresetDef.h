/*
ShaderGlass preset anamorphic / anamorphic imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/anamorphic/anamorphic.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class AnamorphicAnamorphicPresetDef : public PresetDef
{
public:
	AnamorphicAnamorphicPresetDef() : PresetDef{}
	{
		Name = "anamorphic";
		Category = "anamorphic";
	}

	void Build() {
         	ShaderDefs.push_back(AnamorphicShadersAnamorphicShaderDef()
.Param("filter_linear", "true"));
	}
};
}
