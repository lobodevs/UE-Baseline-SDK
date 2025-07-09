#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundClassProperties.hpp"
#include "SoundSubmix.hpp"
float& _Script_Engine::SoundClassProperties::get_Volume() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundClassProperties::get_VoiceCenterChannelVolume() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::SoundClassProperties::get_Pitch() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SoundClassProperties::get_StereoBleed() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::SoundClassProperties::get_LowPassFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::SoundClassProperties::get_AttenuationDistanceScale() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::SoundClassProperties::get_RadioFilterVolume() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::SoundClassProperties::get_LFEBleed() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::SoundClassProperties::get_RadioFilterVolumeThreshold() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::SoundClassProperties::get_bApplyEffects() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
bool _Script_Engine::SoundClassProperties::get_bAlwaysPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 2 != 0;
}
void _Script_Engine::SoundClassProperties::set_bApplyEffects(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SoundClassProperties::set_bAlwaysPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SoundClassProperties::get_bIsUISound() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 4 != 0;
}
void _Script_Engine::SoundClassProperties::set_bIsUISound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SoundClassProperties::get_bIsMusic() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 8 != 0;
}
void _Script_Engine::SoundClassProperties::set_bIsMusic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SoundClassProperties::get_bCenterChannelOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 16 != 0;
}
void _Script_Engine::SoundClassProperties::set_bCenterChannelOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SoundClassProperties::get_bApplyAmbientVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 32 != 0;
}
void _Script_Engine::SoundClassProperties::set_bApplyAmbientVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_Engine::SoundSubmix*& _Script_Engine::SoundClassProperties::get_DefaultSubmix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x78);
}
bool _Script_Engine::SoundClassProperties::get_bReverb() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 64 != 0;
}
void _Script_Engine::SoundClassProperties::set_bReverb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::SoundClassProperties::get_Default2DReverbSendAmount() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::SoundClassProperties::get_ModulationSettings() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::SoundClassProperties::get_OutputTarget() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::SoundClassProperties::get_LoadingBehavior() {
    return (void*)((uintptr_t)this + 0x71);
}
_Script_CoreUObject::Class* _Script_Engine::SoundClassProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundClassProperties");
    return result;
}
