/*
ShaderGlass preset border / effect-border-iq imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/border/effect-border-iq.slangp
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

	virtual void Build() {
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
