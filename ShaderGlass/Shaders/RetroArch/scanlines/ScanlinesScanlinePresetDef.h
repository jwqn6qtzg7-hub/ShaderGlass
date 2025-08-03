/*
ShaderGlass preset scanlines / scanline imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/scanlines/scanline.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesScanlinePresetDef : public PresetDef
{
public:
	ScanlinesScanlinePresetDef() : PresetDef{}
	{
		Name = "scanline";
		Category = "scanlines";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlineShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
