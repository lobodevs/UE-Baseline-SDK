#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "AnimMontage.hpp"
#include "CapsuleComponent.hpp"
#include "Character.hpp"
#include "CharacterMoveResponsePackedBits.hpp"
#include "CharacterMovementComponent.hpp"
#include "CharacterServerMovePackedBits.hpp"
#include "HitResult.hpp"
#include "Pawn.hpp"
#include "PrimitiveComponent.hpp"
#include "RootMotionSourceGroup.hpp"
#include "SkeletalMeshComponent.hpp"
#include "Vector_NetQuantize10.hpp"
#include "Vector_NetQuantize100.hpp"
#include "Vector_NetQuantizeNormal.hpp"
float& _Script_Engine::Character::get_JumpForceTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x338);
}
void* _Script_Engine::Character::get_BaseTranslationOffset() {
    return (void*)((uintptr_t)this + 0x2fc);
}
void _Script_Engine::Character::StopAnimMontage(_Script_Engine::AnimMontage* AnimMontage) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Script_Engine::Character::get_Mesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x280);
}
bool _Script_Engine::Character::get_bPressedJump() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 4 != 0;
}
_Script_Engine::CharacterMovementComponent*& _Script_Engine::Character::get_CharacterMovement() {
    return *(_Script_Engine::CharacterMovementComponent**)((uintptr_t)this + 0x288);
}
void* _Script_Engine::Character::get_MovementModeChangedDelegate() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_Engine::Character::get_ReplicatedBasedMovement() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_Engine::CapsuleComponent*& _Script_Engine::Character::get_CapsuleComponent() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x290);
}
void* _Script_Engine::Character::get_BasedMovement() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Script_Engine::Character::ServerMoveOld(float OldTimeStamp, _Script_Engine::Vector_NetQuantize10 OldAccel, void* OldMoveFlags) {
    return;
}
float& _Script_Engine::Character::get_AnimRootMotionTranslationScale() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
void* _Script_Engine::Character::get_BaseRotationOffset() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Script_Engine::Character::get_RootMotionRepMoves() {
    return (void*)((uintptr_t)this + 0x410);
}
float& _Script_Engine::Character::get_ReplicatedServerLastTransformUpdateTimeStamp() {
    return *(float*)((uintptr_t)this + 0x320);
}
void _Script_Engine::Character::OnWalkingOffLedge(_Script_CoreUObject::Vector& PreviousFloorImpactNormal, _Script_CoreUObject::Vector& PreviousFloorContactNormal, _Script_CoreUObject::Vector& PreviousLocation, float TimeDelta) {
    return;
}
float& _Script_Engine::Character::get_ReplayLastTransformUpdateTimeStamp() {
    return *(float*)((uintptr_t)this + 0x324);
}
void* _Script_Engine::Character::get_ReplicatedMovementMode() {
    return (void*)((uintptr_t)this + 0x328);
}
bool _Script_Engine::Character::CanCrouch() {
    return;
}
bool _Script_Engine::Character::get_bInBaseReplication() {
    return (*(uint8_t*)((uintptr_t)this + 0x329 + 0)) & 1 != 0;
}
void _Script_Engine::Character::set_bServerMoveIgnoreRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x331 + 0);
    *(uint8_t*)((uintptr_t)this + 0x331 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Character::ServerMovePacked(_Script_Engine::CharacterServerMovePackedBits& PackedBits) {
    return;
}
void _Script_Engine::Character::set_bInBaseReplication(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x329 + 0);
    *(uint8_t*)((uintptr_t)this + 0x329 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Character::ServerMoveNoBase(float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* CompressedMoveFlags, void* ClientRoll, void* View, void* ClientMovementMode) {
    return;
}
float& _Script_Engine::Character::get_CrouchedEyeHeight() {
    return *(float*)((uintptr_t)this + 0x32c);
}
void _Script_Engine::Character::set_bWasJumping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x331 + 0);
    *(uint8_t*)((uintptr_t)this + 0x331 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Character::get_bIsCrouched() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 1 != 0;
}
void* _Script_Engine::Character::get_RepRootMotion() {
    return (void*)((uintptr_t)this + 0x420);
}
void _Script_Engine::Character::set_bIsCrouched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Character::get_bProxyIsJumpForceApplied() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 2 != 0;
}
void _Script_Engine::Character::set_bProxyIsJumpForceApplied(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Character::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
void _Script_Engine::Character::set_bPressedJump(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Character::get_bClientUpdating() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 8 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::Character::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Character");
    return result;
}
void* _Script_Engine::Character::get_OnReachedJumpApex() {
    return (void*)((uintptr_t)this + 0x358);
}
void _Script_Engine::Character::UnCrouch(bool bClientSimulation) {
    return;
}
void _Script_Engine::Character::set_bClientUpdating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
int32_t& _Script_Engine::Character::get_JumpMaxCount() {
    return *(int32_t*)((uintptr_t)this + 0x344);
}
bool _Script_Engine::Character::get_bClientWasFalling() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 16 != 0;
}
void _Script_Engine::Character::set_bClientWasFalling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::Character::ServerMove(float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* CompressedMoveFlags, void* ClientRoll, void* View, _Script_Engine::PrimitiveComponent* ClientMovementBase, void* ClientBaseBoneName, void* ClientMovementMode) {
    return;
}
bool _Script_Engine::Character::get_bClientResimulateRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 32 != 0;
}
void* _Script_Engine::Character::get_SavedRootMotion() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Script_Engine::Character::set_bClientResimulateRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::Character::get_JumpMaxHoldTime() {
    return *(float*)((uintptr_t)this + 0x340);
}
void _Script_Engine::Character::ClientAdjustPosition(float Timestamp, _Script_CoreUObject::Vector NewLoc, _Script_CoreUObject::Vector NewVel, _Script_Engine::PrimitiveComponent* NewBase, void* NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode) {
    return;
}
bool _Script_Engine::Character::get_bClientResimulateRootMotionSources() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 64 != 0;
}
void _Script_Engine::Character::set_bClientResimulateRootMotionSources(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Character::get_bSimGravityDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 128 != 0;
}
void _Script_Engine::Character::ServerMoveDualHybridRootMotion(float TimeStamp0, _Script_Engine::Vector_NetQuantize10 InAccel0, void* PendingFlags, void* View0, float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* NewFlags, void* ClientRoll, void* View, _Script_Engine::PrimitiveComponent* ClientMovementBase, void* ClientBaseBoneName, void* ClientMovementMode) {
    return;
}
void _Script_Engine::Character::set_bSimGravityDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Character::IsPlayingNetworkedRootMotionMontage() {
    return;
}
bool _Script_Engine::Character::get_bClientCheckEncroachmentOnNetUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x331 + 0)) & 1 != 0;
}
void _Script_Engine::Character::set_bClientCheckEncroachmentOnNetUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x331 + 0);
    *(uint8_t*)((uintptr_t)this + 0x331 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Character::get_bServerMoveIgnoreRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x331 + 0)) & 2 != 0;
}
bool _Script_Engine::Character::get_bWasJumping() {
    return (*(uint8_t*)((uintptr_t)this + 0x331 + 0)) & 4 != 0;
}
float& _Script_Engine::Character::get_JumpKeyHoldTime() {
    return *(float*)((uintptr_t)this + 0x334);
}
float& _Script_Engine::Character::get_ProxyJumpForceStartedTime() {
    return *(float*)((uintptr_t)this + 0x33c);
}
int32_t& _Script_Engine::Character::get_JumpCurrentCount() {
    return *(int32_t*)((uintptr_t)this + 0x348);
}
int32_t& _Script_Engine::Character::get_JumpCurrentCountPreJump() {
    return *(int32_t*)((uintptr_t)this + 0x34c);
}
void* _Script_Engine::Character::get_OnCharacterMovementUpdated() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_Engine::Character::get_ClientRootMotionParams() {
    return (void*)((uintptr_t)this + 0x3d0);
}
bool _Script_Engine::Character::CanJumpInternal() {
    return;
}
void _Script_Engine::Character::StopJumping() {
    return;
}
void _Script_Engine::Character::ServerMoveDualNoBase(float TimeStamp0, _Script_Engine::Vector_NetQuantize10 InAccel0, void* PendingFlags, void* View0, float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* NewFlags, void* ClientRoll, void* View, void* ClientMovementMode) {
    return;
}
void _Script_Engine::Character::ServerMoveDual(float TimeStamp0, _Script_Engine::Vector_NetQuantize10 InAccel0, void* PendingFlags, void* View0, float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* NewFlags, void* ClientRoll, void* View, _Script_Engine::PrimitiveComponent* ClientMovementBase, void* ClientBaseBoneName, void* ClientMovementMode) {
    return;
}
void _Script_Engine::Character::Jump() {
    return;
}
void _Script_Engine::Character::RootMotionDebugClientPrintOnScreen(void* inString) {
    return;
}
float _Script_Engine::Character::PlayAnimMontage(_Script_Engine::AnimMontage* AnimMontage, float InPlayRate, void* StartSectionName) {
    return;
}
void _Script_Engine::Character::OnRep_RootMotion() {
    return;
}
void _Script_Engine::Character::OnRep_ReplicatedBasedMovement() {
    return;
}
void _Script_Engine::Character::OnRep_ReplayLastTransformUpdateTimeStamp() {
    return;
}
void _Script_Engine::Character::OnRep_IsCrouched() {
    return;
}
void _Script_Engine::Character::OnLaunched(_Script_CoreUObject::Vector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    return;
}
void _Script_Engine::Character::OnLanded(_Script_Engine::HitResult& Hit) {
    return;
}
void _Script_Engine::Character::OnJumped() {
    return;
}
void _Script_Engine::Character::LaunchCharacter(_Script_CoreUObject::Vector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    return;
}
void _Script_Engine::Character::K2_UpdateCustomMovement(float DeltaTime) {
    return;
}
void _Script_Engine::Character::K2_OnMovementModeChanged(void* PrevMovementMode, void* NewMovementMode, void* PrevCustomMode, void* NewCustomMode) {
    return;
}
void _Script_Engine::Character::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
bool _Script_Engine::Character::IsPlayingRootMotion() {
    return;
}
bool _Script_Engine::Character::IsJumpProvidingForce() {
    return;
}
bool _Script_Engine::Character::HasAnyRootMotion() {
    return;
}
_Script_Engine::AnimMontage* _Script_Engine::Character::GetCurrentMontage() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Character::GetBaseTranslationOffset() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::Character::GetBaseRotationOffsetRotator() {
    return;
}
float _Script_Engine::Character::GetAnimRootMotionTranslationScale() {
    return;
}
void _Script_Engine::Character::Crouch(bool bClientSimulation) {
    return;
}
void _Script_Engine::Character::ClientVeryShortAdjustPosition(float Timestamp, _Script_CoreUObject::Vector NewLoc, _Script_Engine::PrimitiveComponent* NewBase, void* NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode) {
    return;
}
void _Script_Engine::Character::ClientMoveResponsePacked(_Script_Engine::CharacterMoveResponsePackedBits& PackedBits) {
    return;
}
void _Script_Engine::Character::ClientCheatWalk() {
    return;
}
void _Script_Engine::Character::ClientCheatGhost() {
    return;
}
void _Script_Engine::Character::ClientCheatFly() {
    return;
}
void _Script_Engine::Character::ClientAdjustRootMotionSourcePosition(float Timestamp, _Script_Engine::RootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, _Script_CoreUObject::Vector ServerLoc, _Script_Engine::Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, _Script_Engine::PrimitiveComponent* ServerBase, void* ServerBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode) {
    return;
}
void _Script_Engine::Character::ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, _Script_CoreUObject::Vector ServerLoc, _Script_Engine::Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, _Script_Engine::PrimitiveComponent* ServerBase, void* ServerBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode) {
    return;
}
void _Script_Engine::Character::ClientAckGoodMove(float Timestamp) {
    return;
}
bool _Script_Engine::Character::CanJump() {
    return;
}
void _Script_Engine::Character::CacheInitialMeshOffset(_Script_CoreUObject::Vector MeshRelativeLocation, _Script_CoreUObject::Rotator MeshRelativeRotation) {
    return;
}
