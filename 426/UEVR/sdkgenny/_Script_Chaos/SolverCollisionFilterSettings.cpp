#include "..\FUObjectArray.hpp"
#include "SolverCollisionFilterSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_Chaos::SolverCollisionFilterSettings::get_FilterEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_Chaos::SolverCollisionFilterSettings::get_MinMass() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_Chaos::SolverCollisionFilterSettings::set_FilterEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Chaos::SolverCollisionFilterSettings::get_MinImpulse() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Chaos::SolverCollisionFilterSettings::get_MinSpeed() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Chaos::SolverCollisionFilterSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Chaos.SolverCollisionFilterSettings");
    return result;
}
