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
struct ChaosPhysicsCollisionInfo {
    private: char pad_0[0x70]; public:
    _Script_Engine::PrimitiveComponent*& get_Component();
    _Script_Engine::PrimitiveComponent*& get_OtherComponent();
    void* get_Location();
    void* get_Normal();
    void* get_AccumulatedImpulse();
    void* get_Velocity();
    void* get_OtherVelocity();
    void* get_AngularVelocity();
    void* get_OtherAngularVelocity();
    float& get_Mass();
    float& get_OtherMass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
