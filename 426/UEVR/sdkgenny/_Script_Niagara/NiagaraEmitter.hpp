#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Niagara {
struct NiagaraScript;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEmitter : public _Script_CoreUObject::Object {
    private: char pad_28[0x278]; public:
    bool get_bLocalSpace();
    void set_bLocalSpace(bool value);
    bool get_bDeterminism();
    void set_bDeterminism(bool value);
    int32_t& get_RandomSeed();
    void* get_AllocationMode();
    int32_t& get_PreAllocationCount();
    void* get_UpdateScriptProps();
    void* get_SpawnScriptProps();
    void* get_SimTarget();
    void* get_FixedBounds();
    int32_t& get_MinDetailLevel();
    int32_t& get_MaxDetailLevel();
    void* get_GlobalSpawnCountScaleOverrides();
    void* get_Platforms();
    void* get_ScalabilityOverrides();
    bool get_bInterpolatedSpawning();
    void set_bInterpolatedSpawning(bool value);
    bool get_bFixedBounds();
    void set_bFixedBounds(bool value);
    bool get_bUseMinDetailLevel();
    void set_bUseMinDetailLevel(bool value);
    bool get_bUseMaxDetailLevel();
    void set_bUseMaxDetailLevel(bool value);
    bool get_bOverrideGlobalSpawnCountScale();
    void set_bOverrideGlobalSpawnCountScale(bool value);
    bool get_bRequiresPersistentIDs();
    void set_bRequiresPersistentIDs(bool value);
    bool get_bCombineEventSpawn();
    void set_bCombineEventSpawn(bool value);
    float& get_MaxDeltaTimePerTick();
    void* get_DefaultShaderStageIndex();
    void* get_MaxUpdateIterations();
    void* get_SpawnStages();
    bool get_bSimulationStagesEnabled();
    void set_bSimulationStagesEnabled(bool value);
    bool get_bDeprecatedShaderStagesEnabled();
    void set_bDeprecatedShaderStagesEnabled(bool value);
    bool get_bLimitDeltaTime();
    void set_bLimitDeltaTime(bool value);
    void* get_UniqueEmitterName();
    void* get_RendererProperties();
    void* get_EventHandlerScriptProps();
    void* get_SimulationStages();
    _Script_Niagara::NiagaraScript*& get_GPUComputeScript();
    void* get_SharedEventGeneratorIds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a0
#pragma pack(pop)
}
