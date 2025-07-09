#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioExtensions {
struct SoundModulatorBase;
}
namespace _Script_Synthesis {
struct SourceEffectChorusSettings;
}
namespace _Script_Synthesis {
struct SourceEffectChorusBaseSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SourceEffectChorusPreset : public _Script_Engine::SoundEffectSourcePreset {
    private: char pad_68[0x118]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetWetModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
    void SetWet(float WetAmount);
    void SetSpreadModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
    void SetSpread(float Spread);
    void SetSettings(_Script_Synthesis::SourceEffectChorusBaseSettings& Settings);
    void SetModulationSettings(_Script_Synthesis::SourceEffectChorusSettings& ModulationSettings);
    void SetFrequencyModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
    void SetFrequency(float Frequency);
    void SetFeedbackModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
    void SetFeedback(float Feedback);
    void SetDryModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
    void SetDry(float DryAmount);
    void SetDepthModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
    void SetDepth(float Depth);
}; // Size: 0x180
#pragma pack(pop)
}
