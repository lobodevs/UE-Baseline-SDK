#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSimulationStageBase.hpp"
#include "NiagaraSimulationStageGeneric.hpp"
void* _Script_Niagara::NiagaraSimulationStageGeneric::get_IterationSource() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Niagara::NiagaraSimulationStageGeneric::set_bSpawnOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Niagara::NiagaraSimulationStageGeneric::get_Iterations() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void* _Script_Niagara::NiagaraSimulationStageGeneric::get_DataInterface() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Niagara::NiagaraSimulationStageGeneric::get_bSpawnOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSimulationStageGeneric::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSimulationStageGeneric");
    return result;
}
bool _Script_Niagara::NiagaraSimulationStageGeneric::get_bDisablePartialParticleUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraSimulationStageGeneric::set_bDisablePartialParticleUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
