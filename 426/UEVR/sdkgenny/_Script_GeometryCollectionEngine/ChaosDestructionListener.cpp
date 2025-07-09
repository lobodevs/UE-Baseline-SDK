#include "..\FUObjectArray.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosSolverActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "ChaosBreakingEventRequestSettings.hpp"
#include "ChaosCollisionEventRequestSettings.hpp"
#include "ChaosDestructionListener.hpp"
#include "ChaosTrailingEventRequestSettings.hpp"
#include "GeometryCollectionActor.hpp"
bool _Script_GeometryCollectionEngine::ChaosDestructionListener::get_bIsCollisionEventListeningEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::AddChaosSolverActor(_Script_ChaosSolverEngine::ChaosSolverActor* ChaosSolverActor) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::set_bIsCollisionEventListeningEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::ChaosDestructionListener::get_bIsBreakingEventListeningEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 2 != 0;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::set_bIsBreakingEventListeningEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_GeometryCollectionEngine::ChaosDestructionListener::get_bIsTrailingEventListeningEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 4 != 0;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::set_bIsTrailingEventListeningEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_CollisionEventRequestSettings() {
    return (void*)((uintptr_t)this + 0x1fc);
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_BreakingEventRequestSettings() {
    return (void*)((uintptr_t)this + 0x214);
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled) {
    return;
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_TrailingEventRequestSettings() {
    return (void*)((uintptr_t)this + 0x22c);
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_ChaosSolverActors() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_GeometryCollectionActors() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_OnCollisionEvents() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_OnBreakingEvents() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::AddGeometryCollectionActor(_Script_GeometryCollectionEngine::GeometryCollectionActor* GeometryCollectionActor) {
    return;
}
void* _Script_GeometryCollectionEngine::ChaosDestructionListener::get_OnTrailingEvents() {
    return (void*)((uintptr_t)this + 0x308);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::ChaosDestructionListener::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.ChaosDestructionListener");
    return result;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SortTrailingEvents(void*& TrailingEvents, void* SortMethod) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SortCollisionEvents(void*& CollisionEvents, void* SortMethod) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SortBreakingEvents(void*& BreakingEvents, void* SortMethod) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SetTrailingEventRequestSettings(_Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings& InSettings) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SetCollisionEventRequestSettings(_Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings& InSettings) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SetBreakingEventRequestSettings(_Script_GeometryCollectionEngine::ChaosBreakingEventRequestSettings& InSettings) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::RemoveGeometryCollectionActor(_Script_GeometryCollectionEngine::GeometryCollectionActor* GeometryCollectionActor) {
    return;
}
void _Script_GeometryCollectionEngine::ChaosDestructionListener::RemoveChaosSolverActor(_Script_ChaosSolverEngine::ChaosSolverActor* ChaosSolverActor) {
    return;
}
bool _Script_GeometryCollectionEngine::ChaosDestructionListener::IsEventListening() {
    return;
}
