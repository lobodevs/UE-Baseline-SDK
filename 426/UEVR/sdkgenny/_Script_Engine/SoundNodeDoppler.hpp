#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeDoppler : public SoundNode {
    private: char pad_48[0x10]; public:
    float& get_DopplerIntensity();
    bool get_bUseSmoothing();
    void set_bUseSmoothing(bool value);
    float& get_SmoothingInterpSpeed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
