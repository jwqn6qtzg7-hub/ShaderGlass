/*
ShaderGlass preset border/sgb / sgb+crt-easymode imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/border/sgb/sgb+crt-easymode.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderSgbSgbCrtEasymodePresetDef : public PresetDef
{
public:
	BorderSgbSgbCrtEasymodePresetDef() : PresetDef{}
	{
		Name = "sgb+crt-easymode";
		Category = "border/sgb";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderSgbShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "256")
.Param("scale_y", "224"));
         	ShaderDefs.push_back(CrtShadersCrtEasymodeShaderDef());
            TextureDefs.push_back(BorderSgbSgbTextureDef()
.Param("name", "BORDER"));
            OverrideParam("box_scale", (float)1.000000);
            OverrideParam("in_res_x", (float)160.000000);
            OverrideParam("in_res_y", (float)144.000000);
            OverrideParam("location", (float)0.500000);
	}
};
}
