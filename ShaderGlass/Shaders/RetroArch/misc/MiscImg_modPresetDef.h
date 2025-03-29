/*
ShaderGlass preset misc / img_mod imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/img_mod.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscImg_modPresetDef : public PresetDef
{
public:
	MiscImg_modPresetDef() : PresetDef{}
	{
		Name = "img_mod";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersImg_modShaderDef()
.Param("scale_type", "viewport"));
            TextureDefs.push_back(ReshadeShadersLUT16TextureDef()
.Param("name", "SamplerLUT1"));
            TextureDefs.push_back(ReshadeShadersLUT16TextureDef()
.Param("name", "SamplerLUT2"));
	}
};
}
