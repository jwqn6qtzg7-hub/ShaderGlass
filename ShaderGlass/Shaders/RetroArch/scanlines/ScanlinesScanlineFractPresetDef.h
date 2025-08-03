/*
ShaderGlass preset scanlines / scanline-fract imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/scanlines/scanline-fract.slangp
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
