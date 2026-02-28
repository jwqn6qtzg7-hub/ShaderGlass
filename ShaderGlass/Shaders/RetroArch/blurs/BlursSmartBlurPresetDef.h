/*
ShaderGlass preset blurs / smart-blur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/blurs/smart-blur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BlursSmartBlurPresetDef : public PresetDef
{
public:
	BlursSmartBlurPresetDef() : PresetDef{}
	{
		Name = "smart-blur";
		Category = "blurs";
	}

	void Build() {
         	ShaderDefs.push_back(BlursShadersSmartBlurShaderDef());
	}
};
}
