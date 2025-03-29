/*
ShaderGlass preset scanlines / scanlines-rere imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/scanlines/scanlines-rere.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesScanlinesRerePresetDef : public PresetDef
{
public:
	ScanlinesScanlinesRerePresetDef() : PresetDef{}
	{
		Name = "scanlines-rere";
		Category = "scanlines";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlinesRereShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
