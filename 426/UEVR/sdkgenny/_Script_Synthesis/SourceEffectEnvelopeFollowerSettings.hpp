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
struct SourceEffectEnvelopeFollowerSettings {
    private: char pad_0[0xc]; public:
    float& get_AttackTime();
    float& get_ReleaseTime();
    void* get_PeakMode();
    bool get_bIsAnalogMode();
    void set_bIsAnalogMode(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
