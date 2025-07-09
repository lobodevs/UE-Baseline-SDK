#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct GranularSynth : public _Script_AudioMixer::SynthComponent {
    private: char pad_6c0[0x3c0]; public:
    _Script_Engine::SoundWave*& get_GranulatedSoundWave();
    static _Script_CoreUObject::Class* static_class();
    void SetSustainGain(float SustainGain);
    void SetSoundWave(_Script_Engine::SoundWave* InSoundWave);
    void SetScrubMode(bool bScrubMode);
    void SetReleaseTimeMsec(float ReleaseTimeMsec);
    void SetPlayheadTime(float InPositionSec, float LerpTimeSec, void* SeekType);
    void SetPlaybackSpeed(float InPlayheadRate);
    void SetGrainVolume(float BaseVolume, _Script_CoreUObject::Vector2D VolumeRange);
    void SetGrainsPerSecond(float InGrainsPerSecond);
    void SetGrainProbability(float InGrainProbability);
    void SetGrainPitch(float BasePitch, _Script_CoreUObject::Vector2D PitchRange);
    void SetGrainPan(float BasePan, _Script_CoreUObject::Vector2D PanRange);
    void SetGrainEnvelopeType(void* EnvelopeType);
    void SetGrainDuration(float BaseDurationMsec, _Script_CoreUObject::Vector2D DurationRange);
    void SetDecayTime(float DecayTimeMsec);
    void SetAttackTime(float AttackTimeMsec);
    void NoteOn(float Note, int32_t Velocity, float Duration);
    void NoteOff(float Note, bool bKill);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlayheadTime();
}; // Size: 0xa80
#pragma pack(pop)
}
