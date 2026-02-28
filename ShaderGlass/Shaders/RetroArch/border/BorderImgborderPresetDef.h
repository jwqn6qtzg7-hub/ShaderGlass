/*
ShaderGlass preset border / imgborder imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/border/imgborder.slangp
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

	void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderShaderDef()
.Param("scale_type", "viewport"));
            TextureDefs.push_back(BorderTexturesPvmTextureDef()
.Param("name", "BORDER"));
            OverrideParam("border_on_top", (float)0.000000);
	}
};
}
