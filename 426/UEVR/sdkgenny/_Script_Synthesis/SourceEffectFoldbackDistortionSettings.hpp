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
struct SourceEffectFoldbackDistortionSettings {
    private: char pad_0[0xc]; public:
    float& get_InputGainDb();
    float& get_ThresholdDb();
    float& get_OutputGainDb();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
