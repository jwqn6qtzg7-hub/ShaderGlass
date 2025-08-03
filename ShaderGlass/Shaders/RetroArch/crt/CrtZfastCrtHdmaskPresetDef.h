/*
ShaderGlass preset crt / zfast-crt-hdmask imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/zfast-crt-hdmask.slangp
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
