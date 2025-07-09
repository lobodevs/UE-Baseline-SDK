#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "PatchId.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct ModularSynthPreset;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct ModularSynthComponent : public _Script_AudioMixer::SynthComponent {
    private: char pad_6c0[0x6c0]; public:
    int32_t& get_VoiceCount();
    static _Script_CoreUObject::Class* static_class();
    void SetSynthPreset(_Script_Synthesis::ModularSynthPreset& SynthPreset);
    void SetSustainGain(float SustainGain);
    void SetStereoDelayWetlevel(float DelayWetlevel);
    void SetStereoDelayTime(float DelayTimeMsec);
    void SetStereoDelayRatio(float DelayRatio);
    void SetStereoDelayMode(void* StereoDelayMode);
    void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
    void SetStereoDelayFeedback(float DelayFeedback);
    void SetSpread(float Spread);
    void SetReleaseTime(float ReleaseTimeMsec);
    void SetPortamento(float Portamento);
    void SetPitchBend(float PitchBend);
    void SetPan(float Pan);
    void SetOscType(int32_t OscIndex, void* OscType);
    void SetOscSync(bool bIsSynced);
    void SetOscSemitones(int32_t OscIndex, float Semitones);
    void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);
    void SetOscOctave(int32_t OscIndex, float Octave);
    void SetOscGainMod(int32_t OscIndex, float OscGainMod);
    void SetOscGain(int32_t OscIndex, float OscGain);
    void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);
    void SetOscCents(int32_t OscIndex, float Cents);
    void SetModEnvSustainGain(float SustainGain);
    void SetModEnvReleaseTime(float Release);
    void SetModEnvPatch(void* InPatchType);
    void SetModEnvInvert(bool bInvert);
    void SetModEnvDepth(float Depth);
    void SetModEnvDecayTime(float DecayTimeMsec);
    void SetModEnvBiasPatch(void* InPatchType);
    void SetModEnvBiasInvert(bool bInvert);
    void SetModEnvAttackTime(float AttackTimeMsec);
    void SetLFOType(int32_t LFOIndex, void* LFOType);
    void SetLFOPatch(int32_t LFOIndex, void* LFOPatchType);
    void SetLFOMode(int32_t LFOIndex, void* LFOMode);
    void SetLFOGainMod(int32_t LFOIndex, float GainMod);
    void SetLFOGain(int32_t LFOIndex, float Gain);
    void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);
    void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);
    void SetGainDb(float GainDb);
    void SetFilterType(void* FilterType);
    void SetFilterQMod(float FilterQ);
    void SetFilterQ(float FilterQ);
    void SetFilterFrequencyMod(float FilterFrequencyHz);
    void SetFilterFrequency(float FilterFrequencyHz);
    void SetFilterAlgorithm(void* FilterAlgorithm);
    void SetEnableUnison(bool EnableUnison);
    void SetEnableRetrigger(bool RetriggerEnabled);
    void SetEnablePolyphony(bool bEnablePolyphony);
    bool SetEnablePatch(_Script_Synthesis::PatchId PatchId, bool bIsEnabled);
    void SetEnableLegato(bool LegatoEnabled);
    void SetDecayTime(float DecayTimeMsec);
    void SetChorusFrequency(float Frequency);
    void SetChorusFeedback(float Feedback);
    void SetChorusEnabled(bool EnableChorus);
    void SetChorusDepth(float Depth);
    void SetAttackTime(float AttackTimeMsec);
    void NoteOn(float Note, int32_t Velocity, float Duration);
    void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
    _Script_Synthesis::PatchId CreatePatch(void* PatchSource, void*& PatchCables, bool bEnableByDefault);
}; // Size: 0xd80
#pragma pack(pop)
}
