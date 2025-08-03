/*
ShaderGlass preset anamorphic / anamorphic imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/anamorphic/anamorphic.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(AnamorphicShadersAnamorphicShaderDef()
.Param("filter_linear", "true"));
	}
};
}
