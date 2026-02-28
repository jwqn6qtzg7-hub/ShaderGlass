/*
ShaderGlass preset gpu / powervr2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/gpu/powervr2.slangp
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

	void Build() {
         	ShaderDefs.push_back(GpuShadersPowervr2ShaderDef());
	}
};
}
