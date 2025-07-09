#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundClass.hpp"
#include "SoundClassAdjuster.hpp"
float& _Script_Engine::SoundClassAdjuster::get_LowPassFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_Engine::SoundClass*& _Script_Engine::SoundClassAdjuster::get_SoundClassObject() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundClassAdjuster::get_VolumeAdjuster() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::SoundClassAdjuster::get_PitchAdjuster() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::SoundClassAdjuster::get_bApplyToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_Engine::SoundClassAdjuster::set_bApplyToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundClassAdjuster::get_VoiceCenterChannelVolumeAdjuster() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::SoundClassAdjuster::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundClassAdjuster");
    return result;
}
