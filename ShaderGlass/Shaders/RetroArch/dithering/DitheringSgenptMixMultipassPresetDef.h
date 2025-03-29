/*
ShaderGlass preset dithering / sgenpt-mix-multipass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/dithering/sgenpt-mix-multipass.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringSgenptMixMultipassPresetDef : public PresetDef
{
public:
	DitheringSgenptMixMultipassPresetDef() : PresetDef{}
	{
		Name = "sgenpt-mix-multipass";
		Category = "dithering";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DitheringShadersSgenptMixLinearizeShaderDef()
.Param("alias", "LinearGamma")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersSgenptMixSgenptMixPass1ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersSgenptMixSgenptMixPass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersSgenptMixSgenptMixPass3ShaderDef()
.Param("alias", "CB_Output")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersSgenptMixSgenptMixPass4ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersSgenptMixSgenptMixPass5ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
