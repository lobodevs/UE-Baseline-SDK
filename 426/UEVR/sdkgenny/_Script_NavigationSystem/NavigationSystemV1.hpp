#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\NavigationSystemBase.hpp"
namespace _Script_NavigationSystem {
struct NavigationData;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_NavigationSystem {
struct NavigationPath;
}
namespace _Script_NavigationSystem {
struct NavMeshBoundsVolume;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationSystemV1 : public _Script_Engine::NavigationSystemBase {
    private: char pad_28[0x15b8]; public:
    _Script_NavigationSystem::NavigationData*& get_MainNavData();
    _Script_NavigationSystem::NavigationData*& get_AbstractNavData();
    void* get_DefaultAgentName();
    void* get_CrowdManagerClass();
    bool get_bAutoCreateNavigationData();
    void set_bAutoCreateNavigationData(bool value);
    bool get_bSpawnNavDataInNavBoundsLevel();
    void set_bSpawnNavDataInNavBoundsLevel(bool value);
    bool get_bAllowClientSideNavigation();
    void set_bAllowClientSideNavigation(bool value);
    bool get_bShouldDiscardSubLevelNavData();
    void set_bShouldDiscardSubLevelNavData(bool value);
    bool get_bTickWhilePaused();
    void set_bTickWhilePaused(bool value);
    bool get_bSupportRebuilding();
    void set_bSupportRebuilding(bool value);
    bool get_bInitialBuildingLocked();
    void set_bInitialBuildingLocked(bool value);
    bool get_bSkipAgentHeightCheckWhenPickingNavData();
    void set_bSkipAgentHeightCheckWhenPickingNavData(bool value);
    bool get_bGenerateNavigationOnlyAroundNavigationInvokers();
    void set_bGenerateNavigationOnlyAroundNavigationInvokers(bool value);
    float& get_ActiveTilesUpdateInterval();
    void* get_DataGatheringMode();
    float& get_DirtyAreaWarningSizeThreshold();
    void* get_SupportedAgents();
    void* get_SupportedAgentsMask();
    void* get_NavDataSet();
    void* get_NavDataRegistrationQueue();
    void* get_OnNavDataRegisteredEvent();
    void* get_OnNavigationGenerationFinishedDelegate();
    void* get_OperationMode();
    float& get_DirtyAreasUpdateFreq();
    static _Script_CoreUObject::Class* static_class();
    void UnregisterNavigationInvoker(_Script_Engine::Actor* Invoker);
    void SimpleMoveToLocation(_Script_Engine::Controller* Controller, _Script_CoreUObject::Vector& Goal);
    void SimpleMoveToActor(_Script_Engine::Controller* Controller, _Script_Engine::Actor* Goal);
    void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);
    void SetGeometryGatheringMode(void* NewMode);
    void ResetMaxSimultaneousTileGenerationJobsCount();
    void RegisterNavigationInvoker(_Script_Engine::Actor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    _Script_CoreUObject::Vector ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent);
    void OnNavigationBoundsUpdated(_Script_NavigationSystem::NavMeshBoundsVolume* NavVolume);
    bool NavigationRaycast(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& RayStart, _Script_CoreUObject::Vector& RayEnd, _Script_CoreUObject::Vector& HitLocation, void* FilterClass, _Script_Engine::Controller* Querier);
    bool K2_ReplaceAreaInOctreeData(_Script_CoreUObject::Object* Object, void* OldArea, void* NewArea);
    bool K2_ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& ProjectedLocation, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent);
    bool K2_GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    bool K2_GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    bool K2_GetRandomLocationInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    bool IsNavigationBeingBuiltOrLocked(_Script_CoreUObject::Object* WorldContextObject);
    bool IsNavigationBeingBuilt(_Script_CoreUObject::Object* WorldContextObject);
    _Script_CoreUObject::Vector GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    _Script_CoreUObject::Vector GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    void* GetPathLength(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathLength, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    void* GetPathCost(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathCost, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    _Script_NavigationSystem::NavigationSystemV1* GetNavigationSystem(_Script_CoreUObject::Object* WorldContextObject);
    _Script_NavigationSystem::NavigationPath* FindPathToLocationSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, _Script_Engine::Actor* PathfindingContext, void* FilterClass);
    _Script_NavigationSystem::NavigationPath* FindPathToActorSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_Engine::Actor* GoalActor, float TetherDistance, _Script_Engine::Actor* PathfindingContext, void* FilterClass);
}; // Size: 0x15e0
#pragma pack(pop)
}
