/*
ShaderGlass preset border / lightgun-border imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/border/lightgun-border.slangp
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
