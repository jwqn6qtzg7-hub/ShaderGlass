/*
ShaderGlass preset crt/crt-effects / crt-resswitch-glitch-koko imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/crt-resswitch-glitch-koko.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsCrtResswitchGlitchKokoPresetDef : public PresetDef
{
public:
	CrtCrtEffectsCrtResswitchGlitchKokoPresetDef() : PresetDef{}
	{
		Name = "crt-resswitch-glitch-koko";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(CrtCrtEffectsShadersCrtResswitchGlitchKokoShaderDef()
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("scale_0", (float)1.000000);
	}
};
}
