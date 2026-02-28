/*
ShaderGlass preset crt / fake-crt-geom imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/fake-crt-geom.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtFakeCrtGeomPresetDef : public PresetDef
{
public:
	CrtFakeCrtGeomPresetDef() : PresetDef{}
	{
		Name = "fake-crt-geom";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtConsumerLinearizeShaderDef());
         	ShaderDefs.push_back(CrtShadersFakeCrtGeomShaderDef());
            OverrideParam("feedback_pass", (float)0.000000);
	}
};
}
