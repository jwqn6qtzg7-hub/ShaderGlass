/*
ShaderGlass preset presets/crt-plus-signal / fakelottes-ntsc-composite imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/crt-plus-signal/fakelottes-ntsc-composite.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsCrtPlusSignalFakelottesNtscCompositePresetDef : public PresetDef
{
public:
	PresetsCrtPlusSignalFakelottesNtscCompositePresetDef() : PresetDef{}
	{
		Name = "fakelottes-ntsc-composite";
		Category = "presets/crt-plus-signal";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtConsumerNtsc_moduleShaderDef());
         	ShaderDefs.push_back(CrtShadersFakelottesShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            OverrideParam("u_chroma", (float)2.000000);
	}
};
}
