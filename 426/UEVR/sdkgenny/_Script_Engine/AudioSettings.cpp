#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "AudioSettings.hpp"
void* _Script_Engine::AudioSettings::get_DefaultSoundClassName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AudioSettings::get_VoiPSoundClass() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::AudioSettings::get_DefaultMediaSoundClassName() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::AudioSettings::get_DefaultSoundConcurrencyName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::AudioSettings::get_DefaultBaseSoundMix() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::AudioSettings::get_MasterSubmix() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::AudioSettings::get_ReverbSubmix() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::AudioSettings::get_EQSubmix() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::AudioSettings::get_VoiPSampleRate() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::AudioSettings::get_DefaultReverbSendLevel() {
    return *(float*)((uintptr_t)this + 0xfc);
}
int32_t& _Script_Engine::AudioSettings::get_MaximumConcurrentStreams() {
    return *(int32_t*)((uintptr_t)this + 0x100);
}
float& _Script_Engine::AudioSettings::get_GlobalMinPitchScale() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_Engine::AudioSettings::get_GlobalMaxPitchScale() {
    return *(float*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::AudioSettings::get_QualityLevels() {
    return (void*)((uintptr_t)this + 0x110);
}
bool _Script_Engine::AudioSettings::get_bAllowPlayWhenSilent() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
bool _Script_Engine::AudioSettings::get_bDisableMasterEQ() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 2 != 0;
}
void _Script_Engine::AudioSettings::set_bAllowPlayWhenSilent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AudioSettings::set_bDisableMasterEQ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::AudioSettings::get_bAllowCenterChannel3DPanning() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 4 != 0;
}
void _Script_Engine::AudioSettings::set_bAllowCenterChannel3DPanning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::AudioSettings::get_NumStoppingSources() {
    return (void*)((uintptr_t)this + 0x124);
}
void* _Script_Engine::AudioSettings::get_PanningMethod() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::AudioSettings::get_MonoChannelUpmixMethod() {
    return (void*)((uintptr_t)this + 0x129);
}
void* _Script_Engine::AudioSettings::get_DialogueFilenameFormat() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_Engine::AudioSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AudioSettings");
    return result;
}
