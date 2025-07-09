#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IndexedCurve.hpp"
#include "IntegralCurve.hpp"
_Script_CoreUObject::Class* _Script_Engine::IntegralCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.IntegralCurve");
    return result;
}
void* _Script_Engine::IntegralCurve::get_Keys() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::IntegralCurve::get_DefaultValue() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
void _Script_Engine::IntegralCurve::set_bUseDefaultValueBeforeFirstKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::IntegralCurve::get_bUseDefaultValueBeforeFirstKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
