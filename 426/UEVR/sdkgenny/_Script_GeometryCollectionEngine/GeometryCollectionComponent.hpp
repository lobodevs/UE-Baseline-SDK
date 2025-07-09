#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_ChaosSolverEngine {
struct ChaosSolverActor;
}
namespace _Script_ChaosSolverEngine {
struct ChaosPhysicsCollisionInfo;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
struct GeometryCollection;
}
namespace _Script_PhysicsCore {
struct ChaosPhysicalMaterial;
}
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionRepData;
}
namespace _Script_FieldSystemEngine {
struct FieldSystemMetaData;
}
namespace _Script_FieldSystemEngine {
struct FieldNodeBase;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionComponent : public _Script_Engine::MeshComponent {
    private: char pad_470[0x480]; public:
    _Script_ChaosSolverEngine::ChaosSolverActor*& get_ChaosSolverActor();
    _Script_GeometryCollectionEngine::GeometryCollection*& get_RestCollection();
    void* get_InitializationFields();
    bool get_Simulating();
    void set_Simulating(bool value);
    void* get_ObjectType();
    bool get_EnableClustering();
    void set_EnableClustering(bool value);
    int32_t& get_ClusterGroupIndex();
    int32_t& get_MaxClusterLevel();
    void* get_DamageThreshold();
    void* get_ClusterConnectionType();
    int32_t& get_CollisionGroup();
    float& get_CollisionSampleFraction();
    float& get_LinearEtherDrag();
    float& get_AngularEtherDrag();
    _Script_PhysicsCore::ChaosPhysicalMaterial*& get_PhysicalMaterial();
    void* get_InitialVelocityType();
    void* get_InitialLinearVelocity();
    void* get_InitialAngularVelocity();
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysicalMaterialOverride();
    void* get_CacheParameters();
    void* get_NotifyGeometryCollectionPhysicsStateChange();
    void* get_NotifyGeometryCollectionPhysicsLoadingStateChange();
    void* get_OnChaosBreakEvent();
    float& get_DesiredCacheTime();
    bool get_CachePlayback();
    void set_CachePlayback(bool value);
    void* get_OnChaosPhysicsCollision();
    bool get_bNotifyBreaks();
    void set_bNotifyBreaks(bool value);
    bool get_bNotifyCollisions();
    void set_bNotifyCollisions(bool value);
    bool get_bEnableReplication();
    void set_bEnableReplication(bool value);
    bool get_bEnableAbandonAfterLevel();
    void set_bEnableAbandonAfterLevel(bool value);
    int32_t& get_ReplicationAbandonClusterLevel();
    void* get_RepData();
    _Script_Engine::BodySetup*& get_DummyBodySetup();
    static _Script_CoreUObject::Class* static_class();
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void ReceivePhysicsCollision(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& CollisionInfo);
    void OnRep_RepData(_Script_GeometryCollectionEngine::GeometryCollectionRepData& OldData);
    void NetAbandonCluster(int32_t TransformIndex);
    void ApplyPhysicsField(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field);
    void ApplyKinematicField(float Radius, _Script_CoreUObject::Vector Position);
}; // Size: 0x8f0
#pragma pack(pop)
}
