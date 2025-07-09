#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MotoSynth {
#pragma pack(push, 1)
struct GrainTableEntry {
    private: char pad_0[0x8]; public:
    int32_t& get_SampleIndex();
    float& get_RPM();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
