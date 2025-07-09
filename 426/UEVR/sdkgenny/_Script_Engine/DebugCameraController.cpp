#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "DebugCameraController.hpp"
#include "DrawFrustumComponent.hpp"
#include "HitResult.hpp"
#include "Player.hpp"
#include "PlayerController.hpp"
#include "PrimitiveComponent.hpp"
bool _Script_Engine::DebugCameraController::get_bShowSelectedInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 1 != 0;
}
void _Script_Engine::DebugCameraController::ShowDebugSelectedInfo() {
    return;
}
bool _Script_Engine::DebugCameraController::get_bIsFrozenRendering() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 2 != 0;
}
void _Script_Engine::DebugCameraController::set_bShowSelectedInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Player*& _Script_Engine::DebugCameraController::get_OriginalPlayer() {
    return *(_Script_Engine::Player**)((uintptr_t)this + 0x628);
}
void _Script_Engine::DebugCameraController::set_bIsOrbitingSelectedActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::DebugCameraController::set_bIsFrozenRendering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::DebugCameraController::get_bIsOrbitingSelectedActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 4 != 0;
}
bool _Script_Engine::DebugCameraController::get_bOrbitPivotUseCenter() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 8 != 0;
}
void _Script_Engine::DebugCameraController::set_bOrbitPivotUseCenter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::DebugCameraController::get_bEnableBufferVisualization() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 16 != 0;
}
void _Script_Engine::DebugCameraController::set_bEnableBufferVisualization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::DebugCameraController::set_bEnableBufferVisualizationFullMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::DebugCameraController::get_bEnableBufferVisualizationFullMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 32 != 0;
}
void _Script_Engine::DebugCameraController::ReceiveOnDeactivate(_Script_Engine::PlayerController* RestoredPC) {
    return;
}
bool _Script_Engine::DebugCameraController::get_bIsBufferVisualizationInputSetup() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 64 != 0;
}
void _Script_Engine::DebugCameraController::set_bIsBufferVisualizationInputSetup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::DebugCameraController::set_bLastDisplayEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x570 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::DebugCameraController::get_bLastDisplayEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x570 + 0)) & 128 != 0;
}
void _Script_Engine::DebugCameraController::ReceiveOnActorSelected(_Script_Engine::Actor* NewSelectedActor, _Script_CoreUObject::Vector& SelectHitLocation, _Script_CoreUObject::Vector& SelectHitNormal, _Script_Engine::HitResult& Hit) {
    return;
}
_Script_Engine::DrawFrustumComponent*& _Script_Engine::DebugCameraController::get_DrawFrustum() {
    return *(_Script_Engine::DrawFrustumComponent**)((uintptr_t)this + 0x578);
}
_Script_Engine::Actor*& _Script_Engine::DebugCameraController::get_SelectedActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x580);
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::DebugCameraController::get_SelectedComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x588);
}
void* _Script_Engine::DebugCameraController::get_SelectedHitPoint() {
    return (void*)((uintptr_t)this + 0x590);
}
_Script_Engine::PlayerController*& _Script_Engine::DebugCameraController::get_OriginalControllerRef() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x620);
}
float& _Script_Engine::DebugCameraController::get_SpeedScale() {
    return *(float*)((uintptr_t)this + 0x630);
}
float& _Script_Engine::DebugCameraController::get_InitialMaxSpeed() {
    return *(float*)((uintptr_t)this + 0x634);
}
float& _Script_Engine::DebugCameraController::get_InitialAccel() {
    return *(float*)((uintptr_t)this + 0x638);
}
float& _Script_Engine::DebugCameraController::get_InitialDecel() {
    return *(float*)((uintptr_t)this + 0x63c);
}
_Script_CoreUObject::Class* _Script_Engine::DebugCameraController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DebugCameraController");
    return result;
}
void _Script_Engine::DebugCameraController::ToggleDisplay() {
    return;
}
void _Script_Engine::DebugCameraController::SetPawnMovementSpeedScale(float NewSpeedScale) {
    return;
}
void _Script_Engine::DebugCameraController::ReceiveOnActivate(_Script_Engine::PlayerController* OriginalPC) {
    return;
}
_Script_Engine::Actor* _Script_Engine::DebugCameraController::GetSelectedActor() {
    return;
}
