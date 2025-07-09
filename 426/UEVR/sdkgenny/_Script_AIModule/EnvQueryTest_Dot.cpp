#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Dot.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_Dot::get_TestMode() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_AIModule::EnvQueryTest_Dot::get_LineA() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_AIModule::EnvQueryTest_Dot::get_LineB() {
    return (void*)((uintptr_t)this + 0x218);
}
bool _Script_AIModule::EnvQueryTest_Dot::get_bAbsoluteValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x239 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryTest_Dot::set_bAbsoluteValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x239 + 0);
    *(uint8_t*)((uintptr_t)this + 0x239 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Dot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Dot");
    return result;
}
