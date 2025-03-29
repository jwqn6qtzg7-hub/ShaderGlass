/*
ShaderGlass preset deblur / deblur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/deblur/deblur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeblurDeblurPresetDef : public PresetDef
{
public:
	DeblurDeblurPresetDef() : PresetDef{}
	{
		Name = "deblur";
		Category = "deblur";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DeblurShadersDeblurShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
