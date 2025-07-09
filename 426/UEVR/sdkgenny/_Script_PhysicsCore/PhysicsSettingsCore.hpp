#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysicsCore {
#pragma pack(push, 1)
struct PhysicsSettingsCore : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0xa8]; public:
    float& get_DefaultGravityZ();
    float& get_DefaultTerminalVelocity();
    float& get_DefaultFluidFriction();
    int32_t& get_SimulateScratchMemorySize();
    int32_t& get_RagdollAggregateThreshold();
    float& get_TriangleMeshTriangleMinAreaThreshold();
    bool get_bEnableShapeSharing();
    void set_bEnableShapeSharing(bool value);
    bool get_bEnablePCM();
    void set_bEnablePCM(bool value);
    bool get_bEnableStabilization();
    void set_bEnableStabilization(bool value);
    bool get_bWarnMissingLocks();
    void set_bWarnMissingLocks(bool value);
    bool get_bEnable2DPhysics();
    void set_bEnable2DPhysics(bool value);
    bool get_bDefaultHasComplexCollision();
    void set_bDefaultHasComplexCollision(bool value);
    float& get_BounceThresholdVelocity();
    void* get_FrictionCombineMode();
    void* get_RestitutionCombineMode();
    float& get_MaxAngularVelocity();
    float& get_MaxDepenetrationVelocity();
    float& get_ContactOffsetMultiplier();
    float& get_MinContactOffset();
    float& get_MaxContactOffset();
    bool get_bSimulateSkeletalMeshOnDedicatedServer();
    void set_bSimulateSkeletalMeshOnDedicatedServer(bool value);
    void* get_DefaultShapeComplexity();
    void* get_SolverOptions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
