#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_Engine\SoundAttenuation.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneAudioSection.hpp"
_Script_Engine::SoundBase*& _Script_MovieSceneTracks::MovieSceneAudioSection::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xe8);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_StartFrameOffset() {
    return (void*)((uintptr_t)this + 0xf0);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0xf4);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AudioDilationFactor() {
    return *(float*)((uintptr_t)this + 0xfc);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AudioStartTime() {
    return *(float*)((uintptr_t)this + 0xf8);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AudioVolume() {
    return *(float*)((uintptr_t)this + 0x100);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_SoundVolume() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_PitchMultiplier() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_AttachActorData() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Script_MovieSceneTracks::MovieSceneAudioSection::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneAudioSection::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f8 + 0)) & 1 != 0;
}
bool _Script_MovieSceneTracks::MovieSceneAudioSection::get_bSuppressSubtitles() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f9 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneAudioSection::set_bSuppressSubtitles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneAudioSection::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fa + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneAudioSection::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SoundAttenuation*& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x300);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_OnQueueSubtitles() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_OnAudioFinished() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_OnAudioPlaybackPercent() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneAudioSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneAudioSection");
    return result;
}
void _Script_MovieSceneTracks::MovieSceneAudioSection::SetStartOffset(_Script_CoreUObject::FrameNumber InStartOffset) {
    return;
}
void _Script_MovieSceneTracks::MovieSceneAudioSection::SetSound(_Script_Engine::SoundBase* InSound) {
    return;
}
_Script_CoreUObject::FrameNumber _Script_MovieSceneTracks::MovieSceneAudioSection::GetStartOffset() {
    return;
}
_Script_Engine::SoundBase* _Script_MovieSceneTracks::MovieSceneAudioSection::GetSound() {
    return;
}
