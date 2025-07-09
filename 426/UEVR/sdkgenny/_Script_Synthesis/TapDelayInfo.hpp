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
struct TapDelayInfo {
    private: char pad_0[0x18]; public:
    void* get_TapLineMode();
    float& get_DelayLength();
    float& get_Gain();
    int32_t& get_OutputChannel();
    float& get_PanInDegrees();
    int32_t& get_TapId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
