#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticParameterBase.hpp"
void* _Script_Engine::StaticParameterBase::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::StaticParameterBase::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::StaticParameterBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticParameterBase");
    return result;
}
bool _Script_Engine::StaticParameterBase::get_bOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::StaticParameterBase::set_bOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
