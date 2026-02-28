/*
ShaderGlass preset handheld / agb001 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/agb001.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldAgb001PresetDef : public PresetDef
{
public:
	HandheldAgb001PresetDef() : PresetDef{}
	{
		Name = "agb001";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersMgbaAgb001ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "4.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
