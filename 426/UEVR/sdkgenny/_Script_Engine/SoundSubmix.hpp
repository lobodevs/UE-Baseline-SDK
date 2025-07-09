#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundSubmixWithParentBase.hpp"
namespace _Script_AudioExtensions {
struct SoundfieldEncodingSettingsBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundSubmix : public SoundSubmixWithParentBase {
    private: char pad_40[0x50]; public:
    bool get_bMuteWhenBackgrounded();
    void set_bMuteWhenBackgrounded(bool value);
    void* get_SubmixEffectChain();
    _Script_AudioExtensions::SoundfieldEncodingSettingsBase*& get_AmbisonicsPluginSettings();
    int32_t& get_EnvelopeFollowerAttackTime();
    int32_t& get_EnvelopeFollowerReleaseTime();
    void* get_GainMode();
    float& get_OutputVolume();
    float& get_WetLevel();
    float& get_DryLevel();
    void* get_OnSubmixRecordedFileDone();
    static _Script_CoreUObject::Class* static_class();
    void StopSpectralAnalysis(_Script_CoreUObject::Object* WorldContextObject);
    void StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite);
    void StopEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject);
    void StartSpectralAnalysis(_Script_CoreUObject::Object* WorldContextObject, void* FFTSize, void* InterpolationMethod, void* WindowType, float HopSize, void* SpectrumType);
    void StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration);
    void StartEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject);
    void SetSubmixOutputVolume(_Script_CoreUObject::Object* WorldContextObject, float InOutputVolume);
    void RemoveSpectralAnalysisDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& OnSubmixSpectralAnalysisBP);
    void AddSpectralAnalysisDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& InBandSettings, void*& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime);
    void AddEnvelopeFollowerDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& OnSubmixEnvelopeBP);
}; // Size: 0x90
#pragma pack(pop)
}
