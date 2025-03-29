/*
ShaderGlass preset misc / convergence imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/convergence.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscConvergencePresetDef : public PresetDef
{
public:
	MiscConvergencePresetDef() : PresetDef{}
	{
		Name = "convergence";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersConvergenceShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "source"));
	}
};
}
