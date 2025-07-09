#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraEmitter.hpp"
#include "NiagaraScript.hpp"
bool _Script_Niagara::NiagaraEmitter::get_bDeterminism() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraEmitter::get_bLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraEmitter");
    return result;
}
void _Script_Niagara::NiagaraEmitter::set_bLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraEmitter::set_bDeterminism(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraEmitter::get_MaxDeltaTimePerTick() {
    return *(float*)((uintptr_t)this + 0x10c);
}
int32_t& _Script_Niagara::NiagaraEmitter::get_RandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Niagara::NiagaraEmitter::get_AllocationMode() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraEmitter::get_UpdateScriptProps() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Niagara::NiagaraEmitter::get_PreAllocationCount() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void* _Script_Niagara::NiagaraEmitter::get_SpawnScriptProps() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Niagara::NiagaraEmitter::get_SimTarget() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraEmitter::get_FixedBounds() {
    return (void*)((uintptr_t)this + 0x8c);
}
int32_t& _Script_Niagara::NiagaraEmitter::get_MinDetailLevel() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
int32_t& _Script_Niagara::NiagaraEmitter::get_MaxDetailLevel() {
    return *(int32_t*)((uintptr_t)this + 0xac);
}
void* _Script_Niagara::NiagaraEmitter::get_GlobalSpawnCountScaleOverrides() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Niagara::NiagaraEmitter::get_Platforms() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Niagara::NiagaraEmitter::get_ScalabilityOverrides() {
    return (void*)((uintptr_t)this + 0xf8);
}
bool _Script_Niagara::NiagaraEmitter::get_bInterpolatedSpawning() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bInterpolatedSpawning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bUseMinDetailLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 4 != 0;
}
bool _Script_Niagara::NiagaraEmitter::get_bFixedBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bFixedBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Niagara::NiagaraEmitter::set_bUseMinDetailLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bUseMaxDetailLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bUseMaxDetailLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bOverrideGlobalSpawnCountScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 16 != 0;
}
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraEmitter::get_GPUComputeScript() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x1b0);
}
void _Script_Niagara::NiagaraEmitter::set_bOverrideGlobalSpawnCountScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bRequiresPersistentIDs() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 32 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bRequiresPersistentIDs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bCombineEventSpawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 64 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bCombineEventSpawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Niagara::NiagaraEmitter::get_DefaultShaderStageIndex() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Niagara::NiagaraEmitter::get_MaxUpdateIterations() {
    return (void*)((uintptr_t)this + 0x114);
}
bool _Script_Niagara::NiagaraEmitter::get_bSimulationStagesEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraEmitter::get_SpawnStages() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_Niagara::NiagaraEmitter::set_bSimulationStagesEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bDeprecatedShaderStagesEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 2 != 0;
}
bool _Script_Niagara::NiagaraEmitter::get_bLimitDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bDeprecatedShaderStagesEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Niagara::NiagaraEmitter::set_bLimitDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Niagara::NiagaraEmitter::get_UniqueEmitterName() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Niagara::NiagaraEmitter::get_EventHandlerScriptProps() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Niagara::NiagaraEmitter::get_RendererProperties() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Niagara::NiagaraEmitter::get_SimulationStages() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Niagara::NiagaraEmitter::get_SharedEventGeneratorIds() {
    return (void*)((uintptr_t)this + 0x1b8);
}
