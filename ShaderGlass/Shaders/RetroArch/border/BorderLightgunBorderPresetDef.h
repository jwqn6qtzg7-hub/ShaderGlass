/*
ShaderGlass preset border / lightgun-border imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/border/lightgun-border.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderLightgunBorderPresetDef : public PresetDef
{
public:
	BorderLightgunBorderPresetDef() : PresetDef{}
	{
		Name = "lightgun-border";
		Category = "border";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BorderShadersLightgunBorderShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
	}
};
}
