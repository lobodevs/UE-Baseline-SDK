#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_PhysicsCore {
struct PhysicalMaterialPropertyBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysicsCore {
#pragma pack(push, 1)
struct PhysicalMaterial : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    float& get_Friction();
    float& get_StaticFriction();
    void* get_FrictionCombineMode();
    bool get_bOverrideFrictionCombineMode();
    void set_bOverrideFrictionCombineMode(bool value);
    float& get_Restitution();
    void* get_RestitutionCombineMode();
    bool get_bOverrideRestitutionCombineMode();
    void set_bOverrideRestitutionCombineMode(bool value);
    float& get_Density();
    float& get_SleepLinearVelocityThreshold();
    float& get_SleepAngularVelocityThreshold();
    int32_t& get_SleepCounterThreshold();
    float& get_RaiseMassToPower();
    float& get_DestructibleDamageThresholdScale();
    _Script_PhysicsCore::PhysicalMaterialPropertyBase*& get_PhysicalMaterialProperty();
    void* get_SurfaceType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
