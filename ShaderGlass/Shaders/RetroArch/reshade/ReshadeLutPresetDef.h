/*
ShaderGlass preset reshade / lut imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/reshade/lut.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeLutPresetDef : public PresetDef
{
public:
	ReshadeLutPresetDef() : PresetDef{}
	{
		Name = "lut";
		Category = "reshade";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTLUTShaderDef()
.Param("scale_type", "source"));
            TextureDefs.push_back(ReshadeShadersLUT16TextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT"));
	}
};
}
