/*
ShaderGlass preset crt / crt-slangtest-lanczos imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-slangtest-lanczos.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtSlangtestLanczosPresetDef : public PresetDef
{
public:
	CrtCrtSlangtestLanczosPresetDef() : PresetDef{}
	{
		Name = "crt-slangtest-lanczos";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtSlangtestLinearizeShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(CrtShadersCrtSlangtestSincShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0")
.Param("srgb_framebuffer", "true"));
         	ShaderDefs.push_back(CrtShadersCrtSlangtestScanlineShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
