/*
ShaderGlass preset misc / anti-flicker imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/anti-flicker.slangp
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
