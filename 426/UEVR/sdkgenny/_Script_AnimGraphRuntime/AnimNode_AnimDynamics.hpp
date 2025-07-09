#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_AnimDynamics : public AnimNode_SkeletalControlBase {
    private: char pad_c8[0x378]; public:
    float& get_LinearDampingOverride();
    float& get_AngularDampingOverride();
    void* get_RelativeSpaceBone();
    void* get_BoundBone();
    void* get_ChainEnd();
    void* get_BoxExtents();
    void* get_LocalJointOffset();
    float& get_GravityScale();
    void* get_GravityOverride();
    float& get_LinearSpringConstant();
    float& get_AngularSpringConstant();
    float& get_WindScale();
    void* get_ComponentLinearAccScale();
    void* get_ComponentLinearVelScale();
    void* get_ComponentAppliedLinearAccClamp();
    float& get_AngularBiasOverride();
    int32_t& get_NumSolverIterationsPreUpdate();
    int32_t& get_NumSolverIterationsPostUpdate();
    void* get_ConstraintSetup();
    void* get_SphericalLimits();
    float& get_SphereCollisionRadius();
    void* get_ExternalForce();
    void* get_PlanarLimits();
    void* get_CollisionType();
    void* get_SimulationSpace();
    bool get_bUseSphericalLimits();
    void set_bUseSphericalLimits(bool value);
    bool get_bUsePlanarLimit();
    void set_bUsePlanarLimit(bool value);
    bool get_bDoUpdate();
    void set_bDoUpdate(bool value);
    bool get_bDoEval();
    void set_bDoEval(bool value);
    bool get_bOverrideLinearDamping();
    void set_bOverrideLinearDamping(bool value);
    bool get_bOverrideAngularBias();
    void set_bOverrideAngularBias(bool value);
    bool get_bOverrideAngularDamping();
    void set_bOverrideAngularDamping(bool value);
    bool get_bEnableWind();
    void set_bEnableWind(bool value);
    bool get_bUseGravityOverride();
    void set_bUseGravityOverride(bool value);
    bool get_bLinearSpring();
    void set_bLinearSpring(bool value);
    bool get_bAngularSpring();
    void set_bAngularSpring(bool value);
    bool get_bChain();
    void set_bChain(bool value);
    void* get_RetargetingSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x440
#pragma pack(pop)
}
