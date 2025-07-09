#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "CameraShakeSourceComponent.hpp"
#include "SceneComponent.hpp"
void _Script_Engine::CameraShakeSourceComponent::StopAllCameraShakesOfType(void* InCameraShake, bool bImmediately) {
    return;
}
float& _Script_Engine::CameraShakeSourceComponent::get_InnerAttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
void* _Script_Engine::CameraShakeSourceComponent::get_Attenuation() {
    return (void*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::CameraShakeSourceComponent::get_OuterAttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x200);
}
void* _Script_Engine::CameraShakeSourceComponent::get_CameraShake() {
    return (void*)((uintptr_t)this + 0x208);
}
bool _Script_Engine::CameraShakeSourceComponent::get_bAutoStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Script_Engine::CameraShakeSourceComponent::set_bAutoStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::CameraShakeSourceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraShakeSourceComponent");
    return result;
}
void _Script_Engine::CameraShakeSourceComponent::StopAllCameraShakes(bool bImmediately) {
    return;
}
void _Script_Engine::CameraShakeSourceComponent::StartCameraShake(void* InCameraShake, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot) {
    return;
}
float _Script_Engine::CameraShakeSourceComponent::GetAttenuationFactor(_Script_CoreUObject::Vector& Location) {
    return;
}
void _Script_Engine::CameraShakeSourceComponent::Start() {
    return;
}
