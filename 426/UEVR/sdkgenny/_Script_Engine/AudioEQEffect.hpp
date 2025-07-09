#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioEffectParameters.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AudioEQEffect : public AudioEffectParameters {
    private: char pad_8[0x38]; public:
    float& get_FrequencyCenter0();
    float& get_Gain0();
    float& get_Bandwidth0();
    float& get_FrequencyCenter1();
    float& get_Gain1();
    float& get_Bandwidth1();
    float& get_FrequencyCenter2();
    float& get_Gain2();
    float& get_Bandwidth2();
    float& get_FrequencyCenter3();
    float& get_Gain3();
    float& get_Bandwidth3();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
