#include "..\FUObjectArray.hpp"
#include "NiagaraDataInterfaceChaosDestruction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Niagara\NiagaraDataInterface.hpp"
float& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SpreadAngleMax() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
int32_t& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_DataProcessFrequency() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_DataSourceType() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_TimeStampOfLastProcessedData() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_ChaosSolverActorSet() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_MaxNumberOfDataEntriesToSpawn() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
bool _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_DoSpawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
float& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SpawnChance() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::set_DoSpawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SpawnMultiplierMinMax() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_ImpulseToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SpeedToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xac);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_MassToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_ExtentMinToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_ExtentMaxToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xc4);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_VolumeToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SolverTimeToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xd4);
}
int32_t& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LastSpawnedPointID() {
    return *(int32_t*)((uintptr_t)this + 0x1d0);
}
int32_t& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SurfaceTypeToSpawn() {
    return *(int32_t*)((uintptr_t)this + 0xdc);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LocationFilteringMode() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LocationXToSpawn() {
    return (void*)((uintptr_t)this + 0xe1);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LocationXToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xe4);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LocationYToSpawn() {
    return (void*)((uintptr_t)this + 0xec);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LocationYToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LocationZToSpawn() {
    return (void*)((uintptr_t)this + 0xf8);
}
void _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::set_bGetExternalTrailingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x189 + 0);
    *(uint8_t*)((uintptr_t)this + 0x189 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LocationZToSpawnMinMax() {
    return (void*)((uintptr_t)this + 0xfc);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_DataSortingType() {
    return (void*)((uintptr_t)this + 0x104);
}
bool _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_bGetExternalCollisionData() {
    return (*(uint8_t*)((uintptr_t)this + 0x105 + 0)) & 1 != 0;
}
float& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_MaxLatency() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
void _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::set_bGetExternalCollisionData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x105 + 0);
    *(uint8_t*)((uintptr_t)this + 0x105 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_DoSpatialHash() {
    return (*(uint8_t*)((uintptr_t)this + 0x106 + 0)) & 1 != 0;
}
void _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::set_DoSpatialHash(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x106 + 0);
    *(uint8_t*)((uintptr_t)this + 0x106 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction");
    return result;
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SpatialHashVolumeMin() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_RandomVelocityGenerationType() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SpatialHashVolumeMax() {
    return (void*)((uintptr_t)this + 0x114);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SpatialHashVolumeCellSize() {
    return (void*)((uintptr_t)this + 0x120);
}
int32_t& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_MaxDataPerCell() {
    return *(int32_t*)((uintptr_t)this + 0x12c);
}
bool _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_bApplyMaterialsFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x130 + 0)) & 1 != 0;
}
void _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::set_bApplyMaterialsFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x130 + 0);
    *(uint8_t*)((uintptr_t)this + 0x130 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_ChaosBreakingMaterialSet() {
    return (void*)((uintptr_t)this + 0x138);
}
float& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_InheritedVelocityMultiplier() {
    return *(float*)((uintptr_t)this + 0x194);
}
bool _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_bGetExternalBreakingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::set_bGetExternalBreakingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_bGetExternalTrailingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x189 + 0)) & 1 != 0;
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_VelocityOffsetMax() {
    return (void*)((uintptr_t)this + 0x1b4);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_RandomPositionMagnitudeMinMax() {
    return (void*)((uintptr_t)this + 0x18c);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_RandomVelocityMagnitudeMinMax() {
    return (void*)((uintptr_t)this + 0x19c);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_VelocityOffsetMin() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_FinalVelocityMagnitudeMinMax() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_DebugType() {
    return (void*)((uintptr_t)this + 0x1cc);
}
float& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_LastSpawnTime() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
float& _Script_ChaosNiagara::NiagaraDataInterfaceChaosDestruction::get_SolverTime() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
