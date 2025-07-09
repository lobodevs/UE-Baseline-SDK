#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "NavigationData.hpp"
#include "NavigationInvokerComponent.hpp"
#include "NavigationTestingActor.hpp"
_Script_Engine::CapsuleComponent*& _Script_NavigationSystem::NavigationTestingActor::get_CapsuleComponent() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x230);
}
_Script_NavigationSystem::NavigationInvokerComponent*& _Script_NavigationSystem::NavigationTestingActor::get_InvokerComponent() {
    return *(_Script_NavigationSystem::NavigationInvokerComponent**)((uintptr_t)this + 0x238);
}
void* _Script_NavigationSystem::NavigationTestingActor::get_QueryingExtent() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Script_NavigationSystem::NavigationTestingActor::set_bDrawDistanceToWall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bActAsNavigationInvoker() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
_Script_NavigationSystem::NavigationData*& _Script_NavigationSystem::NavigationTestingActor::get_MyNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x288);
}
void _Script_NavigationSystem::NavigationTestingActor::set_bActAsNavigationInvoker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_NavigationSystem::NavigationTestingActor::get_NavAgentProps() {
    return (void*)((uintptr_t)this + 0x248);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bShowBestPath() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 32 != 0;
}
void* _Script_NavigationSystem::NavigationTestingActor::get_ProjectedLocation() {
    return (void*)((uintptr_t)this + 0x290);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bProjectedLocationValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bShouldBeVisibleInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_NavigationSystem::NavigationTestingActor::set_bProjectedLocationValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bSearchStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 2 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bSearchStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_NavigationSystem::NavigationTestingActor::set_bPathExist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_NavigationSystem::NavigationTestingActor::get_CostLimitFactor() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
float& _Script_NavigationSystem::NavigationTestingActor::get_MinimumCostLimit() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bBacktracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bBacktracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::NavigationTestingActor::set_bPathSearchOutOfNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bUseHierarchicalPathfinding() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 2 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bUseHierarchicalPathfinding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_NavigationSystem::NavigationTestingActor::get_PathfindingSteps() {
    return *(int32_t*)((uintptr_t)this + 0x2c4);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bGatherDetailedInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bGatherDetailedInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_NavigationSystem::NavigationTestingActor::get_PathCost() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bDrawDistanceToWall() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 8 != 0;
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bShowNodePool() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 16 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bShowNodePool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_NavigationSystem::NavigationTestingActor::set_bShowBestPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bShowDiffWithPreviousStep() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 64 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bShowDiffWithPreviousStep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bShouldBeVisibleInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 128 != 0;
}
void* _Script_NavigationSystem::NavigationTestingActor::get_CostDisplayMode() {
    return (void*)((uintptr_t)this + 0x2ac);
}
void* _Script_NavigationSystem::NavigationTestingActor::get_TextCanvasOffset() {
    return (void*)((uintptr_t)this + 0x2b0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bPathExist() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
_Script_NavigationSystem::NavigationTestingActor*& _Script_NavigationSystem::NavigationTestingActor::get_OtherActor() {
    return *(_Script_NavigationSystem::NavigationTestingActor**)((uintptr_t)this + 0x2c8);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bPathIsPartial() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 2 != 0;
}
void _Script_NavigationSystem::NavigationTestingActor::set_bPathIsPartial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::NavigationTestingActor::get_bPathSearchOutOfNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 4 != 0;
}
float& _Script_NavigationSystem::NavigationTestingActor::get_PathfindingTime() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
void* _Script_NavigationSystem::NavigationTestingActor::get_FilterClass() {
    return (void*)((uintptr_t)this + 0x2d0);
}
int32_t& _Script_NavigationSystem::NavigationTestingActor::get_ShowStepIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2d8);
}
float& _Script_NavigationSystem::NavigationTestingActor::get_OffsetFromCornersDistance() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationTestingActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationTestingActor");
    return result;
}
