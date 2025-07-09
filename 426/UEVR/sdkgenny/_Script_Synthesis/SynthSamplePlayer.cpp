#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundWave.hpp"
#include "SynthSamplePlayer.hpp"
_Script_Engine::SoundWave*& _Script_Synthesis::SynthSamplePlayer::get_SoundWave() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x6c0);
}
void* _Script_Synthesis::SynthSamplePlayer::get_OnSampleLoaded() {
    return (void*)((uintptr_t)this + 0x6c8);
}
void* _Script_Synthesis::SynthSamplePlayer::get_OnSamplePlaybackProgress() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void _Script_Synthesis::SynthSamplePlayer::SetPitch(float InPitch, float TimeSec) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SynthSamplePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SynthSamplePlayer");
    return result;
}
void _Script_Synthesis::SynthSamplePlayer::SetSoundWave(_Script_Engine::SoundWave* InSoundWave) {
    return;
}
void _Script_Synthesis::SynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec) {
    return;
}
void _Script_Synthesis::SynthSamplePlayer::SetScrubMode(bool bScrubMode) {
    return;
}
void _Script_Synthesis::SynthSamplePlayer::SeekToTime(float TimeSec, void* SeekType, bool bWrap) {
    return;
}
bool _Script_Synthesis::SynthSamplePlayer::IsLoaded() {
    return;
}
float _Script_Synthesis::SynthSamplePlayer::GetSampleDuration() {
    return;
}
float _Script_Synthesis::SynthSamplePlayer::GetCurrentPlaybackProgressTime() {
    return;
}
float _Script_Synthesis::SynthSamplePlayer::GetCurrentPlaybackProgressPercent() {
    return;
}
