/*
ShaderGlass preset interpolation / jinc2-sharp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/jinc2-sharp.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersJinc2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
            OverrideParam("JINC2_AR_STRENGTH", (float)0.800000);
            OverrideParam("JINC2_SINC", (float)0.820000);
            OverrideParam("JINC2_WINDOW_SINC", (float)0.390000);
	}
};
}
