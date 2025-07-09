#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterScalabilityOverride.hpp"
#include "NiagaraEmitterScalabilitySettings.hpp"
bool _Script_Niagara::NiagaraEmitterScalabilityOverride::get_bOverrideSpawnCountScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraEmitterScalabilityOverride::set_bOverrideSpawnCountScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterScalabilityOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterScalabilityOverride");
    return result;
}
