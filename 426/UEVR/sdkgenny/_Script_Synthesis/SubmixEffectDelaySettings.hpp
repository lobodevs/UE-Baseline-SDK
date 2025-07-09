#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SubmixEffectDelaySettings {
    private: char pad_0[0xc]; public:
    float& get_MaximumDelayLength();
    float& get_InterpolationTime();
    float& get_DelayLength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
