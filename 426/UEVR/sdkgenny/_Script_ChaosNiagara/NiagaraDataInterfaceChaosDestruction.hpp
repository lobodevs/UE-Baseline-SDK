#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Niagara\NiagaraDataInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosNiagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceChaosDestruction : public _Script_Niagara::NiagaraDataInterface {
    private: char pad_38[0x200]; public:
    void* get_ChaosSolverActorSet();
    void* get_DataSourceType();
    int32_t& get_DataProcessFrequency();
    int32_t& get_MaxNumberOfDataEntriesToSpawn();
    bool get_DoSpawn();
    void set_DoSpawn(bool value);
    void* get_SpawnMultiplierMinMax();
    float& get_SpawnChance();
    void* get_ImpulseToSpawnMinMax();
    void* get_SpeedToSpawnMinMax();
    void* get_MassToSpawnMinMax();
    void* get_ExtentMinToSpawnMinMax();
    void* get_ExtentMaxToSpawnMinMax();
    void* get_VolumeToSpawnMinMax();
    void* get_SolverTimeToSpawnMinMax();
    int32_t& get_SurfaceTypeToSpawn();
    void* get_LocationFilteringMode();
    void* get_LocationXToSpawn();
    void* get_LocationXToSpawnMinMax();
    void* get_LocationYToSpawn();
    void* get_LocationYToSpawnMinMax();
    void* get_LocationZToSpawn();
    void* get_LocationZToSpawnMinMax();
    void* get_DataSortingType();
    bool get_bGetExternalCollisionData();
    void set_bGetExternalCollisionData(bool value);
    bool get_DoSpatialHash();
    void set_DoSpatialHash(bool value);
    void* get_SpatialHashVolumeMin();
    void* get_SpatialHashVolumeMax();
    void* get_SpatialHashVolumeCellSize();
    int32_t& get_MaxDataPerCell();
    bool get_bApplyMaterialsFilter();
    void set_bApplyMaterialsFilter(bool value);
    void* get_ChaosBreakingMaterialSet();
    bool get_bGetExternalBreakingData();
    void set_bGetExternalBreakingData(bool value);
    bool get_bGetExternalTrailingData();
    void set_bGetExternalTrailingData(bool value);
    void* get_RandomPositionMagnitudeMinMax();
    float& get_InheritedVelocityMultiplier();
    void* get_RandomVelocityGenerationType();
    void* get_RandomVelocityMagnitudeMinMax();
    float& get_SpreadAngleMax();
    void* get_VelocityOffsetMin();
    void* get_VelocityOffsetMax();
    void* get_FinalVelocityMagnitudeMinMax();
    float& get_MaxLatency();
    void* get_DebugType();
    int32_t& get_LastSpawnedPointID();
    float& get_LastSpawnTime();
    float& get_SolverTime();
    float& get_TimeStampOfLastProcessedData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
