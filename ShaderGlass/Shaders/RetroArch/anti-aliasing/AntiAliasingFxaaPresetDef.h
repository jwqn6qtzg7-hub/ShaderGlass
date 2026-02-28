/*
ShaderGlass preset anti-aliasing / fxaa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/anti-aliasing/fxaa.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class AntiAliasingFxaaPresetDef : public PresetDef
{
public:
	AntiAliasingFxaaPresetDef() : PresetDef{}
	{
		Name = "fxaa";
		Category = "anti-aliasing";
	}

	void Build() {
         	ShaderDefs.push_back(AntiAliasingShadersFxaaShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
