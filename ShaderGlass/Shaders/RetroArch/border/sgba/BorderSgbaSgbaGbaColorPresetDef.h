/*
ShaderGlass preset border/sgba / sgba-gba-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/border/sgba/sgba-gba-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderSgbaSgbaGbaColorPresetDef : public PresetDef
{
public:
	BorderSgbaSgbaGbaColorPresetDef() : PresetDef{}
	{
		Name = "sgba-gba-color";
		Category = "border/sgba";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorGbaColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0000")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(BorderShadersImgborderSgbaShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "320")
.Param("scale_y", "240"));
            TextureDefs.push_back(BorderSgbaSgbaTextureDef()
.Param("name", "BORDER"));
            OverrideParam("box_scale", (float)1.000000);
            OverrideParam("in_res_x", (float)240.000000);
            OverrideParam("in_res_y", (float)160.000000);
	}
};
}
