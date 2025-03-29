/*
ShaderGlass preset scanlines / scanline-fract imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/scanlines/scanline-fract.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlineFractShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
