#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\NavigationSystemBase.hpp"
#include "NavMeshBoundsVolume.hpp"
#include "NavigationData.hpp"
#include "NavigationPath.hpp"
#include "NavigationSystemV1.hpp"
_Script_NavigationSystem::NavigationData*& _Script_NavigationSystem::NavigationSystemV1::get_MainNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x28);
}
_Script_NavigationSystem::NavigationData*& _Script_NavigationSystem::NavigationSystemV1::get_AbstractNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x30);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_DefaultAgentName() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_NavigationSystem::NavigationSystemV1::UnregisterNavigationInvoker(_Script_Engine::Actor* Invoker) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bAllowClientSideNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 4 != 0;
}
void* _Script_NavigationSystem::NavigationSystemV1::get_CrowdManagerClass() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_NavigationSystem::NavigationSystemV1::set_bSpawnNavDataInNavBoundsLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Vector _Script_NavigationSystem::NavigationSystemV1::ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bAutoCreateNavigationData() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void* _Script_NavigationSystem::NavigationSystemV1::get_OnNavDataRegisteredEvent() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_DataGatheringMode() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_NavigationSystem::NavigationSystemV1::set_bAutoCreateNavigationData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_NavigationSystem::NavigationPath* _Script_NavigationSystem::NavigationSystemV1::FindPathToActorSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_Engine::Actor* GoalActor, float TetherDistance, _Script_Engine::Actor* PathfindingContext, void* FilterClass) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bSpawnNavDataInNavBoundsLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 2 != 0;
}
void _Script_NavigationSystem::NavigationSystemV1::set_bAllowClientSideNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
void* _Script_NavigationSystem::NavigationSystemV1::get_SupportedAgents() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bShouldDiscardSubLevelNavData() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 8 != 0;
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bSkipAgentHeightCheckWhenPickingNavData() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationSystemV1::set_bShouldDiscardSubLevelNavData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bGenerateNavigationOnlyAroundNavigationInvokers() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 2 != 0;
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bTickWhilePaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 16 != 0;
}
void _Script_NavigationSystem::NavigationSystemV1::set_bTickWhilePaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bSupportRebuilding() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 32 != 0;
}
float& _Script_NavigationSystem::NavigationSystemV1::get_DirtyAreasUpdateFreq() {
    return *(float*)((uintptr_t)this + 0x15bc);
}
void _Script_NavigationSystem::NavigationSystemV1::set_bSupportRebuilding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bInitialBuildingLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 64 != 0;
}
void _Script_NavigationSystem::NavigationSystemV1::set_bInitialBuildingLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_NavigationSystem::NavigationSystemV1::set_bSkipAgentHeightCheckWhenPickingNavData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::NavigationSystemV1::set_bGenerateNavigationOnlyAroundNavigationInvokers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::NavigationSystemV1::NavigationRaycast(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& RayStart, _Script_CoreUObject::Vector& RayEnd, _Script_CoreUObject::Vector& HitLocation, void* FilterClass, _Script_Engine::Controller* Querier) {
    return;
}
float& _Script_NavigationSystem::NavigationSystemV1::get_ActiveTilesUpdateInterval() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_NavigationSystem::NavigationSystemV1::get_DirtyAreaWarningSizeThreshold() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_SupportedAgentsMask() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_NavDataSet() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_NavDataRegistrationQueue() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_OnNavigationGenerationFinishedDelegate() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_OperationMode() {
    return (void*)((uintptr_t)this + 0x1bc);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationSystemV1::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationSystemV1");
    return result;
}
void _Script_NavigationSystem::NavigationSystemV1::SimpleMoveToLocation(_Script_Engine::Controller* Controller, _Script_CoreUObject::Vector& Goal) {
    return;
}
void _Script_NavigationSystem::NavigationSystemV1::SimpleMoveToActor(_Script_Engine::Controller* Controller, _Script_Engine::Actor* Goal) {
    return;
}
void _Script_NavigationSystem::NavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs) {
    return;
}
void _Script_NavigationSystem::NavigationSystemV1::SetGeometryGatheringMode(void* NewMode) {
    return;
}
void _Script_NavigationSystem::NavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount() {
    return;
}
void _Script_NavigationSystem::NavigationSystemV1::RegisterNavigationInvoker(_Script_Engine::Actor* Invoker, float TileGenerationRadius, float TileRemovalRadius) {
    return;
}
void _Script_NavigationSystem::NavigationSystemV1::OnNavigationBoundsUpdated(_Script_NavigationSystem::NavMeshBoundsVolume* NavVolume) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_ReplaceAreaInOctreeData(_Script_CoreUObject::Object* Object, void* OldArea, void* NewArea) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& ProjectedLocation, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_GetRandomLocationInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::IsNavigationBeingBuiltOrLocked(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::IsNavigationBeingBuilt(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_CoreUObject::Vector _Script_NavigationSystem::NavigationSystemV1::GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
_Script_CoreUObject::Vector _Script_NavigationSystem::NavigationSystemV1::GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
void* _Script_NavigationSystem::NavigationSystemV1::GetPathLength(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathLength, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
void* _Script_NavigationSystem::NavigationSystemV1::GetPathCost(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathCost, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
_Script_NavigationSystem::NavigationSystemV1* _Script_NavigationSystem::NavigationSystemV1::GetNavigationSystem(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_NavigationSystem::NavigationPath* _Script_NavigationSystem::NavigationSystemV1::FindPathToLocationSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, _Script_Engine::Actor* PathfindingContext, void* FilterClass) {
    return;
}
