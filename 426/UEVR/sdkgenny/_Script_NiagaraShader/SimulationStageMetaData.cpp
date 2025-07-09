#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SimulationStageMetaData.hpp"
void* _Script_NiagaraShader::SimulationStageMetaData::get_SimulationStageName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_NiagaraShader::SimulationStageMetaData::get_IterationSource() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_NiagaraShader::SimulationStageMetaData::get_bSpawnOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_NiagaraShader::SimulationStageMetaData::set_bSpawnOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NiagaraShader::SimulationStageMetaData::get_bWritesParticles() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
int32_t& _Script_NiagaraShader::SimulationStageMetaData::get_MinStage() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void _Script_NiagaraShader::SimulationStageMetaData::set_bWritesParticles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NiagaraShader::SimulationStageMetaData::get_bPartialParticleUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
void _Script_NiagaraShader::SimulationStageMetaData::set_bPartialParticleUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_NiagaraShader::SimulationStageMetaData::get_OutputDestinations() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_NiagaraShader::SimulationStageMetaData::get_MaxStage() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_NiagaraShader::SimulationStageMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NiagaraShader.SimulationStageMetaData");
    return result;
}
