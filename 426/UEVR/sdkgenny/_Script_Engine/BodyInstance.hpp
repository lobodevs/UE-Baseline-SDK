#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_PhysicsCore\BodyInstanceCore.hpp"
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BodyInstance : public _Script_PhysicsCore::BodyInstanceCore {
    private: char pad_18[0x140]; public:
    void* get_ObjectType();
    void* get_CollisionEnabled();
    void* get_SleepFamily();
    void* get_DOFMode();
    bool get_bUseCCD();
    void set_bUseCCD(bool value);
    bool get_bIgnoreAnalyticCollisions();
    void set_bIgnoreAnalyticCollisions(bool value);
    bool get_bNotifyRigidBodyCollision();
    void set_bNotifyRigidBodyCollision(bool value);
    bool get_bLockTranslation();
    void set_bLockTranslation(bool value);
    bool get_bLockRotation();
    void set_bLockRotation(bool value);
    bool get_bLockXTranslation();
    void set_bLockXTranslation(bool value);
    bool get_bLockYTranslation();
    void set_bLockYTranslation(bool value);
    bool get_bLockZTranslation();
    void set_bLockZTranslation(bool value);
    bool get_bLockXRotation();
    void set_bLockXRotation(bool value);
    bool get_bLockYRotation();
    void set_bLockYRotation(bool value);
    bool get_bLockZRotation();
    void set_bLockZRotation(bool value);
    bool get_bOverrideMaxAngularVelocity();
    void set_bOverrideMaxAngularVelocity(bool value);
    bool get_bOverrideMaxDepenetrationVelocity();
    void set_bOverrideMaxDepenetrationVelocity(bool value);
    bool get_bOverrideWalkableSlopeOnInstance();
    void set_bOverrideWalkableSlopeOnInstance(bool value);
    bool get_bInterpolateWhenSubStepping();
    void set_bInterpolateWhenSubStepping(bool value);
    void* get_CollisionProfileName();
    void* get_PositionSolverIterationCount();
    void* get_VelocitySolverIterationCount();
    void* get_CollisionResponses();
    float& get_MaxDepenetrationVelocity();
    float& get_MassInKgOverride();
    float& get_LinearDamping();
    float& get_AngularDamping();
    void* get_CustomDOFPlaneNormal();
    void* get_COMNudge();
    float& get_MassScale();
    void* get_InertiaTensorScale();
    void* get_WalkableSlopeOverride();
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysMaterialOverride();
    float& get_MaxAngularVelocity();
    float& get_CustomSleepThresholdMultiplier();
    float& get_StabilizationThresholdMultiplier();
    float& get_PhysicsBlendWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
