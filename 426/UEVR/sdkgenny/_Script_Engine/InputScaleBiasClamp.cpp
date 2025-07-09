#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputScaleBiasClamp.hpp"
bool _Script_Engine::InputScaleBiasClamp::get_bClampResult() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_Engine::InputScaleBiasClamp::get_bMapRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::InputScaleBiasClamp::set_bMapRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InputScaleBiasClamp::get_bInterpResult() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_Engine::InputScaleBiasClamp::set_bClampResult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::InputScaleBiasClamp::set_bInterpResult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::InputScaleBiasClamp::get_InRange() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::InputScaleBiasClamp::get_Scale() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::InputScaleBiasClamp::get_OutRange() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::InputScaleBiasClamp::get_Bias() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::InputScaleBiasClamp::get_ClampMin() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::InputScaleBiasClamp::get_ClampMax() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::InputScaleBiasClamp::get_InterpSpeedIncreasing() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::InputScaleBiasClamp::get_InterpSpeedDecreasing() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InputScaleBiasClamp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputScaleBiasClamp");
    return result;
}
