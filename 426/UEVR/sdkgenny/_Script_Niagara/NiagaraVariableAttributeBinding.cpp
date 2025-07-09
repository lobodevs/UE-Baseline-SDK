#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableAttributeBinding.hpp"
void* _Script_Niagara::NiagaraVariableAttributeBinding::get_ParamMapVariable() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariableAttributeBinding::get_BindingSourceMode() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraVariableAttributeBinding::get_DataSetVariable() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Niagara::NiagaraVariableAttributeBinding::set_bBindingExistsOnSource(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraVariableAttributeBinding::get_RootVariable() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Niagara::NiagaraVariableAttributeBinding::get_bBindingExistsOnSource() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraVariableAttributeBinding::get_bIsCachedParticleValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraVariableAttributeBinding::set_bIsCachedParticleValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableAttributeBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableAttributeBinding");
    return result;
}
