/*
ShaderGlass preset anti-aliasing / fxaa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/anti-aliasing/fxaa.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(AntiAliasingShadersFxaaShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
