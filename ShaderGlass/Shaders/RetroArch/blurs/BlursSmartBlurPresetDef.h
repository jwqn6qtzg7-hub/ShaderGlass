/*
ShaderGlass preset blurs / smart-blur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/blurs/smart-blur.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(BlursShadersSmartBlurShaderDef());
	}
};
}
