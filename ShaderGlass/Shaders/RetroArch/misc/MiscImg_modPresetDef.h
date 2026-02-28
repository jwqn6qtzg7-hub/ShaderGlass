/*
ShaderGlass preset misc / img_mod imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/img_mod.slangp
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

	void Build() {
         	ShaderDefs.push_back(MiscShadersImg_modShaderDef()
.Param("scale_type", "viewport"));
            TextureDefs.push_back(ReshadeShadersLUT16TextureDef()
.Param("name", "SamplerLUT1"));
            TextureDefs.push_back(ReshadeShadersLUT16TextureDef()
.Param("name", "SamplerLUT2"));
	}
};
}
