/*
ShaderGlass preset crt / crt-beans-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-beans-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtBeansFastPresetDef : public PresetDef
{
public:
	CrtCrtBeansFastPresetDef() : PresetDef{}
	{
		Name = "crt-beans-fast";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtBeansLinearizeShaderDef()
.Param("alias", "Linearized")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersCrtBeansScanlines_fast_horizontalShaderDef()
.Param("filter_linear", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansScanlines_fast_verticalShaderDef()
.Param("filter_linear", "false")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
