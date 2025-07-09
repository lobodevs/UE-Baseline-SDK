#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "Controller.hpp"
#include "Pawn.hpp"
#include "PawnMovementComponent.hpp"
#include "PlayerState.hpp"
_Script_Engine::Controller* _Script_Engine::Pawn::GetController() {
    return;
}
void _Script_Engine::Pawn::set_bCanAffectNavigationGeneration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Pawn::get_bUseControllerRotationPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Script_Engine::Pawn::set_bUseControllerRotationRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::PawnMovementComponent* _Script_Engine::Pawn::GetMovementComponent() {
    return;
}
bool _Script_Engine::Pawn::get_bUseControllerRotationYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 2 != 0;
}
void _Script_Engine::Pawn::LaunchPawn(_Script_CoreUObject::Vector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    return;
}
void _Script_Engine::Pawn::set_bUseControllerRotationPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Pawn::get_bCanAffectNavigationGeneration() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 8 != 0;
}
bool _Script_Engine::Pawn::IsLocallyControlled() {
    return;
}
void _Script_Engine::Pawn::set_bUseControllerRotationYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Pawn::get_bUseControllerRotationRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 4 != 0;
}
void _Script_Engine::Pawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
    return;
}
float& _Script_Engine::Pawn::get_BaseEyeHeight() {
    return *(float*)((uintptr_t)this + 0x22c);
}
void* _Script_Engine::Pawn::get_ControlInputVector() {
    return (void*)((uintptr_t)this + 0x264);
}
void* _Script_Engine::Pawn::get_AutoPossessPlayer() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Script_Engine::Pawn::PawnMakeNoise(float Loudness, _Script_CoreUObject::Vector NoiseLocation, bool bUseNoiseMakerLocation, _Script_Engine::Actor* NoiseMaker) {
    return;
}
void* _Script_Engine::Pawn::get_AutoPossessAI() {
    return (void*)((uintptr_t)this + 0x231);
}
void* _Script_Engine::Pawn::get_RemoteViewPitch() {
    return (void*)((uintptr_t)this + 0x232);
}
_Script_Engine::Controller*& _Script_Engine::Pawn::get_Controller() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0x258);
}
void* _Script_Engine::Pawn::get_AIControllerClass() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_Engine::PlayerState*& _Script_Engine::Pawn::get_PlayerState() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x240);
}
_Script_Engine::Controller*& _Script_Engine::Pawn::get_LastHitBy() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0x250);
}
void* _Script_Engine::Pawn::get_LastControlInputVector() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Script_Engine::Pawn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Pawn");
    return result;
}
void _Script_Engine::Pawn::SpawnDefaultController() {
    return;
}
void _Script_Engine::Pawn::ReceiveUnpossessed(_Script_Engine::Controller* OldController) {
    return;
}
void _Script_Engine::Pawn::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
void _Script_Engine::Pawn::OnRep_PlayerState() {
    return;
}
void _Script_Engine::Pawn::OnRep_Controller() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::K2_GetMovementInputVector() {
    return;
}
bool _Script_Engine::Pawn::IsPlayerControlled() {
    return;
}
bool _Script_Engine::Pawn::IsPawnControlled() {
    return;
}
bool _Script_Engine::Pawn::IsMoveInputIgnored() {
    return;
}
bool _Script_Engine::Pawn::IsControlled() {
    return;
}
bool _Script_Engine::Pawn::IsBotControlled() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::GetPendingMovementInputVector() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::GetNavAgentLocation() {
    return;
}
_Script_Engine::Actor* _Script_Engine::Pawn::GetMovementBaseActor(_Script_Engine::Pawn* Pawn) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::GetLastMovementInputVector() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::Pawn::GetControlRotation() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::Pawn::GetBaseAimRotation() {
    return;
}
void _Script_Engine::Pawn::DetachFromControllerPendingDestroy() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Pawn::ConsumeMovementInputVector() {
    return;
}
void _Script_Engine::Pawn::AddMovementInput(_Script_CoreUObject::Vector WorldDirection, float ScaleValue, bool bForce) {
    return;
}
void _Script_Engine::Pawn::AddControllerYawInput(float Val) {
    return;
}
void _Script_Engine::Pawn::AddControllerRollInput(float Val) {
    return;
}
void _Script_Engine::Pawn::AddControllerPitchInput(float Val) {
    return;
}
