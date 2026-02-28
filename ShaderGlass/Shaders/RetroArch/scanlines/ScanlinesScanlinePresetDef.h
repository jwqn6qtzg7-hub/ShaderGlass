/*
ShaderGlass preset scanlines / scanline imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/scanlines/scanline.slangp
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

	void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlineShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
