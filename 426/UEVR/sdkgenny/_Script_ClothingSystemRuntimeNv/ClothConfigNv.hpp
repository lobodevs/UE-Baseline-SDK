#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeCommon\ClothConfigCommon.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeNv {
#pragma pack(push, 1)
struct ClothConfigNv : public _Script_ClothingSystemRuntimeCommon::ClothConfigCommon {
    private: char pad_28[0x118]; public:
    void* get_ClothingWindMethod();
    void* get_VerticalConstraint();
    void* get_HorizontalConstraint();
    void* get_BendConstraint();
    void* get_ShearConstraint();
    float& get_SelfCollisionRadius();
    float& get_SelfCollisionStiffness();
    float& get_SelfCollisionCullScale();
    void* get_Damping();
    float& get_Friction();
    float& get_WindDragCoefficient();
    float& get_WindLiftCoefficient();
    void* get_LinearDrag();
    void* get_AngularDrag();
    void* get_LinearInertiaScale();
    void* get_AngularInertiaScale();
    void* get_CentrifugalInertiaScale();
    float& get_SolverFrequency();
    float& get_StiffnessFrequency();
    float& get_GravityScale();
    void* get_GravityOverride();
    bool get_bUseGravityOverride();
    void set_bUseGravityOverride(bool value);
    float& get_TetherStiffness();
    float& get_TetherLimit();
    float& get_CollisionThickness();
    float& get_AnimDriveSpringStiffness();
    float& get_AnimDriveDamperStiffness();
    void* get_WindMethod();
    void* get_VerticalConstraintConfig();
    void* get_HorizontalConstraintConfig();
    void* get_BendConstraintConfig();
    void* get_ShearConstraintConfig();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
