#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ReverbEffect.hpp"
float& _Script_Engine::ReverbEffect::get_GainHF() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ReverbEffect::get_bBypassLateReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::ReverbEffect::set_bBypassEarlyReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ReverbEffect::get_bBypassEarlyReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::ReverbEffect::set_bBypassLateReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ReverbEffect::get_ReflectionsGain() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::ReverbEffect::get_ReflectionsDelay() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::ReverbEffect::get_LateDelay() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::ReverbEffect::get_DecayTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::ReverbEffect::get_Density() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::ReverbEffect::get_Diffusion() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::ReverbEffect::get_AirAbsorptionGainHF() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::ReverbEffect::get_DecayHFRatio() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::ReverbEffect::get_LateGain() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::ReverbEffect::get_Gain() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::ReverbEffect::get_RoomRolloffFactor() {
    return *(float*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_Engine::ReverbEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReverbEffect");
    return result;
}
