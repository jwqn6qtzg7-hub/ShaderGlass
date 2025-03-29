/*
ShaderGlass preset border/gameboy-player / gameboy-player-crt-geom-1x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/border/gameboy-player/gameboy-player-crt-geom-1x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderGameboyPlayerGameboyPlayerCrtGeom1xPresetDef : public PresetDef
{
public:
	BorderGameboyPlayerGameboyPlayerCrtGeom1xPresetDef() : PresetDef{}
	{
		Name = "gameboy-player-crt-geom-1x";
		Category = "border/gameboy-player";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderGbpShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "640")
.Param("scale_y", "480"));
         	ShaderDefs.push_back(CrtShadersCrtGeomShaderDef());
            TextureDefs.push_back(BorderGameboyPlayerGameboyPlayerTextureDef()
.Param("linear", "true")
.Param("name", "BORDER"));
            OverrideParam("border_on_top", (float)0.000000);
            OverrideParam("box_scale", (float)1.000000);
            OverrideParam("in_res_x", (float)480.000000);
            OverrideParam("in_res_y", (float)320.000000);
	}
};
}
