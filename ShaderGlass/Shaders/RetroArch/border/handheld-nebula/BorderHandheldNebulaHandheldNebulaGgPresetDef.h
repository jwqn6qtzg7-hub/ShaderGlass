/*
ShaderGlass preset border/handheld-nebula / handheld-nebula-gg imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/border/handheld-nebula/handheld-nebula-gg.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderHandheldNebulaHandheldNebulaGgPresetDef : public PresetDef
{
public:
	BorderHandheldNebulaHandheldNebulaGgPresetDef() : PresetDef{}
	{
		Name = "handheld-nebula-gg";
		Category = "border/handheld-nebula";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "248")
.Param("scale_y", "224"));
            TextureDefs.push_back(BorderHandheldNebulaHandheldNebulaGgTextureDef()
.Param("name", "BORDER"));
            OverrideParam("box_scale", (float)1.000000);
            OverrideParam("in_res_x", (float)160.000000);
            OverrideParam("in_res_y", (float)144.000000);
            OverrideParam("location", (float)0.500000);
	}
};
}
