#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeCommon\ClothConfigCommon.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosCloth {
#pragma pack(push, 1)
struct ChaosClothConfig : public _Script_ClothingSystemRuntimeCommon::ClothConfigCommon {
    private: char pad_28[0x88]; public:
    void* get_MassMode();
    float& get_UniformMass();
    float& get_TotalMass();
    float& get_Density();
    float& get_MinPerParticleMass();
    float& get_EdgeStiffness();
    float& get_BendingStiffness();
    bool get_bUseBendingElements();
    void set_bUseBendingElements(bool value);
    float& get_AreaStiffness();
    float& get_VolumeStiffness();
    float& get_StrainLimitingStiffness();
    float& get_LimitScale();
    void* get_TetherMode();
    bool get_bUseGeodesicDistance();
    void set_bUseGeodesicDistance(bool value);
    float& get_ShapeTargetStiffness();
    float& get_CollisionThickness();
    float& get_FrictionCoefficient();
    bool get_bUseSelfCollisions();
    void set_bUseSelfCollisions(bool value);
    float& get_SelfCollisionThickness();
    bool get_bUseLegacyBackstop();
    void set_bUseLegacyBackstop(bool value);
    float& get_DampingCoefficient();
    bool get_bUsePointBasedWindModel();
    void set_bUsePointBasedWindModel(bool value);
    float& get_DragCoefficient();
    float& get_LiftCoefficient();
    bool get_bUseGravityOverride();
    void set_bUseGravityOverride(bool value);
    float& get_GravityScale();
    void* get_Gravity();
    float& get_AnimDriveSpringStiffness();
    void* get_LinearVelocityScale();
    float& get_AngularVelocityScale();
    bool get_bUseTetrahedralConstraints();
    void set_bUseTetrahedralConstraints(bool value);
    bool get_bUseThinShellVolumeConstraints();
    void set_bUseThinShellVolumeConstraints(bool value);
    bool get_bUseContinuousCollisionDetection();
    void set_bUseContinuousCollisionDetection(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
