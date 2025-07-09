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
struct SourceEffectPhaserSettings {
    private: char pad_0[0x10]; public:
    float& get_WetLevel();
    float& get_Frequency();
    float& get_Feedback();
    void* get_LFOType();
    bool get_UseQuadraturePhase();
    void set_UseQuadraturePhase(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
