#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_MotoSynth {
struct MotoSynthPreset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MotoSynth {
struct MotoSynthRuntimeSettings;
}
namespace _Script_MotoSynth {
#pragma pack(push, 1)
struct SynthComponentMoto : public _Script_AudioMixer::SynthComponent {
    private: char pad_6c0[0xc0]; public:
    _Script_MotoSynth::MotoSynthPreset*& get_MotoSynthPreset();
    float& get_RPM();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_MotoSynth::MotoSynthRuntimeSettings& InSettings);
    void SetRPM(float InRPM, float InTimeSec);
    bool IsEnabled();
    void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);
}; // Size: 0x780
#pragma pack(pop)
}
