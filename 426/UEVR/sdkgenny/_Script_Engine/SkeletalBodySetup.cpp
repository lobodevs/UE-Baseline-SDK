#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodySetup.hpp"
#include "SkeletalBodySetup.hpp"
void _Script_Engine::SkeletalBodySetup::set_bSkipScaleFromAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalBodySetup::get_bSkipScaleFromAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void* _Script_Engine::SkeletalBodySetup::get_PhysicalAnimationData() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalBodySetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalBodySetup");
    return result;
}
