/*
ShaderGlass preset border/sgb / sgb imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/border/sgb/sgb.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderSgbSgbPresetDef : public PresetDef
{
public:
	BorderSgbSgbPresetDef() : PresetDef{}
	{
		Name = "sgb";
		Category = "border/sgb";
	}

	void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderSgbShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "256")
.Param("scale_y", "224"));
            TextureDefs.push_back(BorderSgbSgbTextureDef()
.Param("name", "BORDER"));
            OverrideParam("box_scale", (float)1.000000);
            OverrideParam("in_res_x", (float)160.000000);
            OverrideParam("in_res_y", (float)144.000000);
            OverrideParam("location", (float)0.500000);
	}
};
}
