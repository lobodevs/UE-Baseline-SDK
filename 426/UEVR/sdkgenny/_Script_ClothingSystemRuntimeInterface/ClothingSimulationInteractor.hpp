#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_ClothingSystemRuntimeInterface {
#pragma pack(push, 1)
struct ClothingSimulationInteractor : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    float GetSimulationTime();
    int32_t GetNumSubsteps();
    int32_t GetNumKinematicParticles();
    int32_t GetNumIterations();
    int32_t GetNumDynamicParticles();
    int32_t GetNumCloths();
    void EnableGravityOverride(_Script_CoreUObject::Vector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
}; // Size: 0x30
#pragma pack(pop)
}
