#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
#pragma pack(push, 1)
struct ChaosDebugSubstepControl {
    private: char pad_0[0x3]; public:
    bool get_bPause();
    void set_bPause(bool value);
    bool get_bSubstep();
    void set_bSubstep(bool value);
    bool get_bStep();
    void set_bStep(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
