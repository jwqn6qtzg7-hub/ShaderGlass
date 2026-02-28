/*
ShaderGlass preset deinterlacing / interpolation-deinterlacer imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/deinterlacing/interpolation-deinterlacer.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeinterlacingInterpolationDeinterlacerPresetDef : public PresetDef
{
public:
	DeinterlacingInterpolationDeinterlacerPresetDef() : PresetDef{}
	{
		Name = "interpolation-deinterlacer";
		Category = "deinterlacing";
	}

	void Build() {
         	ShaderDefs.push_back(DeinterlacingShadersInterpolationDeinterlacerShaderDef());
	}
};
}
