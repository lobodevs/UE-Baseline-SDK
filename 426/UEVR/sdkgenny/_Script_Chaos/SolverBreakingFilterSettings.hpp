#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Chaos {
#pragma pack(push, 1)
struct SolverBreakingFilterSettings {
    private: char pad_0[0x10]; public:
    bool get_FilterEnabled();
    void set_FilterEnabled(bool value);
    float& get_MinMass();
    float& get_MinSpeed();
    float& get_MinVolume();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
