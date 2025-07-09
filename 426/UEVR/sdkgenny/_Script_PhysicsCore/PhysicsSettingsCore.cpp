#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "PhysicsSettingsCore.hpp"
bool _Script_PhysicsCore::PhysicsSettingsCore::get_bEnableShapeSharing() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_DefaultGravityZ() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_PhysicsCore::PhysicsSettingsCore::get_bSimulateSkeletalMeshOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_DefaultTerminalVelocity() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_TriangleMeshTriangleMinAreaThreshold() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_DefaultFluidFriction() {
    return *(float*)((uintptr_t)this + 0x40);
}
int32_t& _Script_PhysicsCore::PhysicsSettingsCore::get_SimulateScratchMemorySize() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void _Script_PhysicsCore::PhysicsSettingsCore::set_bEnableShapeSharing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_PhysicsCore::PhysicsSettingsCore::get_RagdollAggregateThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
bool _Script_PhysicsCore::PhysicsSettingsCore::get_bEnablePCM() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_PhysicsCore::PhysicsSettingsCore::set_bEnablePCM(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PhysicsCore::PhysicsSettingsCore::get_bEnableStabilization() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
void _Script_PhysicsCore::PhysicsSettingsCore::set_bEnableStabilization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PhysicsCore::PhysicsSettingsCore::get_bWarnMissingLocks() {
    return (*(uint8_t*)((uintptr_t)this + 0x53 + 0)) & 1 != 0;
}
void _Script_PhysicsCore::PhysicsSettingsCore::set_bWarnMissingLocks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53 + 0);
    *(uint8_t*)((uintptr_t)this + 0x53 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PhysicsCore::PhysicsSettingsCore::get_bEnable2DPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_PhysicsCore::PhysicsSettingsCore::set_bEnable2DPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PhysicsCore::PhysicsSettingsCore::get_bDefaultHasComplexCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void _Script_PhysicsCore::PhysicsSettingsCore::set_bDefaultHasComplexCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_BounceThresholdVelocity() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_PhysicsCore::PhysicsSettingsCore::get_FrictionCombineMode() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_PhysicsCore::PhysicsSettingsCore::get_RestitutionCombineMode() {
    return (void*)((uintptr_t)this + 0x5d);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_MaxAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_MaxDepenetrationVelocity() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_ContactOffsetMultiplier() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_MinContactOffset() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_PhysicsCore::PhysicsSettingsCore::get_MaxContactOffset() {
    return *(float*)((uintptr_t)this + 0x70);
}
void _Script_PhysicsCore::PhysicsSettingsCore::set_bSimulateSkeletalMeshOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_PhysicsCore::PhysicsSettingsCore::get_DefaultShapeComplexity() {
    return (void*)((uintptr_t)this + 0x75);
}
void* _Script_PhysicsCore::PhysicsSettingsCore::get_SolverOptions() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_PhysicsCore::PhysicsSettingsCore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysicsCore.PhysicsSettingsCore");
    return result;
}
