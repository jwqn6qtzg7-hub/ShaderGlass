/*
ShaderGlass preset crt/crt-effects / phosphorlut imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/phosphorlut.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsPhosphorlutPresetDef : public PresetDef
{
public:
	CrtCrtEffectsPhosphorlutPresetDef() : PresetDef{}
	{
		Name = "phosphorlut";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(CrtCrtEffectsShadersPhosphorlutScanlinesInterlaceLinearizeShaderDef()
.Param("alias", "firstPass")
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur5fastVerticalShaderDef()
.Param("alias", "blurPassV")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(BlursShadersRoyaleBlur5fastHorizontalShaderDef()
.Param("alias", "blurPass")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersPhosphorlutPhosphorlutPass0ShaderDef()
.Param("alias", "phosphorPass")
.Param("filter_linear", "true")
.Param("scale_type", "source")
.Param("scale_x", "4.0")
.Param("scale_y", "2.0")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersPhosphorlutPhosphorlutPass1ShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            TextureDefs.push_back(CrtCrtEffectsShadersPhosphorlutLutsShadowmaskTextureDef()
.Param("linear", "true")
.Param("name", "shadow")
.Param("wrap_mode", "repeat"));
            TextureDefs.push_back(CrtCrtEffectsShadersPhosphorlutLutsApertureGrilleTextureDef()
.Param("linear", "true")
.Param("name", "aperture")
.Param("wrap_mode", "repeat"));
            TextureDefs.push_back(CrtCrtEffectsShadersPhosphorlutLutsSlotmaskTextureDef()
.Param("linear", "true")
.Param("name", "slot")
.Param("wrap_mode", "repeat"));
	}
};
}
