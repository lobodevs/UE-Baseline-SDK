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
struct AudioReverbEffect : public AudioEffectParameters {
    private: char pad_8[0x40]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
