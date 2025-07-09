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
struct SourceEffectChorusBaseSettings {
    private: char pad_0[0x18]; public:
    float& get_Depth();
    float& get_Frequency();
    float& get_Feedback();
    float& get_WetLevel();
    float& get_DryLevel();
    float& get_Spread();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
