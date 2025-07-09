#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "BoundsCopyComponent.hpp"
void* _Script_Engine::BoundsCopyComponent::get_PostTransform() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::BoundsCopyComponent::get_BoundsSourceActor() {
    return (void*)((uintptr_t)this + 0xb0);
}
void _Script_Engine::BoundsCopyComponent::set_bKeepOwnBoundsScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BoundsCopyComponent::get_bKeepOwnBoundsScale() {
    return (*(uint8_t*)((uintptr_t)this + 0xd9 + 0)) & 1 != 0;
}
bool _Script_Engine::BoundsCopyComponent::get_bUseCollidingComponentsForSourceBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
bool _Script_Engine::BoundsCopyComponent::get_bUseCollidingComponentsForOwnBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xda + 0)) & 1 != 0;
}
void _Script_Engine::BoundsCopyComponent::set_bUseCollidingComponentsForSourceBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::BoundsCopyComponent::set_bUseCollidingComponentsForOwnBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xda + 0);
    *(uint8_t*)((uintptr_t)this + 0xda + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BoundsCopyComponent::get_bCopyXBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_Engine::BoundsCopyComponent::set_bCopyXBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BoundsCopyComponent::get_bCopyYBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x111 + 0)) & 1 != 0;
}
void _Script_Engine::BoundsCopyComponent::set_bCopyYBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x111 + 0);
    *(uint8_t*)((uintptr_t)this + 0x111 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BoundsCopyComponent::get_bCopyZBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x112 + 0)) & 1 != 0;
}
void _Script_Engine::BoundsCopyComponent::set_bCopyZBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x112 + 0);
    *(uint8_t*)((uintptr_t)this + 0x112 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::BoundsCopyComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BoundsCopyComponent");
    return result;
}
