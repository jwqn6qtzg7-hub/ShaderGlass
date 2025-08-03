/*
ShaderGlass preset border/handheld-nebula / handheld-nebula-gba+lcd-grid-v2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/border/handheld-nebula/handheld-nebula-gba+lcd-grid-v2.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderHandheldNebulaHandheldNebulaGbaLcdGridV2PresetDef : public PresetDef
{
public:
	BorderHandheldNebulaHandheldNebulaGbaLcdGridV2PresetDef() : PresetDef{}
	{
		Name = "handheld-nebula-gba+lcd-grid-v2";
		Category = "border/handheld-nebula";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "280")
.Param("scale_y", "224"));
         	ShaderDefs.push_back(HandheldShadersLcdCgwgLcdGridV2ShaderDef());
            TextureDefs.push_back(BorderHandheldNebulaHandheldNebulaGbaTextureDef()
.Param("name", "BORDER"));
            OverrideParam("box_scale", (float)1.000000);
            OverrideParam("in_res_x", (float)240.000000);
            OverrideParam("in_res_y", (float)160.000000);
            OverrideParam("location", (float)0.500000);
	}
};
}
