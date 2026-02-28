/*
ShaderGlass preset border/handheld-nebula / handheld-nebula-gb+crt-consumer imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/border/handheld-nebula/handheld-nebula-gb+crt-consumer.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderHandheldNebulaHandheldNebulaGbCrtConsumerPresetDef : public PresetDef
{
public:
	BorderHandheldNebulaHandheldNebulaGbCrtConsumerPresetDef() : PresetDef{}
	{
		Name = "handheld-nebula-gb+crt-consumer";
		Category = "border/handheld-nebula";
	}

	void Build() {
         	ShaderDefs.push_back(BorderShadersImgborderShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "absolute")
.Param("scale_x", "280")
.Param("scale_y", "224"));
         	ShaderDefs.push_back(CrtShadersCrtConsumerShaderDef());
            TextureDefs.push_back(BorderHandheldNebulaHandheldNebulaGbTextureDef()
.Param("name", "BORDER"));
            OverrideParam("box_scale", (float)1.000000);
            OverrideParam("in_res_x", (float)160.000000);
            OverrideParam("in_res_y", (float)144.000000);
            OverrideParam("location", (float)0.500000);
	}
};
}
