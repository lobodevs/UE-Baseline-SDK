#include "..\FUObjectArray.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingSimulationInteractor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "AnimInstance.hpp"
#include "AnimationAsset.hpp"
#include "BodySetup.hpp"
#include "PoseSnapshot.hpp"
#include "SkeletalMeshComponent.hpp"
#include "SkinnedMeshComponent.hpp"
bool _Script_Engine::SkeletalMeshComponent::GetStringAttribute(void*& BoneName, void*& AttributeName, void* DefaultValue, void*& OutValue, void* LookupType) {
    return;
}
void* _Script_Engine::SkeletalMeshComponent::get_DisallowedAnimCurves() {
    return (void*)((uintptr_t)this + 0x8f0);
}
void _Script_Engine::SkeletalMeshComponent::set_bHasValidBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a9 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::SkeletalMeshComponent::get_AnimBlueprintGeneratedClass() {
    return (void*)((uintptr_t)this + 0x690);
}
void* _Script_Engine::SkeletalMeshComponent::get_OnConstraintBroken() {
    return (void*)((uintptr_t)this + 0x910);
}
void* _Script_Engine::SkeletalMeshComponent::get_RootBoneTranslation() {
    return (void*)((uintptr_t)this + 0x6d8);
}
bool _Script_Engine::SkeletalMeshComponent::get_bOnlyAllowAutonomousTickPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 4 != 0;
}
void* _Script_Engine::SkeletalMeshComponent::get_AnimationData() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void _Script_Engine::SkeletalMeshComponent::set_bResetAfterTeleport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bPropagateCurvesToSlaves() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 128 != 0;
}
void* _Script_Engine::SkeletalMeshComponent::get_AnimClass() {
    return (void*)((uintptr_t)this + 0x698);
}
void* _Script_Engine::SkeletalMeshComponent::get_LineCheckBoundsScale() {
    return (void*)((uintptr_t)this + 0x6e4);
}
void _Script_Engine::SkeletalMeshComponent::SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, void* BoneName, bool bIncludeSelf) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bLocalSpaceSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::AnimInstance*& _Script_Engine::SkeletalMeshComponent::get_AnimScriptInstance() {
    return *(_Script_Engine::AnimInstance**)((uintptr_t)this + 0x6a0);
}
void _Script_Engine::SkeletalMeshComponent::SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, void* BoneName) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bDeferKinematicBoneUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b1 + 0)) & 16 != 0;
}
void _Script_Engine::SkeletalMeshComponent::AddImpulseToAllBodiesBelow(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange, bool bIncludeSelf) {
    return;
}
_Script_Engine::AnimInstance*& _Script_Engine::SkeletalMeshComponent::get_PostProcessAnimInstance() {
    return *(_Script_Engine::AnimInstance**)((uintptr_t)this + 0x6a8);
}
float& _Script_Engine::SkeletalMeshComponent::get_EdgeStiffness() {
    return *(float*)((uintptr_t)this + 0x8d0);
}
void* _Script_Engine::SkeletalMeshComponent::get_LinkedInstances() {
    return (void*)((uintptr_t)this + 0x720);
}
void _Script_Engine::SkeletalMeshComponent::SetTeleportRotationThreshold(float Threshold) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bResetAfterTeleport() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b1 + 0)) & 4 != 0;
}
void* _Script_Engine::SkeletalMeshComponent::get_CachedBoneSpaceTransforms() {
    return (void*)((uintptr_t)this + 0x730);
}
bool _Script_Engine::SkeletalMeshComponent::GetAllowedAnimCurveEvaluate() {
    return;
}
void* _Script_Engine::SkeletalMeshComponent::get_CachedComponentSpaceTransforms() {
    return (void*)((uintptr_t)this + 0x740);
}
void _Script_Engine::SkeletalMeshComponent::set_bDisableClothSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x8aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkeletalMeshComponent::GetAnimationMode() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bPropagateCurvesToSlaves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::SkeletalMeshComponent::get_GlobalAnimRateScale() {
    return *(float*)((uintptr_t)this + 0x8a0);
}
void* _Script_Engine::SkeletalMeshComponent::get_CachedAnimCurveUidVersion() {
    return (void*)((uintptr_t)this + 0x8b6);
}
void* _Script_Engine::SkeletalMeshComponent::get_KinematicBonesUpdateType() {
    return (void*)((uintptr_t)this + 0x8a4);
}
void _Script_Engine::SkeletalMeshComponent::SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim) {
    return;
}
void* _Script_Engine::SkeletalMeshComponent::get_PhysicsTransformUpdateMode() {
    return (void*)((uintptr_t)this + 0x8a5);
}
void* _Script_Engine::SkeletalMeshComponent::get_AnimationMode() {
    return (void*)((uintptr_t)this + 0x8a7);
}
bool _Script_Engine::SkeletalMeshComponent::get_bDisablePostProcessBlueprint() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a9 + 0)) & 1 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::get_bEnablePhysicsOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a9 + 0)) & 64 != 0;
}
void _Script_Engine::SkeletalMeshComponent::SetConstraintProfileForAll(void* ProfileName, bool bDefaultIfNotFound) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bDisablePostProcessBlueprint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SkeletalMeshComponent::AllowAnimCurveEvaluation(void* NameOfCurve, bool bAllow) {
    return;
}
float& _Script_Engine::SkeletalMeshComponent::get_StrainLimitingStiffness() {
    return *(float*)((uintptr_t)this + 0x8e0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bUpdateOverlapsOnAnimationFinalize() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a9 + 0)) & 4 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bEnablePhysicsOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a9 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::SkeletalMeshComponent::set_bUpdateOverlapsOnAnimationFinalize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a9 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SkeletalMeshComponent::SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, void* BoneName, bool bIncludeSelf) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bShowPrePhysBones() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 32 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::get_bHasValidBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a9 + 0)) & 16 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::GetIntegerAttribute(void*& BoneName, void*& AttributeName, int32_t DefaultValue, int32_t& OutValue, void* LookupType) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bBlendPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a9 + 0)) & 32 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::IsBodyGravityEnabled(void* BoneName) {
    return;
}
float& _Script_Engine::SkeletalMeshComponent::get_TeleportDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x9f8);
}
void _Script_Engine::SkeletalMeshComponent::set_bBlendPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a9 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalMeshComponent");
    return result;
}
bool _Script_Engine::SkeletalMeshComponent::get_bUpdateJointsFromAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a9 + 0)) & 128 != 0;
}
void* _Script_Engine::SkeletalMeshComponent::get_ClothingSimulationFactory() {
    return (void*)((uintptr_t)this + 0x920);
}
void _Script_Engine::SkeletalMeshComponent::set_bUpdateJointsFromAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a9 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bDisableClothSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8aa + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshComponent::SetConstraintProfile(void* JointName, void* ProfileName, bool bDefaultIfNotFound) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bOnlyAllowAutonomousTickPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bDisableRigidBodyAnimNode() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b0 + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMeshComponent::SetTeleportDistanceThreshold(float Threshold) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bDisableRigidBodyAnimNode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::SkeletalMeshComponent::SetUpdateAnimationInEditor(bool NewUpdateState) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bAllowAnimCurveEvaluation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b0 + 0)) & 4 != 0;
}
void _Script_Engine::SkeletalMeshComponent::TermBodiesBelow(void* ParentBoneName) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bIsAutonomousTickPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::SkeletalMeshComponent::set_bAllowAnimCurveEvaluation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SkeletalMeshComponent::ResumeClothingSimulation() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bEnablePerPolyCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimInstance* _Script_Engine::SkeletalMeshComponent::GetPostProcessInstance() {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bDisableAnimCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b0 + 0)) & 8 != 0;
}
void _Script_Engine::SkeletalMeshComponent::BreakConstraint(_Script_CoreUObject::Vector Impulse, _Script_CoreUObject::Vector HitLocation, void* InBoneName) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bNoSkeletonUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b1 + 0)) & 32 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bDisableAnimCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bEnablePerPolyCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 1 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::get_bCollideWithEnvironment() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b0 + 0)) & 128 != 0;
}
void _Script_Engine::SkeletalMeshComponent::SetPhysicsBlendWeight(float PhysicsBlendWeight) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bCollideWithEnvironment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::SkeletalMeshComponent::set_bOldForceRefPose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bCollideWithAttachedChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b1 + 0)) & 1 != 0;
}
_Script_Engine::AnimInstance* _Script_Engine::SkeletalMeshComponent::GetAnimInstance() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bCollideWithAttachedChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bLocalSpaceSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b1 + 0)) & 2 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::get_bForceRefpose() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 2 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::GetDisablePostProcessBlueprint() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bDeferKinematicBoneUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::SkeletalMeshComponent::set_bShowPrePhysBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::SkeletalMeshComponent::set_bNoSkeletonUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bPauseAnims() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b1 + 0)) & 64 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bPauseAnims(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bUseRefPoseOnInitAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b1 + 0)) & 128 != 0;
}
void _Script_Engine::SkeletalMeshComponent::SetAngularLimits(void* InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bUseRefPoseOnInitAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::SkeletalMeshComponent::set_bForceRefpose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::SkeletalMeshComponent::SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bIsAutonomousTickPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 8 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::get_bOldForceRefPose() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 16 != 0;
}
void _Script_Engine::SkeletalMeshComponent::ResetAllowedAnimCurveEvaluation() {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bRequiredBonesUpToDate() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 64 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bRequiredBonesUpToDate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bAnimTreeInitialised() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b2 + 0)) & 128 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bAnimTreeInitialised(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b2 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bIncludeComponentLocationIntoBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bIncludeComponentLocationIntoBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SkeletalMeshComponent::ToggleDisablePostProcessBlueprint() {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bEnableLineCheckWithBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bEnableLineCheckWithBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::SkeletalMeshComponent::ClearMorphTargets() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SnapshotPose(_Script_Engine::PoseSnapshot& Snapshot) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bUseBendingElements() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 4 != 0;
}
void _Script_Engine::SkeletalMeshComponent::LinkAnimClassLayers(void* InClass) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAnimation(_Script_Engine::AnimationAsset* NewAnimToPlay) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bUseBendingElements(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SkeletalMeshComponent::UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bUseTetrahedralConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 8 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bUseTetrahedralConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::SkeletalMeshComponent::SetAllowAnimCurveEvaluation(bool bInAllow) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bUseThinShellVolumeConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 16 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bUseThinShellVolumeConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bUseSelfCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 32 != 0;
}
bool _Script_Engine::SkeletalMeshComponent::HasValidAnimationInstance() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bUseSelfCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::SkeletalMeshComponent::AccumulateAllBodiesBelowPhysicsBlendWeight(void*& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bUseContinuousCollisionDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b3 + 0)) & 64 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bUseContinuousCollisionDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b3 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float _Script_Engine::SkeletalMeshComponent::GetClothMaxDistanceScale() {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::get_bSkipKinematicUpdateWhenInterpolating() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b4 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshComponent::PlayAnimation(_Script_Engine::AnimationAsset* NewAnimToPlay, bool bLooping) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::set_bSkipKinematicUpdateWhenInterpolating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bSkipBoundsUpdateWhenInterpolating() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b4 + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bSkipBoundsUpdateWhenInterpolating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkeletalMeshComponent::get_bNeedsQueuedAnimEventsDispatched() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b4 + 0)) & 16 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bNeedsQueuedAnimEventsDispatched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::SkeletalMeshComponent::SetAllowedAnimCurvesEvaluation(void*& List, bool bAllow) {
    return;
}
void* _Script_Engine::SkeletalMeshComponent::get_MassMode() {
    return (void*)((uintptr_t)this + 0x8b8);
}
float& _Script_Engine::SkeletalMeshComponent::get_UniformMass() {
    return *(float*)((uintptr_t)this + 0x8bc);
}
float& _Script_Engine::SkeletalMeshComponent::get_TotalMass() {
    return *(float*)((uintptr_t)this + 0x8c0);
}
void _Script_Engine::SkeletalMeshComponent::SetDisablePostProcessBlueprint(bool bInDisablePostProcess) {
    return;
}
float& _Script_Engine::SkeletalMeshComponent::get_Density() {
    return *(float*)((uintptr_t)this + 0x8c4);
}
float& _Script_Engine::SkeletalMeshComponent::get_MinPerParticleMass() {
    return *(float*)((uintptr_t)this + 0x8c8);
}
float& _Script_Engine::SkeletalMeshComponent::get_ClothBlendWeight() {
    return *(float*)((uintptr_t)this + 0x8cc);
}
void* _Script_Engine::SkeletalMeshComponent::get_OnAnimInitialized() {
    return (void*)((uintptr_t)this + 0xb30);
}
float& _Script_Engine::SkeletalMeshComponent::get_BendingStiffness() {
    return *(float*)((uintptr_t)this + 0x8d4);
}
void _Script_Engine::SkeletalMeshComponent::SetEnableBodyGravity(bool bEnableGravity, void* BoneName) {
    return;
}
float& _Script_Engine::SkeletalMeshComponent::get_AreaStiffness() {
    return *(float*)((uintptr_t)this + 0x8d8);
}
float& _Script_Engine::SkeletalMeshComponent::get_VolumeStiffness() {
    return *(float*)((uintptr_t)this + 0x8dc);
}
float& _Script_Engine::SkeletalMeshComponent::get_ShapeTargetStiffness() {
    return *(float*)((uintptr_t)this + 0x8e4);
}
bool _Script_Engine::SkeletalMeshComponent::get_bWaitForParallelClothTask() {
    return (*(uint8_t*)((uintptr_t)this + 0x8e8 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshComponent::set_bWaitForParallelClothTask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BodySetup*& _Script_Engine::SkeletalMeshComponent::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x900);
}
float& _Script_Engine::SkeletalMeshComponent::get_TeleportRotationThreshold() {
    return *(float*)((uintptr_t)this + 0x9fc);
}
void* _Script_Engine::SkeletalMeshComponent::get_LastPoseTickFrame() {
    return (void*)((uintptr_t)this + 0xa08);
}
_Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor*& _Script_Engine::SkeletalMeshComponent::get_ClothingInteractor() {
    return *(_Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor**)((uintptr_t)this + 0xa60);
}
void _Script_Engine::SkeletalMeshComponent::UnlinkAnimClassLayers(void* InClass) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SuspendClothingSimulation() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::Stop() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetUpdateClothInEditor(bool NewUpdateState) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetPosition(float InPos, bool bFireNotifies) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::AddForceToAllBodiesBelow(_Script_CoreUObject::Vector Force, void* BoneName, bool bAccelChange, bool bIncludeSelf) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetPlayRate(float Rate) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetMorphTarget(void* MorphTargetName, float Value, bool bRemoveZeroWeight) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetEnablePhysicsBlending(bool bNewBlendPhysics) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetDisableAnimCurves(bool bInDisableAnimCurves) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetClothMaxDistanceScale(float Scale) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAnimClass(void* NewClass) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAnimationMode(void* InAnimationMode) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAllBodiesSimulatePhysics(bool bNewSimulate) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics(void*& InBoneName, bool bNewSimulate, bool bIncludeSelf) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::SetAllBodiesBelowPhysicsBlendWeight(void*& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::ResetClothTeleportMode() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::ResetAnimInstanceDynamics(void* InTeleportType) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::ResetAllBodiesSimulatePhysics() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::Play(bool bLooping) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::OverrideAnimationData(_Script_Engine::AnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::LinkAnimGraphByTag(void* InTag, void* InClass) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::K2_GetClosestPointOnPhysicsAsset(_Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector& ClosestWorldPosition, _Script_CoreUObject::Vector& Normal, void*& BoneName, float& Distance) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::IsPlaying() {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::IsClothingSimulationSuspended() {
    return;
}
float _Script_Engine::SkeletalMeshComponent::GetTeleportRotationThreshold() {
    return;
}
float _Script_Engine::SkeletalMeshComponent::GetTeleportDistanceThreshold() {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::GetStringAttribute_Ref(void*& BoneName, void*& AttributeName, void*& OutValue, void* LookupType) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SkeletalMeshComponent::GetSkeletalCenterOfMass() {
    return;
}
float _Script_Engine::SkeletalMeshComponent::GetPosition() {
    return;
}
float _Script_Engine::SkeletalMeshComponent::GetPlayRate() {
    return;
}
float _Script_Engine::SkeletalMeshComponent::GetMorphTarget(void* MorphTargetName) {
    return;
}
_Script_Engine::AnimInstance* _Script_Engine::SkeletalMeshComponent::GetLinkedAnimLayerInstanceByGroup(void* InGroup) {
    return;
}
_Script_Engine::AnimInstance* _Script_Engine::SkeletalMeshComponent::GetLinkedAnimLayerInstanceByClass(void* InClass) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::GetLinkedAnimGraphInstancesByTag(void* InTag, void*& OutLinkedInstances) {
    return;
}
_Script_Engine::AnimInstance* _Script_Engine::SkeletalMeshComponent::GetLinkedAnimGraphInstanceByTag(void* InTag) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::GetIntegerAttribute_Ref(void*& BoneName, void*& AttributeName, int32_t& OutValue, void* LookupType) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::GetFloatAttribute_Ref(void*& BoneName, void*& AttributeName, float& OutValue, void* LookupType) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::GetFloatAttribute(void*& BoneName, void*& AttributeName, float DefaultValue, float& OutValue, void* LookupType) {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::GetDisableAnimCurves() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::GetCurrentJointAngles(void* InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle) {
    return;
}
_Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor* _Script_Engine::SkeletalMeshComponent::GetClothingSimulationInteractor() {
    return;
}
float _Script_Engine::SkeletalMeshComponent::GetBoneMass(void* BoneName, bool bScaleMass) {
    return;
}
void* _Script_Engine::SkeletalMeshComponent::GetAnimClass() {
    return;
}
bool _Script_Engine::SkeletalMeshComponent::GetAllowRigidBodyAnimNode() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::ForceClothNextUpdateTeleportAndReset() {
    return;
}
void _Script_Engine::SkeletalMeshComponent::ForceClothNextUpdateTeleport() {
    return;
}
void* _Script_Engine::SkeletalMeshComponent::FindConstraintBoneName(int32_t ConstraintIndex) {
    return;
}
void _Script_Engine::SkeletalMeshComponent::BindClothToMasterPoseComponent() {
    return;
}
