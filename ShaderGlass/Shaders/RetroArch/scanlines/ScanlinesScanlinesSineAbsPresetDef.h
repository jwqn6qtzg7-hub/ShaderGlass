/*
ShaderGlass preset scanlines / scanlines-sine-abs imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/scanlines/scanlines-sine-abs.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesScanlinesSineAbsPresetDef : public PresetDef
{
public:
	ScanlinesScanlinesSineAbsPresetDef() : PresetDef{}
	{
		Name = "scanlines-sine-abs";
		Category = "scanlines";
	}

	void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlinesSineAbsShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
