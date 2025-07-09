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
struct DynamicsBandSettings {
    private: char pad_0[0x20]; public:
    float& get_CrossoverTopFrequency();
    float& get_AttackTimeMsec();
    float& get_ReleaseTimeMsec();
    float& get_ThresholdDb();
    float& get_Ratio();
    float& get_KneeBandwidthDb();
    float& get_InputGainDb();
    float& get_OutputGainDb();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
