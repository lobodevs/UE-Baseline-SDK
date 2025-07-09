#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollisionImpactData.hpp"
void* _Script_Engine::CollisionImpactData::get_TotalFrictionImpulse() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::CollisionImpactData::get_ContactInfos() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CollisionImpactData::get_TotalNormalImpulse() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::CollisionImpactData::get_bIsVelocityDeltaUnderThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::CollisionImpactData::set_bIsVelocityDeltaUnderThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::CollisionImpactData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollisionImpactData");
    return result;
}
