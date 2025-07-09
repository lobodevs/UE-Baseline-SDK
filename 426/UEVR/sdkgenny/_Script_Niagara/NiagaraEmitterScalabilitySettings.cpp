#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterScalabilitySettings.hpp"
void* _Script_Niagara::NiagaraEmitterScalabilitySettings::get_Platforms() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Niagara::NiagaraEmitterScalabilitySettings::get_bScaleSpawnCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
float& _Script_Niagara::NiagaraEmitterScalabilitySettings::get_SpawnCountScale() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_Niagara::NiagaraEmitterScalabilitySettings::set_bScaleSpawnCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterScalabilitySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterScalabilitySettings");
    return result;
}
