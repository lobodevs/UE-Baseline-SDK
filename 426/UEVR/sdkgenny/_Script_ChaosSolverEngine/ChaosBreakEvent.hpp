#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
#pragma pack(push, 1)
struct ChaosBreakEvent {
    private: char pad_0[0x30]; public:
    _Script_Engine::PrimitiveComponent*& get_Component();
    void* get_Location();
    void* get_Velocity();
    void* get_AngularVelocity();
    float& get_Mass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
