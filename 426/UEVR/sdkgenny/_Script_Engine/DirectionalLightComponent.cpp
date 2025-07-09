#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "DirectionalLightComponent.hpp"
#include "LightComponent.hpp"
void _Script_Engine::DirectionalLightComponent::set_bCastCloudShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Engine::DirectionalLightComponent::get_ShadowCascadeBiasDistribution() {
    return *(float*)((uintptr_t)this + 0x328);
}
bool _Script_Engine::DirectionalLightComponent::get_bEnableLightShaftOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x32c + 0)) & 1 != 0;
}
void _Script_Engine::DirectionalLightComponent::SetEnableLightShaftOcclusion(bool bNewValue) {
    return;
}
float& _Script_Engine::DirectionalLightComponent::get_DynamicShadowDistanceMovableLight() {
    return *(float*)((uintptr_t)this + 0x348);
}
float& _Script_Engine::DirectionalLightComponent::get_CascadeDistributionExponent() {
    return *(float*)((uintptr_t)this + 0x354);
}
void _Script_Engine::DirectionalLightComponent::set_bEnableLightShaftOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32c + 0);
    *(uint8_t*)((uintptr_t)this + 0x32c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::DirectionalLightComponent::get_WholeSceneDynamicShadowRadius() {
    return *(float*)((uintptr_t)this + 0x344);
}
void _Script_Engine::DirectionalLightComponent::SetOcclusionMaskDarkness(float NewValue) {
    return;
}
float& _Script_Engine::DirectionalLightComponent::get_OcclusionMaskDarkness() {
    return *(float*)((uintptr_t)this + 0x330);
}
void _Script_Engine::DirectionalLightComponent::SetLightShaftOverrideDirection(_Script_CoreUObject::Vector NewValue) {
    return;
}
void* _Script_Engine::DirectionalLightComponent::get_LightShaftOverrideDirection() {
    return (void*)((uintptr_t)this + 0x338);
}
float& _Script_Engine::DirectionalLightComponent::get_ShadowSourceAngleFactor() {
    return *(float*)((uintptr_t)this + 0x378);
}
float& _Script_Engine::DirectionalLightComponent::get_OcclusionDepthRange() {
    return *(float*)((uintptr_t)this + 0x334);
}
float& _Script_Engine::DirectionalLightComponent::get_DynamicShadowDistanceStationaryLight() {
    return *(float*)((uintptr_t)this + 0x34c);
}
void _Script_Engine::DirectionalLightComponent::SetDynamicShadowCascades(int32_t NewValue) {
    return;
}
int32_t& _Script_Engine::DirectionalLightComponent::get_DynamicShadowCascades() {
    return *(int32_t*)((uintptr_t)this + 0x350);
}
float& _Script_Engine::DirectionalLightComponent::get_CascadeTransitionFraction() {
    return *(float*)((uintptr_t)this + 0x358);
}
float& _Script_Engine::DirectionalLightComponent::get_ShadowDistanceFadeoutFraction() {
    return *(float*)((uintptr_t)this + 0x35c);
}
bool _Script_Engine::DirectionalLightComponent::get_bUseInsetShadowsForMovableObjects() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
float& _Script_Engine::DirectionalLightComponent::get_TraceDistance() {
    return *(float*)((uintptr_t)this + 0x37c);
}
void _Script_Engine::DirectionalLightComponent::set_bUseInsetShadowsForMovableObjects(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::DirectionalLightComponent::get_CloudShadowStrength() {
    return *(float*)((uintptr_t)this + 0x39c);
}
int32_t& _Script_Engine::DirectionalLightComponent::get_FarShadowCascadeCount() {
    return *(int32_t*)((uintptr_t)this + 0x364);
}
float& _Script_Engine::DirectionalLightComponent::get_FarShadowDistance() {
    return *(float*)((uintptr_t)this + 0x368);
}
float& _Script_Engine::DirectionalLightComponent::get_DistanceFieldShadowDistance() {
    return *(float*)((uintptr_t)this + 0x36c);
}
float& _Script_Engine::DirectionalLightComponent::get_LightSourceAngle() {
    return *(float*)((uintptr_t)this + 0x370);
}
void* _Script_Engine::DirectionalLightComponent::get_ModulatedShadowColor() {
    return (void*)((uintptr_t)this + 0x3dc);
}
float& _Script_Engine::DirectionalLightComponent::get_LightSourceSoftAngle() {
    return *(float*)((uintptr_t)this + 0x374);
}
bool _Script_Engine::DirectionalLightComponent::get_bUsedAsAtmosphereSunLight() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void _Script_Engine::DirectionalLightComponent::SetCascadeTransitionFraction(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::set_bUsedAsAtmosphereSunLight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::DirectionalLightComponent::get_AtmosphereSunLightIndex() {
    return *(int32_t*)((uintptr_t)this + 0x384);
}
void* _Script_Engine::DirectionalLightComponent::get_AtmosphereSunDiskColorScale() {
    return (void*)((uintptr_t)this + 0x388);
}
bool _Script_Engine::DirectionalLightComponent::get_bPerPixelAtmosphereTransmittance() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void _Script_Engine::DirectionalLightComponent::set_bPerPixelAtmosphereTransmittance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::DirectionalLightComponent::SetAtmosphereSunLight(bool bNewValue) {
    return;
}
bool _Script_Engine::DirectionalLightComponent::get_bCastShadowsOnClouds() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 2 != 0;
}
float& _Script_Engine::DirectionalLightComponent::get_CloudShadowOnAtmosphereStrength() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
void _Script_Engine::DirectionalLightComponent::set_bCastShadowsOnClouds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::DirectionalLightComponent::get_bCastShadowsOnAtmosphere() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 4 != 0;
}
float& _Script_Engine::DirectionalLightComponent::get_ShadowAmount() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
void _Script_Engine::DirectionalLightComponent::set_bCastShadowsOnAtmosphere(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::DirectionalLightComponent::get_bCastCloudShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 8 != 0;
}
float& _Script_Engine::DirectionalLightComponent::get_CloudShadowOnSurfaceStrength() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
float& _Script_Engine::DirectionalLightComponent::get_CloudShadowDepthBias() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
float& _Script_Engine::DirectionalLightComponent::get_CloudShadowExtent() {
    return *(float*)((uintptr_t)this + 0x3ac);
}
float& _Script_Engine::DirectionalLightComponent::get_CloudShadowMapResolutionScale() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
float& _Script_Engine::DirectionalLightComponent::get_CloudShadowRaySampleCountScale() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
void* _Script_Engine::DirectionalLightComponent::get_CloudScatteredLuminanceScale() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Script_Engine::DirectionalLightComponent::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void _Script_Engine::DirectionalLightComponent::SetDynamicShadowDistanceStationaryLight(float NewValue) {
    return;
}
bool _Script_Engine::DirectionalLightComponent::get_bCastModulatedShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Script_Engine::DirectionalLightComponent::set_bCastModulatedShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::DirectionalLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DirectionalLightComponent");
    return result;
}
void _Script_Engine::DirectionalLightComponent::SetShadowDistanceFadeoutFraction(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetShadowAmount(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetDynamicShadowDistanceMovableLight(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetCascadeDistributionExponent(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetAtmosphereSunLightIndex(int32_t NewValue) {
    return;
}
