/*
ShaderGlass preset border / imgborder imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/border/imgborder.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderImgborderPresetDef : public PresetDef
{
public:
	BorderImgborderPresetDef() : PresetDef{}
	{
		Name = "imgborder";
		Category = "border";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderShaderDef()
.Param("scale_type", "viewport"));
            TextureDefs.push_back(BorderTexturesPvmTextureDef()
.Param("name", "BORDER"));
            OverrideParam("border_on_top", (float)0.000000);
	}
};
}
