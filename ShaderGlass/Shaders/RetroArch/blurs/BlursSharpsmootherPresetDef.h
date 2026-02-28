/*
ShaderGlass preset blurs / sharpsmoother imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/blurs/sharpsmoother.slangp
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

	void Build() {
         	ShaderDefs.push_back(BlursShadersSharpsmootherShaderDef());
	}
};
}
