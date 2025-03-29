/*
ShaderGlass preset scanlines / res-independent-scanlines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/scanlines/res-independent-scanlines.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesResIndependentScanlinesPresetDef : public PresetDef
{
public:
	ScanlinesResIndependentScanlinesPresetDef() : PresetDef{}
	{
		Name = "res-independent-scanlines";
		Category = "scanlines";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ScanlinesShadersResIndependentScanlinesShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
