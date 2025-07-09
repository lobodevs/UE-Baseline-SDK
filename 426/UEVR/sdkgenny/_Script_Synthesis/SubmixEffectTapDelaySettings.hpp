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
struct SubmixEffectTapDelaySettings {
    private: char pad_0[0x18]; public:
    float& get_MaximumDelayLength();
    float& get_InterpolationTime();
    void* get_Taps();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
