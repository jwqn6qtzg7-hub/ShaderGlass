/*
ShaderGlass preset crt / zfast-crt-hdmask imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/zfast-crt-hdmask.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtZfastCrtHdmaskPresetDef : public PresetDef
{
public:
	CrtZfastCrtHdmaskPresetDef() : PresetDef{}
	{
		Name = "zfast-crt-hdmask";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersZfast_crtZfast_crt_coarsemaskShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
