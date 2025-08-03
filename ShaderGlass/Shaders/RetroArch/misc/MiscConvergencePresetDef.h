/*
ShaderGlass preset misc / convergence imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/convergence.slangp
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
