#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "CameraActor.hpp"
#include "CameraComponent.hpp"
#include "SceneComponent.hpp"
float& _Script_Engine::CameraActor::get_FOVAngle() {
    return *(float*)((uintptr_t)this + 0x248);
}
void* _Script_Engine::CameraActor::get_AutoActivateForPlayer() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Script_Engine::CameraActor::get_PostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x24c);
}
_Script_Engine::CameraComponent*& _Script_Engine::CameraActor::get_CameraComponent() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Script_Engine::CameraActor::get_SceneComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
bool _Script_Engine::CameraActor::get_bConstrainAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void _Script_Engine::CameraActor::set_bConstrainAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::CameraActor::get_AspectRatio() {
    return *(float*)((uintptr_t)this + 0x244);
}
void* _Script_Engine::CameraActor::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Script_Engine::CameraActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraActor");
    return result;
}
int32_t _Script_Engine::CameraActor::GetAutoActivatePlayerIndex() {
    return;
}
