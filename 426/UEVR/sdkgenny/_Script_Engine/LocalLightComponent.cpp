#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightComponent.hpp"
#include "LocalLightComponent.hpp"
float _Script_Engine::LocalLightComponent::GetUnitsConversionFactor(void* SrcUnits, void* TargetUnits, float CosHalfConeAngle) {
    return;
}
void* _Script_Engine::LocalLightComponent::get_IntensityUnits() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Script_Engine::LocalLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LocalLightComponent");
    return result;
}
float& _Script_Engine::LocalLightComponent::get_Radius() {
    return *(float*)((uintptr_t)this + 0x32c);
}
float& _Script_Engine::LocalLightComponent::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x330);
}
void* _Script_Engine::LocalLightComponent::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x334);
}
void _Script_Engine::LocalLightComponent::SetIntensityUnits(void* NewIntensityUnits) {
    return;
}
void _Script_Engine::LocalLightComponent::SetAttenuationRadius(float NewRadius) {
    return;
}
