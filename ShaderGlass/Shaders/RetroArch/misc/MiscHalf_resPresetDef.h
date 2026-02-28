/*
ShaderGlass preset misc / half_res imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/half_res.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscHalf_resPresetDef : public PresetDef
{
public:
	MiscHalf_resPresetDef() : PresetDef{}
	{
		Name = "half_res";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "0.5"));
            OverrideParam("feedback_pass", (float)0.000000);
	}
};
}
