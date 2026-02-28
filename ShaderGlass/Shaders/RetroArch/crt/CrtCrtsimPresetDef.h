/*
ShaderGlass preset crt / crtsim imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crtsim.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtsimPresetDef : public PresetDef
{
public:
	CrtCrtsimPresetDef() : PresetDef{}
	{
		Name = "crtsim";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtsimCompositeShaderDef()
.Param("filter_linear", "false"));
         	ShaderDefs.push_back(CrtShadersCrtsimScreenShaderDef()
.Param("alias", "CRTPASS"));
         	ShaderDefs.push_back(CrtShadersCrtsimPostDownsampleShaderDef()
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtsimPostUpsampleShaderDef()
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtsimPresentShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            TextureDefs.push_back(CrtShadersCrtsimArtifactsTextureDef()
.Param("linear", "true")
.Param("name", "NTSCArtifactSampler"));
            TextureDefs.push_back(CrtShadersCrtsimMaskTextureDef()
.Param("linear", "true")
.Param("name", "shadowMaskSampler"));
	}
};
}
