/*
ShaderGlass preset gpu / powervr2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/gpu/powervr2.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class GpuPowervr2PresetDef : public PresetDef
{
public:
	GpuPowervr2PresetDef() : PresetDef{}
	{
		Name = "powervr2";
		Category = "gpu";
	}

	virtual void Build() {
         	ShaderDefs.push_back(GpuShadersPowervr2ShaderDef());
	}
};
}
