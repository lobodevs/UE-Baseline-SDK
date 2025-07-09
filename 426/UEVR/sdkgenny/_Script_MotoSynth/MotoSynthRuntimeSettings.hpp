#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MotoSynth {
struct MotoSynthSource;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MotoSynth {
#pragma pack(push, 1)
struct MotoSynthRuntimeSettings {
    private: char pad_0[0x68]; public:
    bool get_bSynthToneEnabled();
    void set_bSynthToneEnabled(bool value);
    float& get_SynthToneVolume();
    float& get_SynthToneFilterFrequency();
    int32_t& get_SynthOctaveShift();
    bool get_bGranularEngineEnabled();
    void set_bGranularEngineEnabled(bool value);
    float& get_GranularEngineVolume();
    float& get_GranularEnginePitchScale();
    int32_t& get_NumSamplesToCrossfadeBetweenGrains();
    int32_t& get_NumGrainTableEntriesPerGrain();
    int32_t& get_GrainTableRandomOffsetForConstantRPMs();
    int32_t& get_GrainCrossfadeSamplesForConstantRPMs();
    _Script_MotoSynth::MotoSynthSource*& get_AccelerationSource();
    _Script_MotoSynth::MotoSynthSource*& get_DecelerationSource();
    bool get_bStereoWidenerEnabled();
    void set_bStereoWidenerEnabled(bool value);
    float& get_StereoDelayMsec();
    float& get_StereoFeedback();
    float& get_StereoWidenerWetlevel();
    float& get_StereoWidenerDryLevel();
    float& get_StereoWidenerDelayRatio();
    bool get_bStereoWidenerFilterEnabled();
    void set_bStereoWidenerFilterEnabled(bool value);
    float& get_StereoWidenerFilterFrequency();
    float& get_StereoWidenerFilterQ();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
