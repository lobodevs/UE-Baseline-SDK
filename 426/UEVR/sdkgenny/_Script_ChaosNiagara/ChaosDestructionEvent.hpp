#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosNiagara {
#pragma pack(push, 1)
struct ChaosDestructionEvent {
    private: char pad_0[0x44]; public:
    void* get_Position();
    void* get_Normal();
    void* get_Velocity();
    void* get_AngularVelocity();
    float& get_ExtentMin();
    float& get_ExtentMax();
    int32_t& get_ParticleID();
    float& get_Time();
    int32_t& get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x44
#pragma pack(pop)
}
