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
struct SourceEffectSimpleDelaySettings {
    private: char pad_0[0x18]; public:
    float& get_SpeedOfSound();
    float& get_DelayAmount();
    float& get_DryAmount();
    float& get_WetAmount();
    float& get_Feedback();
    bool get_bDelayBasedOnDistance();
    void set_bDelayBasedOnDistance(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
