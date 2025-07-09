#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct SourceEffectBitCrusherBaseSettings;
}
namespace _Script_AudioExtensions {
struct SoundModulatorBase;
}
namespace _Script_Synthesis {
struct SourceEffectBitCrusherSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SourceEffectBitCrusherPreset : public _Script_Engine::SoundEffectSourcePreset {
    private: char pad_68[0x88]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_Synthesis::SourceEffectBitCrusherBaseSettings& Settings);
    void SetSampleRateModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
    void SetSampleRate(float SampleRate);
    void SetModulationSettings(_Script_Synthesis::SourceEffectBitCrusherSettings& ModulationSettings);
    void SetBits(float Bits);
    void SetBitModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator);
}; // Size: 0xf0
#pragma pack(pop)
}
