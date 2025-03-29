/*
ShaderGlass preset handheld/color-mod / SwitchOLED-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/color-mod/SwitchOLED-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldColorModSwitchOLEDColorPresetDef : public PresetDef
{
public:
	HandheldColorModSwitchOLEDColorPresetDef() : PresetDef{}
	{
		Name = "SwitchOLED-color";
		Category = "handheld/color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTMultiLUTShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersColorSwitchOLEDColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
            TextureDefs.push_back(ReshadeShadersLUT64TextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT1"));
            TextureDefs.push_back(HandheldShadersColorLutPspGrey1TextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT2"));
	}
};
}
