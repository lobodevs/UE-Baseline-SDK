#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_Synthesis {
struct MonoWaveTableSynthPreset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SynthComponentMonoWaveTable : public _Script_AudioMixer::SynthComponent {
    private: char pad_6c0[0x740]; public:
    void* get_OnTableAltered();
    void* get_OnNumTablesChanged();
    _Script_Synthesis::MonoWaveTableSynthPreset*& get_CurrentPreset();
    static _Script_CoreUObject::Class* static_class();
    void SetWaveTablePosition(float InPosition);
    void SetSustainPedalState(bool InSustainPedalState);
    void SetPosLfoType(void* InLfoType);
    void SetPosLfoFrequency(float InLfoFrequency);
    void SetPosLfoDepth(float InLfoDepth);
    void SetPositionEnvelopeSustainGain(float InSustainGain);
    void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
    void SetPositionEnvelopeInvert(bool bInInvert);
    void SetPositionEnvelopeDepth(float InDepth);
    void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
    void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
    void SetPositionEnvelopeBiasDepth(float InDepth);
    void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
    void SetLowPassFilterResonance(float InNewQ);
    void SetFrequencyWithMidiNote(float InMidiNote);
    void SetFrequencyPitchBend(float FrequencyOffsetCents);
    void SetFrequency(float FrequencyHz);
    void SetFilterEnvelopeSustainGain(float InSustainGain);
    void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
    void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
    void SetFilterEnvelopeInvert(bool bInInvert);
    void SetFilterEnvelopeDepth(float InDepth);
    void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
    void SetFilterEnvelopeBiasDepth(float InDepth);
    void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
    bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);
    bool SetCurveTangent(int32_t TableIndex, float InNewTangent);
    bool SetCurveInterpolationType(void* InterpolationType, int32_t TableIndex);
    void SetAmpEnvelopeSustainGain(float InSustainGain);
    void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
    void SetAmpEnvelopeInvert(bool bInInvert);
    void SetAmpEnvelopeDepth(float InDepth);
    void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
    void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
    void SetAmpEnvelopeBiasDepth(float InDepth);
    void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
    void RefreshWaveTable(int32_t Index);
    void RefreshAllWaveTables();
    void NoteOn(float InMidiNote, float InVelocity);
    void NoteOff(float InMidiNote);
    int32_t GetNumTableEntries();
    int32_t GetMaxTableIndex();
    void* GetKeyFrameValuesForTable(float TableIndex);
    float GetCurveTangent(int32_t TableIndex);
}; // Size: 0xe00
#pragma pack(pop)
}
