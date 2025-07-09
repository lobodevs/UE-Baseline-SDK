#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataSetCompiledData.hpp"
bool _Script_Niagara::NiagaraDataSetCompiledData::get_bRequiresPersistentIDs() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraDataSetCompiledData::get_ID() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Niagara::NiagaraDataSetCompiledData::get_Variables() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDataSetCompiledData::get_TotalHalfComponents() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Niagara::NiagaraDataSetCompiledData::get_VariableLayouts() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraDataSetCompiledData::get_TotalFloatComponents() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Niagara::NiagaraDataSetCompiledData::get_TotalInt32Components() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Niagara::NiagaraDataSetCompiledData::set_bRequiresPersistentIDs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDataSetCompiledData::get_SimTarget() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataSetCompiledData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDataSetCompiledData");
    return result;
}
