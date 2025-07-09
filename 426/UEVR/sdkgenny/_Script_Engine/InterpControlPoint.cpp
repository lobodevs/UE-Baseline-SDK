#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpControlPoint.hpp"
void* _Script_Engine::InterpControlPoint::get_PositionControlPoint() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::InterpControlPoint::get_bPositionIsRelative() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Engine::InterpControlPoint::set_bPositionIsRelative(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpControlPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InterpControlPoint");
    return result;
}
