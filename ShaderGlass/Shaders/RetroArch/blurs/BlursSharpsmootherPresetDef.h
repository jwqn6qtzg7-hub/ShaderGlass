/*
ShaderGlass preset blurs / sharpsmoother imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/blurs/sharpsmoother.slangp
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
