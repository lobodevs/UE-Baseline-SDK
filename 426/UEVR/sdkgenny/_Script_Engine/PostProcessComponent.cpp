#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PostProcessComponent.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::PostProcessComponent::get_Settings() {
    return (void*)((uintptr_t)this + 0x200);
}
void _Script_Engine::PostProcessComponent::AddOrUpdateBlendable(void* InBlendableObject, float InWeight) {
    return;
}
float& _Script_Engine::PostProcessComponent::get_Priority() {
    return *(float*)((uintptr_t)this + 0x750);
}
float& _Script_Engine::PostProcessComponent::get_BlendRadius() {
    return *(float*)((uintptr_t)this + 0x754);
}
float& _Script_Engine::PostProcessComponent::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0x758);
}
bool _Script_Engine::PostProcessComponent::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x75c + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessComponent::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75c + 0);
    *(uint8_t*)((uintptr_t)this + 0x75c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessComponent::get_bUnbound() {
    return (*(uint8_t*)((uintptr_t)this + 0x75c + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessComponent::set_bUnbound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75c + 0);
    *(uint8_t*)((uintptr_t)this + 0x75c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PostProcessComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PostProcessComponent");
    return result;
}
