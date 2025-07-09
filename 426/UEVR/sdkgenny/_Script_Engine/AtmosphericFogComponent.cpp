#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "AtmosphericFogComponent.hpp"
#include "SceneComponent.hpp"
#include "Texture2D.hpp"
bool _Script_Engine::AtmosphericFogComponent::get_bAtmosphereAffectsSunIlluminance() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 2 != 0;
}
float& _Script_Engine::AtmosphericFogComponent::get_DistanceOffset() {
    return *(float*)((uintptr_t)this + 0x210);
}
void _Script_Engine::AtmosphericFogComponent::set_bAtmosphereAffectsSunIlluminance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::AtmosphericFogComponent::get_SunMultiplier() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::AtmosphericFogComponent::get_StartDistance() {
    return *(float*)((uintptr_t)this + 0x218);
}
float& _Script_Engine::AtmosphericFogComponent::get_FogMultiplier() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
bool _Script_Engine::AtmosphericFogComponent::get_bDisableGroundScattering() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 4 != 0;
}
float& _Script_Engine::AtmosphericFogComponent::get_DensityMultiplier() {
    return *(float*)((uintptr_t)this + 0x200);
}
float& _Script_Engine::AtmosphericFogComponent::get_DensityOffset() {
    return *(float*)((uintptr_t)this + 0x204);
}
float& _Script_Engine::AtmosphericFogComponent::get_DistanceScale() {
    return *(float*)((uintptr_t)this + 0x208);
}
_Script_Engine::Texture2D*& _Script_Engine::AtmosphericFogComponent::get_IrradianceTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x260);
}
float& _Script_Engine::AtmosphericFogComponent::get_AltitudeScale() {
    return *(float*)((uintptr_t)this + 0x20c);
}
float& _Script_Engine::AtmosphericFogComponent::get_GroundOffset() {
    return *(float*)((uintptr_t)this + 0x214);
}
float& _Script_Engine::AtmosphericFogComponent::get_SunDiscScale() {
    return *(float*)((uintptr_t)this + 0x21c);
}
float& _Script_Engine::AtmosphericFogComponent::get_DefaultBrightness() {
    return *(float*)((uintptr_t)this + 0x220);
}
void* _Script_Engine::AtmosphericFogComponent::get_DefaultLightColor() {
    return (void*)((uintptr_t)this + 0x224);
}
void _Script_Engine::AtmosphericFogComponent::SetDensityMultiplier(float NewDensityMultiplier) {
    return;
}
bool _Script_Engine::AtmosphericFogComponent::get_bDisableSunDisk() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Script_Engine::AtmosphericFogComponent::set_bDisableSunDisk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AtmosphericFogComponent::set_bDisableGroundScattering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::AtmosphericFogComponent::get_PrecomputeParams() {
    return (void*)((uintptr_t)this + 0x22c);
}
_Script_Engine::Texture2D*& _Script_Engine::AtmosphericFogComponent::get_TransmittanceTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Script_Engine::AtmosphericFogComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AtmosphericFogComponent");
    return result;
}
void _Script_Engine::AtmosphericFogComponent::StartPrecompute() {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetSunMultiplier(float NewSunMultiplier) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetStartDistance(float NewStartDistance) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetFogMultiplier(float NewFogMultiplier) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetDistanceScale(float NewDistanceScale) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetDistanceOffset(float NewDistanceOffset) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetDensityOffset(float NewDensityOffset) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetDefaultLightColor(_Script_CoreUObject::LinearColor NewLightColor) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetDefaultBrightness(float NewBrightness) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::SetAltitudeScale(float NewAltitudeScale) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::DisableSunDisk(bool NewSunDisk) {
    return;
}
void _Script_Engine::AtmosphericFogComponent::DisableGroundScattering(bool NewGroundScattering) {
    return;
}
