#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct ModularSynthPreset : public _Script_Engine::TableRowBase {
    private: char pad_8[0xd8]; public:
    bool get_bEnablePolyphony();
    void set_bEnablePolyphony(bool value);
    void* get_Osc1Type();
    float& get_Osc1Gain();
    float& get_Osc1Octave();
    float& get_Osc1Semitones();
    float& get_Osc1Cents();
    float& get_Osc1PulseWidth();
    void* get_Osc2Type();
    float& get_Osc2Gain();
    float& get_Osc2Octave();
    float& get_Osc2Semitones();
    float& get_Osc2Cents();
    float& get_Osc2PulseWidth();
    float& get_Portamento();
    bool get_bEnableUnison();
    void set_bEnableUnison(bool value);
    bool get_bEnableOscillatorSync();
    void set_bEnableOscillatorSync(bool value);
    float& get_Spread();
    float& get_Pan();
    float& get_LFO1Frequency();
    float& get_LFO1Gain();
    void* get_LFO1Type();
    void* get_LFO1Mode();
    void* get_LFO1PatchType();
    float& get_LFO2Frequency();
    float& get_LFO2Gain();
    void* get_LFO2Type();
    void* get_LFO2Mode();
    void* get_LFO2PatchType();
    float& get_GainDb();
    float& get_AttackTime();
    float& get_DecayTime();
    float& get_SustainGain();
    float& get_ReleaseTime();
    void* get_ModEnvPatchType();
    void* get_ModEnvBiasPatchType();
    bool get_bInvertModulationEnvelope();
    void set_bInvertModulationEnvelope(bool value);
    bool get_bInvertModulationEnvelopeBias();
    void set_bInvertModulationEnvelopeBias(bool value);
    float& get_ModulationEnvelopeDepth();
    float& get_ModulationEnvelopeAttackTime();
    float& get_ModulationEnvelopeDecayTime();
    float& get_ModulationEnvelopeSustainGain();
    float& get_ModulationEnvelopeReleaseTime();
    bool get_bLegato();
    void set_bLegato(bool value);
    bool get_bRetrigger();
    void set_bRetrigger(bool value);
    float& get_FilterFrequency();
    float& get_FilterQ();
    void* get_FilterType();
    void* get_FilterAlgorithm();
    bool get_bStereoDelayEnabled();
    void set_bStereoDelayEnabled(bool value);
    void* get_StereoDelayMode();
    float& get_StereoDelayTime();
    float& get_StereoDelayFeedback();
    float& get_StereoDelayWetlevel();
    float& get_StereoDelayRatio();
    bool get_bChorusEnabled();
    void set_bChorusEnabled(bool value);
    float& get_ChorusDepth();
    float& get_ChorusFeedback();
    float& get_ChorusFrequency();
    void* get_Patches();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
