/*
ShaderGlass preset scanlines / scanline-fract imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/scanlines/scanline-fract.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesScanlineFractPresetDef : public PresetDef
{
public:
	ScanlinesScanlineFractPresetDef() : PresetDef{}
	{
		Name = "scanline-fract";
		Category = "scanlines";
	}

	void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlineFractShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
