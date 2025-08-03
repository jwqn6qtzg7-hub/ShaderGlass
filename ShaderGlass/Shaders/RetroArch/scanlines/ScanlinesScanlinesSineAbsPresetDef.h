/*
ShaderGlass preset scanlines / scanlines-sine-abs imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/scanlines/scanlines-sine-abs.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlinesSineAbsShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
