#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysicsCore {
#pragma pack(push, 1)
struct ChaosPhysicalMaterial : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    float& get_Friction();
    float& get_StaticFriction();
    float& get_Restitution();
    float& get_LinearEtherDrag();
    float& get_AngularEtherDrag();
    float& get_SleepingLinearVelocityThreshold();
    float& get_SleepingAngularVelocityThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
