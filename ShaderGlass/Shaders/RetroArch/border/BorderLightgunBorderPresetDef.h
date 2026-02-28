/*
ShaderGlass preset border / lightgun-border imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/border/lightgun-border.slangp
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

	void Build() {
         	ShaderDefs.push_back(BorderShadersLightgunBorderShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
	}
};
}
