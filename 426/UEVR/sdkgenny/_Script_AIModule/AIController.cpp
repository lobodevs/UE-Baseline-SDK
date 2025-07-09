#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "AIPerceptionComponent.hpp"
#include "BehaviorTree.hpp"
#include "BlackboardComponent.hpp"
#include "BlackboardData.hpp"
#include "BrainComponent.hpp"
#include "PathFollowingComponent.hpp"
#include "PawnActionsComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_GameplayTasks\GameplayResourceSet.hpp"
#include "..\_Script_GameplayTasks\GameplayTasksComponent.hpp"
_Script_GameplayTasks::GameplayTasksComponent*& _Script_AIModule::AIController::get_CachedGameplayTasksComponent() {
    return *(_Script_GameplayTasks::GameplayTasksComponent**)((uintptr_t)this + 0x300);
}
bool _Script_AIModule::AIController::get_bStartAILogicOnPossess() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void* _Script_AIModule::AIController::MoveToLocation(_Script_CoreUObject::Vector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, void* FilterClass, bool bAllowPartialPath) {
    return;
}
void _Script_AIModule::AIController::set_bStartAILogicOnPossess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AIController::get_bStopAILogicOnUnposses() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 2 != 0;
}
void* _Script_AIModule::AIController::get_ReceiveMoveCompleted() {
    return (void*)((uintptr_t)this + 0x310);
}
bool _Script_AIModule::AIController::get_bLOSflag() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 4 != 0;
}
void _Script_AIModule::AIController::set_bStopAILogicOnUnposses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AIModule::AIController::set_bLOSflag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AIModule::AIController::get_bSkipExtraLOSChecks() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 8 != 0;
}
void _Script_AIModule::AIController::set_bSkipExtraLOSChecks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AIModule::AIController::get_bAllowStrafe() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 16 != 0;
}
void _Script_AIModule::AIController::set_bAllowStrafe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AIModule::AIController::get_bWantsPlayerState() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 32 != 0;
}
void _Script_AIModule::AIController::set_bWantsPlayerState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_Engine::Actor* _Script_AIModule::AIController::GetFocusActor() {
    return;
}
bool _Script_AIModule::AIController::get_bSetControlRotationFromPawnOrientation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 64 != 0;
}
bool _Script_AIModule::AIController::UseBlackboard(_Script_AIModule::BlackboardData* BlackboardAsset, _Script_AIModule::BlackboardComponent*& BlackboardComponent) {
    return;
}
void _Script_AIModule::AIController::set_bSetControlRotationFromPawnOrientation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
_Script_AIModule::PathFollowingComponent*& _Script_AIModule::AIController::get_PathFollowingComponent() {
    return *(_Script_AIModule::PathFollowingComponent**)((uintptr_t)this + 0x2d8);
}
_Script_AIModule::BrainComponent*& _Script_AIModule::AIController::get_BrainComponent() {
    return *(_Script_AIModule::BrainComponent**)((uintptr_t)this + 0x2e0);
}
_Script_AIModule::AIPerceptionComponent*& _Script_AIModule::AIController::get_PerceptionComponent() {
    return *(_Script_AIModule::AIPerceptionComponent**)((uintptr_t)this + 0x2e8);
}
_Script_AIModule::PawnActionsComponent*& _Script_AIModule::AIController::get_ActionsComp() {
    return *(_Script_AIModule::PawnActionsComponent**)((uintptr_t)this + 0x2f0);
}
_Script_AIModule::BlackboardComponent*& _Script_AIModule::AIController::get_Blackboard() {
    return *(_Script_AIModule::BlackboardComponent**)((uintptr_t)this + 0x2f8);
}
void* _Script_AIModule::AIController::get_DefaultNavigationFilterClass() {
    return (void*)((uintptr_t)this + 0x308);
}
_Script_CoreUObject::Class* _Script_AIModule::AIController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIController");
    return result;
}
void _Script_AIModule::AIController::UnclaimTaskResource(void* ResourceClass) {
    return;
}
void _Script_AIModule::AIController::SetPathFollowingComponent(_Script_AIModule::PathFollowingComponent* NewPFComponent) {
    return;
}
void _Script_AIModule::AIController::SetMoveBlockDetection(bool bEnable) {
    return;
}
bool _Script_AIModule::AIController::RunBehaviorTree(_Script_AIModule::BehaviorTree* BTAsset) {
    return;
}
void _Script_AIModule::AIController::OnUsingBlackBoard(_Script_AIModule::BlackboardComponent* BlackboardComp, _Script_AIModule::BlackboardData* BlackboardAsset) {
    return;
}
void _Script_AIModule::AIController::OnGameplayTaskResourcesClaimed(_Script_GameplayTasks::GameplayResourceSet NewlyClaimed, _Script_GameplayTasks::GameplayResourceSet FreshlyReleased) {
    return;
}
void* _Script_AIModule::AIController::MoveToActor(_Script_Engine::Actor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, void* FilterClass, bool bAllowPartialPath) {
    return;
}
void _Script_AIModule::AIController::K2_SetFocus(_Script_Engine::Actor* NewFocus) {
    return;
}
void _Script_AIModule::AIController::K2_SetFocalPoint(_Script_CoreUObject::Vector FP) {
    return;
}
void _Script_AIModule::AIController::K2_ClearFocus() {
    return;
}
bool _Script_AIModule::AIController::HasPartialPath() {
    return;
}
_Script_AIModule::PathFollowingComponent* _Script_AIModule::AIController::GetPathFollowingComponent() {
    return;
}
void* _Script_AIModule::AIController::GetMoveStatus() {
    return;
}
_Script_CoreUObject::Vector _Script_AIModule::AIController::GetImmediateMoveDestination() {
    return;
}
_Script_CoreUObject::Vector _Script_AIModule::AIController::GetFocalPointOnActor(_Script_Engine::Actor* Actor) {
    return;
}
_Script_CoreUObject::Vector _Script_AIModule::AIController::GetFocalPoint() {
    return;
}
_Script_AIModule::AIPerceptionComponent* _Script_AIModule::AIController::GetAIPerceptionComponent() {
    return;
}
void _Script_AIModule::AIController::ClaimTaskResource(void* ResourceClass) {
    return;
}
