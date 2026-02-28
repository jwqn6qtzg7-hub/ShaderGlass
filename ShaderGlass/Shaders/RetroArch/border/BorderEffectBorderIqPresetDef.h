/*
ShaderGlass preset border / effect-border-iq imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/border/effect-border-iq.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BorderEffectBorderIqPresetDef : public PresetDef
{
public:
	BorderEffectBorderIqPresetDef() : PresetDef{}
	{
		Name = "effect-border-iq";
		Category = "border";
	}

	void Build() {
         	ShaderDefs.push_back(BorderShadersEffectBorderIqShaderDef()
.Param("alias", "BORDERS")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
            TextureDefs.push_back(BorderTexturesTex11TextureDef()
.Param("linear", "true")
.Param("mipmap", "true")
.Param("name", "iChannel0")
.Param("wrap_mode", "repeat"));
            OverrideParam("framecount_mod0", (float)10000.000000);
	}
};
}
