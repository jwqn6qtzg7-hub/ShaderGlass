/*
ShaderGlass preset crt / crt-resswitch-glitch-koko imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-resswitch-glitch-koko.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtResswitchGlitchKokoPresetDef : public PresetDef
{
public:
	CrtCrtResswitchGlitchKokoPresetDef() : PresetDef{}
	{
		Name = "crt-resswitch-glitch-koko";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtResswitchGlitchKokoShaderDef()
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("scale_0", (float)1.000000);
	}
};
}
