#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeOscillator.hpp"
float& _Script_Engine::SoundNodeOscillator::get_AmplitudeMax() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeOscillator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeOscillator");
    return result;
}
bool _Script_Engine::SoundNodeOscillator::get_bModulateVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::SoundNodeOscillator::set_bModulateVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundNodeOscillator::get_bModulatePitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
float& _Script_Engine::SoundNodeOscillator::get_AmplitudeMin() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void _Script_Engine::SoundNodeOscillator::set_bModulatePitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::SoundNodeOscillator::get_FrequencyMin() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::SoundNodeOscillator::get_FrequencyMax() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::SoundNodeOscillator::get_OffsetMin() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::SoundNodeOscillator::get_OffsetMax() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::SoundNodeOscillator::get_CenterMin() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::SoundNodeOscillator::get_CenterMax() {
    return *(float*)((uintptr_t)this + 0x68);
}
