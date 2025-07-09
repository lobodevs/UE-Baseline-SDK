#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Material.hpp"
#include "MaterialInterface.hpp"
#include "PhysicalMaterialMask.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
_Script_Engine::PhysicalMaterialMask*& _Script_Engine::Material::get_PhysMaterialMask() {
    return *(_Script_Engine::PhysicalMaterialMask**)((uintptr_t)this + 0x90);
}
bool _Script_Engine::Material::get_bCastDynamicShadowAsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x155 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bEnableResponsiveAA(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_Engine::Material::get_PhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x88);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraSprites() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 16 != 0;
}
void* _Script_Engine::Material::get_MaterialDecalResponse() {
    return (void*)((uintptr_t)this + 0x153);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_Engine::Material::get_PhysicalMaterialMap() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x98);
}
void _Script_Engine::Material::set_DitheredLODTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::Material::set_bCastDynamicShadowAsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x155 + 0);
    *(uint8_t*)((uintptr_t)this + 0x155 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUseLightmapDirectionality() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 16 != 0;
}
void* _Script_Engine::Material::get_Metallic() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_Engine::Material::get_bUsedWithLidarPointCloud() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 4 != 0;
}
void* _Script_Engine::Material::get_EmissiveColor() {
    return (void*)((uintptr_t)this + 0x13c);
}
void* _Script_Engine::Material::get_ShadingModelFromMaterialExpression() {
    return (void*)((uintptr_t)this + 0x1b0);
}
bool _Script_Engine::Material::get_DitheredLODTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 32 != 0;
}
void* _Script_Engine::Material::get_Specular() {
    return (void*)((uintptr_t)this + 0xec);
}
void _Script_Engine::Material::set_bEnableMobileSeparateTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_Tangent() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::Material::get_Anisotropy() {
    return (void*)((uintptr_t)this + 0x100);
}
int32_t& _Script_Engine::Material::get_BlendablePriority() {
    return *(int32_t*)((uintptr_t)this + 0x214);
}
void* _Script_Engine::Material::get_Normal() {
    return (void*)((uintptr_t)this + 0x114);
}
void* _Script_Engine::Material::get_MaterialDomain() {
    return (void*)((uintptr_t)this + 0x150);
}
bool _Script_Engine::Material::get_bEnableSeparateTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithGeometryCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::Material::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x151);
}
bool _Script_Engine::Material::get_bEnableResponsiveAA() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 2 != 0;
}
void* _Script_Engine::Material::get_DecalBlendMode() {
    return (void*)((uintptr_t)this + 0x152);
}
void* _Script_Engine::Material::get_Refraction() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Script_Engine::Material::get_bUsedWithClothing() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 64 != 0;
}
void* _Script_Engine::Material::get_ShadingModel() {
    return (void*)((uintptr_t)this + 0x154);
}
void* _Script_Engine::Material::get_MaterialAttributes() {
    return (void*)((uintptr_t)this + 0x184);
}
void _Script_Engine::Material::set_bGenerateSphericalParticleNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::Material::get_ShadingModels() {
    return (void*)((uintptr_t)this + 0x156);
}
bool _Script_Engine::Material::get_bTangentSpaceNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 8 != 0;
}
float& _Script_Engine::Material::get_OpacityMaskClipValue() {
    return *(float*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::Material::get_WorldPositionOffset() {
    return (void*)((uintptr_t)this + 0x15c);
}
bool _Script_Engine::Material::get_bBlockGI() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 32 != 0;
}
bool _Script_Engine::Material::get_bAllowNegativeEmissiveColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 128 != 0;
}
void* _Script_Engine::Material::get_PixelDepthOffset() {
    return (void*)((uintptr_t)this + 0x19c);
}
void _Script_Engine::Material::set_bEnableSeparateTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::Material::get_TranslucentShadowDensityScale() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
bool _Script_Engine::Material::get_bFullyRough() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 4 != 0;
}
bool _Script_Engine::Material::get_bScreenSpaceReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bScreenSpaceReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Material::set_bUsedWithHairStrands(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bContactShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bContactShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::Material::get_UsageFlagWarnings() {
    return (void*)((uintptr_t)this + 0x21c);
}
bool _Script_Engine::Material::get_TwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_TwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::Material::set_bBlockGI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bAutomaticallySetUsageInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 2 != 0;
}
bool _Script_Engine::Material::get_DitherOpacityMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 64 != 0;
}
float& _Script_Engine::Material::get_RefractionDepthBias() {
    return *(float*)((uintptr_t)this + 0x220);
}
void _Script_Engine::Material::set_bUsedWithStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Material::set_DitherOpacityMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::Material::set_bTangentSpaceNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::Material::set_bAllowNegativeEmissiveColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::Material::get_TranslucencyLightingMode() {
    return (void*)((uintptr_t)this + 0x1c5);
}
float& _Script_Engine::Material::get_TranslucentBackscatteringExponent() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
bool _Script_Engine::Material::get_bEnableMobileSeparateTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c6 + 0)) & 1 != 0;
}
bool _Script_Engine::Material::get_bForwardRenderUsePreintegratedGFForSimpleIBL() {
    return (*(uint8_t*)((uintptr_t)this + 0x204 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::Material::get_NumCustomizedUVs() {
    return *(int32_t*)((uintptr_t)this + 0x1c8);
}
float& _Script_Engine::Material::get_TranslucencyDirectionalLightingIntensity() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Script_Engine::Material::get_TranslucentSelfShadowDensityScale() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
float& _Script_Engine::Material::get_TranslucentSelfShadowSecondDensityScale() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
void _Script_Engine::Material::set_bUseLightmapDirectionality(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUsedWithGeometryCollections() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 16 != 0;
}
float& _Script_Engine::Material::get_TranslucentSelfShadowSecondOpacity() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
void* _Script_Engine::Material::get_TranslucentMultipleScatteringExtinction() {
    return (void*)((uintptr_t)this + 0x1e4);
}
float& _Script_Engine::Material::get_TranslucentShadowStartOffset() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
bool _Script_Engine::Material::get_bDisableDepthTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bDisableDepthTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUseFullPrecision() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 8 != 0;
}
bool _Script_Engine::Material::get_bWriteOnlyAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bWriteOnlyAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bGenerateSphericalParticleNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 4 != 0;
}
bool _Script_Engine::Material::get_bUseEmissiveForDynamicAreaLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUseEmissiveForDynamicAreaLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUsedAsSpecialEngineMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bUsedAsSpecialEngineMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUsedWithSkeletalMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bUsedWithMorphTargets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Material::set_bUsedWithSkeletalMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::Material::get_StateId() {
    return (void*)((uintptr_t)this + 0x224);
}
bool _Script_Engine::Material::get_bUsedWithEditorCompositing() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithEditorCompositing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUsedWithParticleSprites() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithParticleSprites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bUsedWithBeamTrails() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 4 != 0;
}
bool _Script_Engine::Material::get_bComputeFogPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x20d + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithBeamTrails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Material::set_bUseAlphaToCoverage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUsedWithMeshParticles() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bUsedWithMeshParticles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::Material::set_bUsedWithNiagaraSprites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraRibbons() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUsedWithNiagaraRibbons(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraMeshParticles() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bUsedWithNiagaraMeshParticles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUsedWithGeometryCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 128 != 0;
}
bool _Script_Engine::Material::get_bUsedWithStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 1 != 0;
}
bool _Script_Engine::Material::get_bUsedWithMorphTargets() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 2 != 0;
}
bool _Script_Engine::Material::get_bUsedWithSplineMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bUsedWithSplineMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bUsedWithInstancedStaticMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bUsedWithInstancedStaticMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::Material::set_bUsedWithGeometryCollections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUsesDistortion() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUsesDistortion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::Material::set_bUsedWithClothing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUsedWithWater() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithWater(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUsedWithHairStrands() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithLidarPointCloud(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bUsedWithVirtualHeightfieldMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bUsedWithVirtualHeightfieldMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUsedWithUI() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithUI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Material::set_bAutomaticallySetUsageInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::Material::get_StencilRefValue() {
    return (void*)((uintptr_t)this + 0x211);
}
void _Script_Engine::Material::set_bFullyRough(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Material::set_bUseFullPrecision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUseAlphaToCoverage() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bForwardRenderUsePreintegratedGFForSimpleIBL(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x204 + 0);
    *(uint8_t*)((uintptr_t)this + 0x204 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUseHQForwardReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUseHQForwardReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUsePlanarForwardReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsePlanarForwardReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bNormalCurvatureToRoughness() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bNormalCurvatureToRoughness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::Material::get_D3D11TessellationMode() {
    return (void*)((uintptr_t)this + 0x209);
}
bool _Script_Engine::Material::get_bEnableCrackFreeDisplacement() {
    return (*(uint8_t*)((uintptr_t)this + 0x20a + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bEnableCrackFreeDisplacement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20a + 0);
    *(uint8_t*)((uintptr_t)this + 0x20a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bEnableAdaptiveTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x20a + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bEnableAdaptiveTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20a + 0);
    *(uint8_t*)((uintptr_t)this + 0x20a + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_AllowTranslucentCustomDepthWrites() {
    return (*(uint8_t*)((uintptr_t)this + 0x20a + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_AllowTranslucentCustomDepthWrites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20a + 0);
    *(uint8_t*)((uintptr_t)this + 0x20a + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_Wireframe() {
    return (*(uint8_t*)((uintptr_t)this + 0x20a + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_Wireframe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20a + 0);
    *(uint8_t*)((uintptr_t)this + 0x20a + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::Material::get_ShadingRate() {
    return (void*)((uintptr_t)this + 0x20b);
}
bool _Script_Engine::Material::get_bCanMaskedBeAssumedOpaque() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bCanMaskedBeAssumedOpaque(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bIsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bIsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bIsPreviewMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bIsPreviewMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bIsFunctionPreviewMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bIsFunctionPreviewMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUseMaterialAttributes() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUseMaterialAttributes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bCastRayTracedShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bCastRayTracedShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUseTranslucencyVertexFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bUseTranslucencyVertexFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bApplyCloudFogging() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bApplyCloudFogging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bIsSky() {
    return (*(uint8_t*)((uintptr_t)this + 0x20d + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bIsSky(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20d + 0);
    *(uint8_t*)((uintptr_t)this + 0x20d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Material::set_bComputeFogPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20d + 0);
    *(uint8_t*)((uintptr_t)this + 0x20d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bOutputTranslucentVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x20d + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bOutputTranslucentVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20d + 0);
    *(uint8_t*)((uintptr_t)this + 0x20d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bAllowDevelopmentShaderCompile() {
    return (*(uint8_t*)((uintptr_t)this + 0x20d + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bAllowDevelopmentShaderCompile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20d + 0);
    *(uint8_t*)((uintptr_t)this + 0x20d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bIsMaterialEditorStatsMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x20d + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bIsMaterialEditorStatsMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20d + 0);
    *(uint8_t*)((uintptr_t)this + 0x20d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::Material::get_BlendableLocation() {
    return (void*)((uintptr_t)this + 0x20e);
}
bool _Script_Engine::Material::get_BlendableOutputAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x20f + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_BlendableOutputAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20f + 0);
    *(uint8_t*)((uintptr_t)this + 0x20f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bEnableStencilTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x20f + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bEnableStencilTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20f + 0);
    *(uint8_t*)((uintptr_t)this + 0x20f + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::Material::get_MaxDisplacement() {
    return *(float*)((uintptr_t)this + 0x234);
}
void* _Script_Engine::Material::get_StencilCompare() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_Engine::Material::get_RefractionMode() {
    return (void*)((uintptr_t)this + 0x212);
}
bool _Script_Engine::Material::get_bIsBlendable() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bIsBlendable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_CachedExpressionData() {
    return (void*)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Script_Engine::Material::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Material");
    return result;
}
