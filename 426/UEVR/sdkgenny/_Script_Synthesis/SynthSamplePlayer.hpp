#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SynthSamplePlayer : public _Script_AudioMixer::SynthComponent {
    private: char pad_6c0[0x130]; public:
    _Script_Engine::SoundWave*& get_SoundWave();
    void* get_OnSampleLoaded();
    void* get_OnSamplePlaybackProgress();
    static _Script_CoreUObject::Class* static_class();
    void SetSoundWave(_Script_Engine::SoundWave* InSoundWave);
    void SetScrubTimeWidth(float InScrubTimeWidthSec);
    void SetScrubMode(bool bScrubMode);
    void SetPitch(float InPitch, float TimeSec);
    void SeekToTime(float TimeSec, void* SeekType, bool bWrap);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlaybackProgressTime();
    float GetCurrentPlaybackProgressPercent();
}; // Size: 0x7f0
#pragma pack(pop)
}
