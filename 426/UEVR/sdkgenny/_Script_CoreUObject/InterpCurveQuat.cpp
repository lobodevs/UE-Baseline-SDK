#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurveQuat.hpp"
void* _Script_CoreUObject::InterpCurveQuat::get_Points() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::InterpCurveQuat::get_LoopKeyOffset() {
    return *(float*)((uintptr_t)this + 0x14);
}
bool _Script_CoreUObject::InterpCurveQuat::get_bIsLooped() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_CoreUObject::InterpCurveQuat::set_bIsLooped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurveQuat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurveQuat");
    return result;
}
