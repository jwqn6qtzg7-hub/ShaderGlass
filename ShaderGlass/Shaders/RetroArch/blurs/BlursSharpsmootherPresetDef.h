/*
ShaderGlass preset blurs / sharpsmoother imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/blurs/sharpsmoother.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BlursSharpsmootherPresetDef : public PresetDef
{
public:
	BlursSharpsmootherPresetDef() : PresetDef{}
	{
		Name = "sharpsmoother";
		Category = "blurs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BlursShadersSharpsmootherShaderDef());
	}
};
}
