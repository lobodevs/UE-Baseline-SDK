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
struct SourceEffectMidSideSpreaderSettings {
    private: char pad_0[0x8]; public:
    float& get_SpreadAmount();
    void* get_InputMode();
    void* get_OutputMode();
    bool get_bEqualPower();
    void set_bEqualPower(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
