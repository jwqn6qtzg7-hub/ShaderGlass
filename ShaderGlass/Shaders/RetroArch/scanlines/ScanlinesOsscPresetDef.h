/*
ShaderGlass preset scanlines / ossc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/scanlines/ossc.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesOsscPresetDef : public PresetDef
{
public:
	ScanlinesOsscPresetDef() : PresetDef{}
	{
		Name = "ossc";
		Category = "scanlines";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ScanlinesShadersOsscShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
