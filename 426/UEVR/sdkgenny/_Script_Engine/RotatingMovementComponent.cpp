#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovementComponent.hpp"
#include "RotatingMovementComponent.hpp"
void* _Script_Engine::RotatingMovementComponent::get_RotationRate() {
    return (void*)((uintptr_t)this + 0xf0);
}
void _Script_Engine::RotatingMovementComponent::set_bRotationInLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RotatingMovementComponent::get_PivotTranslation() {
    return (void*)((uintptr_t)this + 0xfc);
}
bool _Script_Engine::RotatingMovementComponent::get_bRotationInLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::RotatingMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RotatingMovementComponent");
    return result;
}
