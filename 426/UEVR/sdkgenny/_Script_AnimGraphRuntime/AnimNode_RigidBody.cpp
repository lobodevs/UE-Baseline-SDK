#include "..\FUObjectArray.hpp"
#include "AnimNode_RigidBody.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicsAsset.hpp"
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ComponentLinearAccScale() {
    return (void*)((uintptr_t)this + 0x180);
}
_Script_Engine::PhysicsAsset*& _Script_AnimGraphRuntime::AnimNode_RigidBody::get_OverridePhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0xc8);
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bClampLinearTranslationLimitToRefPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_OverrideWorldGravity() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ExternalForce() {
    return (void*)((uintptr_t)this + 0x174);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ComponentLinearVelScale() {
    return (void*)((uintptr_t)this + 0x18c);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_SimSpaceSettings() {
    return (void*)((uintptr_t)this + 0x1a4);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ComponentAppliedLinearAccClamp() {
    return (void*)((uintptr_t)this + 0x198);
}
float& _Script_AnimGraphRuntime::AnimNode_RigidBody::get_CachedBoundsScale() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_BaseBoneRef() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_OverlapChannel() {
    return (void*)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RigidBody::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RigidBody");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_SimulationSpace() {
    return (void*)((uintptr_t)this + 0x1f9);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bForceDisableCollisionBetweenConstraintBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bForceDisableCollisionBetweenConstraintBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bEnableWorldGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bEnableWorldGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bOverrideWorldGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bOverrideWorldGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bTransferBoneVelocities() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 4 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bTransferBoneVelocities(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bFreezeIncomingPoseOnStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bFreezeIncomingPoseOnStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bClampLinearTranslationLimitToRefPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 16 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_RigidBody::get_WorldSpaceMinimumScale() {
    return *(float*)((uintptr_t)this + 0x200);
}
float& _Script_AnimGraphRuntime::AnimNode_RigidBody::get_EvaluationResetTime() {
    return *(float*)((uintptr_t)this + 0x204);
}
