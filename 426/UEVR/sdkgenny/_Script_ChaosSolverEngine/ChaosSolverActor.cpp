#include "..\FUObjectArray.hpp"
#include "ChaosGameplayEventDispatcher.hpp"
#include "ChaosSolverActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
void* _Script_ChaosSolverEngine::ChaosSolverActor::get_Properties() {
    return (void*)((uintptr_t)this + 0x220);
}
bool _Script_ChaosSolverEngine::ChaosSolverActor::get_DoGenerateCollisionData() {
    return (*(uint8_t*)((uintptr_t)this + 0x29d + 0)) & 1 != 0;
}
float& _Script_ChaosSolverEngine::ChaosSolverActor::get_TimeStepMultiplier() {
    return *(float*)((uintptr_t)this + 0x288);
}
int32_t& _Script_ChaosSolverEngine::ChaosSolverActor::get_CollisionIterations() {
    return *(int32_t*)((uintptr_t)this + 0x28c);
}
void* _Script_ChaosSolverEngine::ChaosSolverActor::get_ClusterUnionConnectionType() {
    return (void*)((uintptr_t)this + 0x29c);
}
int32_t& _Script_ChaosSolverEngine::ChaosSolverActor::get_PushOutIterations() {
    return *(int32_t*)((uintptr_t)this + 0x290);
}
int32_t& _Script_ChaosSolverEngine::ChaosSolverActor::get_PushOutPairIterations() {
    return *(int32_t*)((uintptr_t)this + 0x294);
}
float& _Script_ChaosSolverEngine::ChaosSolverActor::get_ClusterConnectionFactor() {
    return *(float*)((uintptr_t)this + 0x298);
}
void _Script_ChaosSolverEngine::ChaosSolverActor::set_DoGenerateCollisionData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29d + 0);
    *(uint8_t*)((uintptr_t)this + 0x29d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ChaosSolverEngine::ChaosSolverActor::SetSolverActive(bool bActive) {
    return;
}
void* _Script_ChaosSolverEngine::ChaosSolverActor::get_CollisionFilterSettings() {
    return (void*)((uintptr_t)this + 0x2a0);
}
bool _Script_ChaosSolverEngine::ChaosSolverActor::get_DoGenerateBreakingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void* _Script_ChaosSolverEngine::ChaosSolverActor::get_BreakingFilterSettings() {
    return (void*)((uintptr_t)this + 0x2b4);
}
void _Script_ChaosSolverEngine::ChaosSolverActor::set_DoGenerateBreakingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ChaosSolverEngine::ChaosSolverActor::set_bGenerateContactGraph(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosSolverEngine::ChaosSolverActor::get_DoGenerateTrailingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c4 + 0)) & 1 != 0;
}
void _Script_ChaosSolverEngine::ChaosSolverActor::set_DoGenerateTrailingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ChaosSolverEngine::ChaosSolverActor::get_ChaosDebugSubstepControl() {
    return (void*)((uintptr_t)this + 0x2e4);
}
void* _Script_ChaosSolverEngine::ChaosSolverActor::get_TrailingFilterSettings() {
    return (void*)((uintptr_t)this + 0x2c8);
}
float& _Script_ChaosSolverEngine::ChaosSolverActor::get_MassScale() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
bool _Script_ChaosSolverEngine::ChaosSolverActor::get_bGenerateContactGraph() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dc + 0)) & 1 != 0;
}
bool _Script_ChaosSolverEngine::ChaosSolverActor::get_bHasFloor() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dd + 0)) & 1 != 0;
}
void _Script_ChaosSolverEngine::ChaosSolverActor::set_bHasFloor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosSolverEngine::ChaosSolverActor::get_FloorHeight() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
_Script_Engine::BillboardComponent*& _Script_ChaosSolverEngine::ChaosSolverActor::get_SpriteComponent() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x2e8);
}
_Script_ChaosSolverEngine::ChaosGameplayEventDispatcher*& _Script_ChaosSolverEngine::ChaosSolverActor::get_GameplayEventDispatcherComponent() {
    return *(_Script_ChaosSolverEngine::ChaosGameplayEventDispatcher**)((uintptr_t)this + 0x308);
}
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosSolverActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosSolverEngine.ChaosSolverActor");
    return result;
}
void _Script_ChaosSolverEngine::ChaosSolverActor::SetAsCurrentWorldSolver() {
    return;
}
