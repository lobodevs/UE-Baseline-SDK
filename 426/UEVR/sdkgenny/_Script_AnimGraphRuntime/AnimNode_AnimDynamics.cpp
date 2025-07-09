#include "..\FUObjectArray.hpp"
#include "AnimNode_AnimDynamics.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x178);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LinearDampingOverride() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_BoxExtents() {
    return (void*)((uintptr_t)this + 0x160);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularDampingOverride() {
    return *(float*)((uintptr_t)this + 0xcc);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideAngularBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 32 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_RelativeSpaceBone() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LocalJointOffset() {
    return (void*)((uintptr_t)this + 0x16c);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_BoundBone() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bLinearSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0x245 + 0)) & 4 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ChainEnd() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_GravityOverride() {
    return (void*)((uintptr_t)this + 0x17c);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LinearSpringConstant() {
    return *(float*)((uintptr_t)this + 0x188);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularSpringConstant() {
    return *(float*)((uintptr_t)this + 0x18c);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_WindScale() {
    return *(float*)((uintptr_t)this + 0x190);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ComponentLinearAccScale() {
    return (void*)((uintptr_t)this + 0x194);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ComponentLinearVelScale() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ComponentAppliedLinearAccClamp() {
    return (void*)((uintptr_t)this + 0x1ac);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularBiasOverride() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_NumSolverIterationsPreUpdate() {
    return *(int32_t*)((uintptr_t)this + 0x1bc);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_NumSolverIterationsPostUpdate() {
    return *(int32_t*)((uintptr_t)this + 0x1c0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ConstraintSetup() {
    return (void*)((uintptr_t)this + 0x1c4);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SphericalLimits() {
    return (void*)((uintptr_t)this + 0x210);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SphereCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x220);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ExternalForce() {
    return (void*)((uintptr_t)this + 0x224);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_PlanarLimits() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_CollisionType() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SimulationSpace() {
    return (void*)((uintptr_t)this + 0x241);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUseSphericalLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUseSphericalLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUsePlanarLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUsePlanarLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bDoUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 4 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bDoUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bChain() {
    return (*(uint8_t*)((uintptr_t)this + 0x245 + 0)) & 16 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bDoEval() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bDoEval(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideLinearDamping() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 16 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideLinearDamping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideAngularBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideAngularDamping() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 64 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideAngularDamping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bEnableWind() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 128 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bEnableWind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x245 + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x245 + 0);
    *(uint8_t*)((uintptr_t)this + 0x245 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bLinearSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x245 + 0);
    *(uint8_t*)((uintptr_t)this + 0x245 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bAngularSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0x245 + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bAngularSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x245 + 0);
    *(uint8_t*)((uintptr_t)this + 0x245 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bChain(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x245 + 0);
    *(uint8_t*)((uintptr_t)this + 0x245 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_RetargetingSettings() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_AnimDynamics");
    return result;
}
