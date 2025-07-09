#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SceneComponent.hpp"
#include "SkyAtmosphereComponent.hpp"
float& _Script_Engine::SkyAtmosphereComponent::get_TraceSampleCountScale() {
    return *(float*)((uintptr_t)this + 0x20c);
}
void* _Script_Engine::SkyAtmosphereComponent::get_TransformMode() {
    return (void*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::SkyAtmosphereComponent::get_BottomRadius() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
void* _Script_Engine::SkyAtmosphereComponent::get_GroundAlbedo() {
    return (void*)((uintptr_t)this + 0x200);
}
float& _Script_Engine::SkyAtmosphereComponent::get_AtmosphereHeight() {
    return *(float*)((uintptr_t)this + 0x204);
}
float& _Script_Engine::SkyAtmosphereComponent::get_MultiScatteringFactor() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::SkyAtmosphereComponent::get_HeightFogContribution() {
    return *(float*)((uintptr_t)this + 0x28c);
}
float& _Script_Engine::SkyAtmosphereComponent::get_RayleighScatteringScale() {
    return *(float*)((uintptr_t)this + 0x210);
}
void* _Script_Engine::SkyAtmosphereComponent::get_RayleighScattering() {
    return (void*)((uintptr_t)this + 0x214);
}
void* _Script_Engine::SkyAtmosphereComponent::get_OtherTentDistribution() {
    return (void*)((uintptr_t)this + 0x26c);
}
float& _Script_Engine::SkyAtmosphereComponent::get_RayleighExponentialDistribution() {
    return *(float*)((uintptr_t)this + 0x224);
}
void* _Script_Engine::SkyAtmosphereComponent::get_MieScattering() {
    return (void*)((uintptr_t)this + 0x22c);
}
float& _Script_Engine::SkyAtmosphereComponent::get_MieScatteringScale() {
    return *(float*)((uintptr_t)this + 0x228);
}
float& _Script_Engine::SkyAtmosphereComponent::get_MieAbsorptionScale() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void* _Script_Engine::SkyAtmosphereComponent::get_MieAbsorption() {
    return (void*)((uintptr_t)this + 0x240);
}
float& _Script_Engine::SkyAtmosphereComponent::get_MieAnisotropy() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Script_Engine::SkyAtmosphereComponent::get_MieExponentialDistribution() {
    return *(float*)((uintptr_t)this + 0x254);
}
float& _Script_Engine::SkyAtmosphereComponent::get_OtherAbsorptionScale() {
    return *(float*)((uintptr_t)this + 0x258);
}
void* _Script_Engine::SkyAtmosphereComponent::get_OtherAbsorption() {
    return (void*)((uintptr_t)this + 0x25c);
}
void* _Script_Engine::SkyAtmosphereComponent::get_SkyLuminanceFactor() {
    return (void*)((uintptr_t)this + 0x278);
}
float& _Script_Engine::SkyAtmosphereComponent::get_AerialPespectiveViewDistanceScale() {
    return *(float*)((uintptr_t)this + 0x288);
}
float& _Script_Engine::SkyAtmosphereComponent::get_TransmittanceMinLightElevationAngle() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Script_Engine::SkyAtmosphereComponent::get_AerialPerspectiveStartDepth() {
    return *(float*)((uintptr_t)this + 0x294);
}
void* _Script_Engine::SkyAtmosphereComponent::get_bStaticLightingBuiltGUID() {
    return (void*)((uintptr_t)this + 0x2bc);
}
_Script_CoreUObject::Class* _Script_Engine::SkyAtmosphereComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkyAtmosphereComponent");
    return result;
}
void _Script_Engine::SkyAtmosphereComponent::SetSkyLuminanceFactor(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetRayleighScatteringScale(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetRayleighScattering(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetRayleighExponentialDistribution(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetOtherAbsorptionScale(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetOtherAbsorption(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetMieScatteringScale(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetMieScattering(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetMieExponentialDistribution(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetMieAnisotropy(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetMieAbsorption(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetMieAbsorptionScale(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetHeightFogContribution(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::SetAerialPespectiveViewDistanceScale(float NewValue) {
    return;
}
void _Script_Engine::SkyAtmosphereComponent::OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, _Script_CoreUObject::Vector& LightDirection) {
    return;
}
