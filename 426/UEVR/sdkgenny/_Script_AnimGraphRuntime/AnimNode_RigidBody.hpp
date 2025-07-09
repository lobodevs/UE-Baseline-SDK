#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_Engine {
struct PhysicsAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_RigidBody : public AnimNode_SkeletalControlBase {
    private: char pad_c8[0x588]; public:
    _Script_Engine::PhysicsAsset*& get_OverridePhysicsAsset();
    void* get_OverrideWorldGravity();
    void* get_ExternalForce();
    void* get_ComponentLinearAccScale();
    void* get_ComponentLinearVelScale();
    void* get_ComponentAppliedLinearAccClamp();
    void* get_SimSpaceSettings();
    float& get_CachedBoundsScale();
    void* get_BaseBoneRef();
    void* get_OverlapChannel();
    void* get_SimulationSpace();
    bool get_bForceDisableCollisionBetweenConstraintBodies();
    void set_bForceDisableCollisionBetweenConstraintBodies(bool value);
    bool get_bEnableWorldGeometry();
    void set_bEnableWorldGeometry(bool value);
    bool get_bOverrideWorldGravity();
    void set_bOverrideWorldGravity(bool value);
    bool get_bTransferBoneVelocities();
    void set_bTransferBoneVelocities(bool value);
    bool get_bFreezeIncomingPoseOnStart();
    void set_bFreezeIncomingPoseOnStart(bool value);
    bool get_bClampLinearTranslationLimitToRefPose();
    void set_bClampLinearTranslationLimitToRefPose(bool value);
    float& get_WorldSpaceMinimumScale();
    float& get_EvaluationResetTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x650
#pragma pack(pop)
}
