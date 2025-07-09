#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalLightComponent.hpp"
#include "PointLightComponent.hpp"
float& _Script_Engine::PointLightComponent::get_SoftSourceRadius() {
    return *(float*)((uintptr_t)this + 0x34c);
}
void _Script_Engine::PointLightComponent::SetLightFalloffExponent(float NewLightFalloffExponent) {
    return;
}
bool _Script_Engine::PointLightComponent::get_bUseInverseSquaredFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x340 + 0)) & 1 != 0;
}
void _Script_Engine::PointLightComponent::set_bUseInverseSquaredFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x340 + 0);
    *(uint8_t*)((uintptr_t)this + 0x340 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PointLightComponent::get_SourceLength() {
    return *(float*)((uintptr_t)this + 0x350);
}
float& _Script_Engine::PointLightComponent::get_LightFalloffExponent() {
    return *(float*)((uintptr_t)this + 0x344);
}
float& _Script_Engine::PointLightComponent::get_SourceRadius() {
    return *(float*)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Script_Engine::PointLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PointLightComponent");
    return result;
}
void _Script_Engine::PointLightComponent::SetSourceRadius(float bNewValue) {
    return;
}
void _Script_Engine::PointLightComponent::SetSourceLength(float NewValue) {
    return;
}
void _Script_Engine::PointLightComponent::SetSoftSourceRadius(float bNewValue) {
    return;
}
