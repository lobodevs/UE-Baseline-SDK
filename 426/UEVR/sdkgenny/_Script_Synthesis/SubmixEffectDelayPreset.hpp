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
struct SubmixEffectDelaySettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectDelayPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_68[0x50]; public:
    void* get_Settings();
    void* get_DynamicSettings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_Synthesis::SubmixEffectDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void SetDelay(float Length);
    float GetMaxDelayInMilliseconds();
}; // Size: 0xb8
#pragma pack(pop)
}
