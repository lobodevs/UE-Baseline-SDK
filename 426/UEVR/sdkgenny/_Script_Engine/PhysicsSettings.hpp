#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_PhysicsCore\PhysicsSettingsCore.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsSettings : public _Script_PhysicsCore::PhysicsSettingsCore {
    private: char pad_e0[0xc0]; public:
    void* get_PhysicErrorCorrection();
    void* get_LockedAxis();
    void* get_DefaultDegreesOfFreedom();
    bool get_bSuppressFaceRemapTable();
    void set_bSuppressFaceRemapTable(bool value);
    bool get_bSupportUVFromHitResults();
    void set_bSupportUVFromHitResults(bool value);
    bool get_bDisableActiveActors();
    void set_bDisableActiveActors(bool value);
    bool get_bDisableKinematicStaticPairs();
    void set_bDisableKinematicStaticPairs(bool value);
    bool get_bDisableKinematicKinematicPairs();
    void set_bDisableKinematicKinematicPairs(bool value);
    bool get_bDisableCCD();
    void set_bDisableCCD(bool value);
    bool get_bEnableEnhancedDeterminism();
    void set_bEnableEnhancedDeterminism(bool value);
    float& get_AnimPhysicsMinDeltaTime();
    bool get_bSimulateAnimPhysicsAfterReset();
    void set_bSimulateAnimPhysicsAfterReset(bool value);
    float& get_MaxPhysicsDeltaTime();
    bool get_bSubstepping();
    void set_bSubstepping(bool value);
    bool get_bSubsteppingAsync();
    void set_bSubsteppingAsync(bool value);
    float& get_MaxSubstepDeltaTime();
    int32_t& get_MaxSubsteps();
    float& get_SyncSceneSmoothingFactor();
    float& get_InitialAverageFrameRate();
    int32_t& get_PhysXTreeRebuildRate();
    void* get_PhysicalSurfaces();
    void* get_DefaultBroadphaseSettings();
    float& get_MinDeltaVelocityForHitEvents();
    void* get_ChaosSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
