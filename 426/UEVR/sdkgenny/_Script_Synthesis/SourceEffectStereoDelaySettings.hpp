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
struct SourceEffectStereoDelaySettings {
    private: char pad_0[0x24]; public:
    void* get_DelayMode();
    float& get_DelayTimeMsec();
    float& get_Feedback();
    float& get_DelayRatio();
    float& get_WetLevel();
    float& get_DryLevel();
    bool get_bFilterEnabled();
    void set_bFilterEnabled(bool value);
    void* get_FilterType();
    float& get_FilterFrequency();
    float& get_FilterQ();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
