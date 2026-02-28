/*
ShaderGlass preset crt/crt-effects / analog-service-menu imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/analog-service-menu.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsAnalogServiceMenuPresetDef : public PresetDef
{
public:
	CrtCrtEffectsAnalogServiceMenuPresetDef() : PresetDef{}
	{
		Name = "analog-service-menu";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(CrtCrtEffectsShadersAnalogServiceMenuShaderDef());
	}
};
}
