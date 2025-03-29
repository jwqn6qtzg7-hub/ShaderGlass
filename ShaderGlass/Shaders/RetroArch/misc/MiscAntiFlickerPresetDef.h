/*
ShaderGlass preset misc / anti-flicker imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/anti-flicker.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscAntiFlickerPresetDef : public PresetDef
{
public:
	MiscAntiFlickerPresetDef() : PresetDef{}
	{
		Name = "anti-flicker";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersAntiFlickerShaderDef()
.Param("scale_type", "source"));
	}
};
}
