#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct SubmixEffectFilterSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectFilterPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_68[0x40]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_Synthesis::SubmixEffectFilterSettings& InSettings);
    void SetFilterType(void* InType);
    void SetFilterQMod(float InQ);
    void SetFilterQ(float InQ);
    void SetFilterCutoffFrequencyMod(float InFrequency);
    void SetFilterCutoffFrequency(float InFrequency);
    void SetFilterAlgorithm(void* InAlgorithm);
}; // Size: 0xa8
#pragma pack(pop)
}
