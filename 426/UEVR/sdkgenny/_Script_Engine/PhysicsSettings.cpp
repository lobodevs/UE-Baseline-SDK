#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicsSettings.hpp"
#include "..\_Script_PhysicsCore\PhysicsSettingsCore.hpp"
bool _Script_Engine::PhysicsSettings::get_bSuppressFaceRemapTable() {
    return (*(uint8_t*)((uintptr_t)this + 0x116 + 0)) & 1 != 0;
}
void* _Script_Engine::PhysicsSettings::get_DefaultBroadphaseSettings() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::PhysicsSettings::get_PhysicErrorCorrection() {
    return (void*)((uintptr_t)this + 0xe0);
}
bool _Script_Engine::PhysicsSettings::get_bDisableActiveActors() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void* _Script_Engine::PhysicsSettings::get_LockedAxis() {
    return (void*)((uintptr_t)this + 0x114);
}
void* _Script_Engine::PhysicsSettings::get_DefaultDegreesOfFreedom() {
    return (void*)((uintptr_t)this + 0x115);
}
void _Script_Engine::PhysicsSettings::set_bSuppressFaceRemapTable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x116 + 0);
    *(uint8_t*)((uintptr_t)this + 0x116 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bSupportUVFromHitResults() {
    return (*(uint8_t*)((uintptr_t)this + 0x117 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSupportUVFromHitResults(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x117 + 0);
    *(uint8_t*)((uintptr_t)this + 0x117 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_bDisableActiveActors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bDisableKinematicStaticPairs() {
    return (*(uint8_t*)((uintptr_t)this + 0x119 + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bSubstepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x12c + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableKinematicStaticPairs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x119 + 0);
    *(uint8_t*)((uintptr_t)this + 0x119 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bDisableKinematicKinematicPairs() {
    return (*(uint8_t*)((uintptr_t)this + 0x11a + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableKinematicKinematicPairs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11a + 0);
    *(uint8_t*)((uintptr_t)this + 0x11a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bDisableCCD() {
    return (*(uint8_t*)((uintptr_t)this + 0x11b + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableCCD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11b + 0);
    *(uint8_t*)((uintptr_t)this + 0x11b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnableEnhancedDeterminism() {
    return (*(uint8_t*)((uintptr_t)this + 0x11c + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnableEnhancedDeterminism(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11c + 0);
    *(uint8_t*)((uintptr_t)this + 0x11c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_AnimPhysicsMinDeltaTime() {
    return *(float*)((uintptr_t)this + 0x120);
}
bool _Script_Engine::PhysicsSettings::get_bSimulateAnimPhysicsAfterReset() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSimulateAnimPhysicsAfterReset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_MaxPhysicsDeltaTime() {
    return *(float*)((uintptr_t)this + 0x128);
}
void _Script_Engine::PhysicsSettings::set_bSubstepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12c + 0);
    *(uint8_t*)((uintptr_t)this + 0x12c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bSubsteppingAsync() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSubsteppingAsync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_MaxSubstepDeltaTime() {
    return *(float*)((uintptr_t)this + 0x130);
}
int32_t& _Script_Engine::PhysicsSettings::get_MaxSubsteps() {
    return *(int32_t*)((uintptr_t)this + 0x134);
}
float& _Script_Engine::PhysicsSettings::get_SyncSceneSmoothingFactor() {
    return *(float*)((uintptr_t)this + 0x138);
}
float& _Script_Engine::PhysicsSettings::get_InitialAverageFrameRate() {
    return *(float*)((uintptr_t)this + 0x13c);
}
int32_t& _Script_Engine::PhysicsSettings::get_PhysXTreeRebuildRate() {
    return *(int32_t*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::PhysicsSettings::get_PhysicalSurfaces() {
    return (void*)((uintptr_t)this + 0x148);
}
float& _Script_Engine::PhysicsSettings::get_MinDeltaVelocityForHitEvents() {
    return *(float*)((uintptr_t)this + 0x198);
}
void* _Script_Engine::PhysicsSettings::get_ChaosSettings() {
    return (void*)((uintptr_t)this + 0x19c);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsSettings");
    return result;
}
