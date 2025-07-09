#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
struct ChaosTrailingEventRequestSettings;
}
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionActor;
}
namespace _Script_GeometryCollectionEngine {
struct ChaosCollisionEventRequestSettings;
}
namespace _Script_GeometryCollectionEngine {
struct ChaosBreakingEventRequestSettings;
}
namespace _Script_ChaosSolverEngine {
struct ChaosSolverActor;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct ChaosDestructionListener : public _Script_Engine::SceneComponent {
    private: char pad_200[0x220]; public:
    bool get_bIsCollisionEventListeningEnabled();
    void set_bIsCollisionEventListeningEnabled(bool value);
    bool get_bIsBreakingEventListeningEnabled();
    void set_bIsBreakingEventListeningEnabled(bool value);
    bool get_bIsTrailingEventListeningEnabled();
    void set_bIsTrailingEventListeningEnabled(bool value);
    void* get_CollisionEventRequestSettings();
    void* get_BreakingEventRequestSettings();
    void* get_TrailingEventRequestSettings();
    void* get_ChaosSolverActors();
    void* get_GeometryCollectionActors();
    void* get_OnCollisionEvents();
    void* get_OnBreakingEvents();
    void* get_OnTrailingEvents();
    static _Script_CoreUObject::Class* static_class();
    void SortTrailingEvents(void*& TrailingEvents, void* SortMethod);
    void SortCollisionEvents(void*& CollisionEvents, void* SortMethod);
    void SortBreakingEvents(void*& BreakingEvents, void* SortMethod);
    void SetTrailingEventRequestSettings(_Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings& InSettings);
    void SetTrailingEventEnabled(bool bIsEnabled);
    void SetCollisionEventRequestSettings(_Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings& InSettings);
    void SetCollisionEventEnabled(bool bIsEnabled);
    void SetBreakingEventRequestSettings(_Script_GeometryCollectionEngine::ChaosBreakingEventRequestSettings& InSettings);
    void SetBreakingEventEnabled(bool bIsEnabled);
    void RemoveGeometryCollectionActor(_Script_GeometryCollectionEngine::GeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(_Script_ChaosSolverEngine::ChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(_Script_GeometryCollectionEngine::GeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(_Script_ChaosSolverEngine::ChaosSolverActor* ChaosSolverActor);
}; // Size: 0x420
#pragma pack(pop)
}
