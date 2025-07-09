#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RootMotionSourceGroup.hpp"
bool _Script_Engine::RootMotionSourceGroup::get_bIsAdditiveVelocityApplied() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 8 != 0;
}
bool _Script_Engine::RootMotionSourceGroup::get_bHasAdditiveSources() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::RootMotionSourceGroup::set_bHasOverrideSourcesWithIgnoreZAccumulate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RootMotionSourceGroup::get_bHasOverrideSourcesWithIgnoreZAccumulate() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 4 != 0;
}
void _Script_Engine::RootMotionSourceGroup::set_bHasOverrideSources(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RootMotionSourceGroup::set_bHasAdditiveSources(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RootMotionSourceGroup::get_bHasOverrideSources() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
void _Script_Engine::RootMotionSourceGroup::set_bIsAdditiveVelocityApplied(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::RootMotionSourceGroup::get_LastAccumulatedSettings() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_Engine::RootMotionSourceGroup::get_LastPreAdditiveVelocity() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSourceGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSourceGroup");
    return result;
}
