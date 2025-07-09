#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticComponentMaskParameter.hpp"
#include "StaticParameterBase.hpp"
bool _Script_Engine::StaticComponentMaskParameter::get_A() {
    return (*(uint8_t*)((uintptr_t)this + 0x27 + 0)) & 1 != 0;
}
bool _Script_Engine::StaticComponentMaskParameter::get_R() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_Engine::StaticComponentMaskParameter::set_B(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26 + 0);
    *(uint8_t*)((uintptr_t)this + 0x26 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::StaticComponentMaskParameter::set_G(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25 + 0);
    *(uint8_t*)((uintptr_t)this + 0x25 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::StaticComponentMaskParameter::set_R(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticComponentMaskParameter::get_G() {
    return (*(uint8_t*)((uintptr_t)this + 0x25 + 0)) & 1 != 0;
}
bool _Script_Engine::StaticComponentMaskParameter::get_B() {
    return (*(uint8_t*)((uintptr_t)this + 0x26 + 0)) & 1 != 0;
}
void _Script_Engine::StaticComponentMaskParameter::set_A(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27 + 0);
    *(uint8_t*)((uintptr_t)this + 0x27 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::StaticComponentMaskParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticComponentMaskParameter");
    return result;
}
