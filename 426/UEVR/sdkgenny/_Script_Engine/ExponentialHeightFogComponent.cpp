#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "ExponentialHeightFogComponent.hpp"
#include "SceneComponent.hpp"
#include "TextureCube.hpp"
float& _Script_Engine::ExponentialHeightFogComponent::get_FogDensity() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogDensity(float Value) {
    return;
}
void* _Script_Engine::ExponentialHeightFogComponent::get_SecondFogData() {
    return (void*)((uintptr_t)this + 0x200);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogMaxOpacity() {
    return *(float*)((uintptr_t)this + 0x25c);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogHeightFalloff() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FullyDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x23c);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_InscatteringColorCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x228);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_FogInscatteringColor() {
    return (void*)((uintptr_t)this + 0x20c);
}
_Script_Engine::TextureCube*& _Script_Engine::ExponentialHeightFogComponent::get_InscatteringColorCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x220);
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance(float Value) {
    return;
}
void* _Script_Engine::ExponentialHeightFogComponent::get_InscatteringTextureTint() {
    return (void*)((uintptr_t)this + 0x22c);
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringColorCubemapAngle(float Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_NonDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x240);
}
bool _Script_Engine::ExponentialHeightFogComponent::get_bOverrideLightColorsWithFogInscatteringColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x290 + 0)) & 1 != 0;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringExponent() {
    return *(float*)((uintptr_t)this + 0x244);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringStartDistance() {
    return *(float*)((uintptr_t)this + 0x248);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringColor() {
    return (void*)((uintptr_t)this + 0x24c);
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(float NewValue) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_StartDistance() {
    return *(float*)((uintptr_t)this + 0x260);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogCutoffDistance() {
    return *(float*)((uintptr_t)this + 0x264);
}
bool _Script_Engine::ExponentialHeightFogComponent::get_bEnableVolumetricFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
void _Script_Engine::ExponentialHeightFogComponent::set_bEnableVolumetricFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringTextureTint(_Script_CoreUObject::LinearColor Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogScatteringDistribution() {
    return *(float*)((uintptr_t)this + 0x26c);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogAlbedo() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogEmissive() {
    return (void*)((uintptr_t)this + 0x274);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogExtinctionScale() {
    return *(float*)((uintptr_t)this + 0x284);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogDistance() {
    return *(float*)((uintptr_t)this + 0x288);
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringColorCubemap(_Script_Engine::TextureCube* Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogStaticLightingScatteringIntensity() {
    return *(float*)((uintptr_t)this + 0x28c);
}
void _Script_Engine::ExponentialHeightFogComponent::set_bOverrideLightColorsWithFogInscatteringColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x290 + 0);
    *(uint8_t*)((uintptr_t)this + 0x290 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ExponentialHeightFogComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ExponentialHeightFogComponent");
    return result;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetStartDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogEmissive(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogDistance(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogAlbedo(_Script_CoreUObject::Color NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFog(bool bNewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetNonDirectionalInscatteringColorDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFullyDirectionalInscatteringColorDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogMaxOpacity(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogInscatteringColor(_Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogHeightFalloff(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogCutoffDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringExponent(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringColor(_Script_CoreUObject::LinearColor Value) {
    return;
}
