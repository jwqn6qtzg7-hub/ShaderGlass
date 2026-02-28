/*
ShaderGlass preset interpolation / jinc2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/jinc2.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationJinc2PresetDef : public PresetDef
{
public:
	InterpolationJinc2PresetDef() : PresetDef{}
	{
		Name = "jinc2";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersJinc2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
