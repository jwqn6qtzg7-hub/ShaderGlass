/*
ShaderGlass preset crt / zfast-crt-hdmask imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/zfast-crt-hdmask.slangp
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

	void Build() {
         	ShaderDefs.push_back(CrtShadersZfast_crtZfast_crt_coarsemaskShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
