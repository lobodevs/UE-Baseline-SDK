#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SynthComponentToneGenerator : public _Script_AudioMixer::SynthComponent {
    private: char pad_6c0[0x20]; public:
    float& get_Frequency();
    float& get_Volume();
    static _Script_CoreUObject::Class* static_class();
    void SetVolume(float InVolume);
    void SetFrequency(float InFrequency);
}; // Size: 0x6e0
#pragma pack(pop)
}
