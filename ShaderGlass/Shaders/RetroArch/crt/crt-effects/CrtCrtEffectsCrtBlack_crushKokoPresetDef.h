/*
ShaderGlass preset crt/crt-effects / crt-black_crush-koko imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/crt-black_crush-koko.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsCrtBlack_crushKokoPresetDef : public PresetDef
{
public:
	CrtCrtEffectsCrtBlack_crushKokoPresetDef() : PresetDef{}
	{
		Name = "crt-black_crush-koko";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(CrtCrtEffectsShadersCrtBlackCrushKokoCrtBlack_crush_avglumKokoShaderDef()
.Param("alias", "black_crush_avglum_pass")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersCrtBlackCrushKokoCrtBlack_crushKokoShaderDef()
.Param("alias", "black_crush_pass")
.Param("mipmap_input", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
	}
};
}
