/*
ShaderGlass preset interpolation / jinc2-sharp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/jinc2-sharp.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationJinc2SharpPresetDef : public PresetDef
{
public:
	InterpolationJinc2SharpPresetDef() : PresetDef{}
	{
		Name = "jinc2-sharp";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersJinc2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
            OverrideParam("JINC2_AR_STRENGTH", (float)0.800000);
            OverrideParam("JINC2_SINC", (float)0.820000);
            OverrideParam("JINC2_WINDOW_SINC", (float)0.390000);
	}
};
}
