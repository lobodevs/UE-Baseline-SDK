#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraScript.hpp"
#include "NiagaraSimulationStageBase.hpp"
#include "..\_Script_NiagaraCore\NiagaraMergeable.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSimulationStageBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSimulationStageBase");
    return result;
}
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraSimulationStageBase::get_Script() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x28);
}
void _Script_Niagara::NiagaraSimulationStageBase::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraSimulationStageBase::get_SimulationStageName() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Niagara::NiagaraSimulationStageBase::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
