/*
ShaderGlass preset deinterlacing / gtu-v050-deinterlaced imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/deinterlacing/gtu-v050-deinterlaced.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeinterlacingGtuV050DeinterlacedPresetDef : public PresetDef
{
public:
	DeinterlacingGtuV050DeinterlacedPresetDef() : PresetDef{}
	{
		Name = "gtu-v050-deinterlaced";
		Category = "deinterlacing";
	}

	void Build() {
         	ShaderDefs.push_back(DeinterlacingShadersGtuPass1DeinterlacedShaderDef()
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersGtuV050Pass2ShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(CrtShadersGtuV050Pass3ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
	}
};
}
