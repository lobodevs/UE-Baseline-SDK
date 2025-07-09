#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSystemCompiledData.hpp"
void* _Script_Niagara::NiagaraSystemCompiledData::get_SpawnInstanceParamsDataSetCompiledData() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_InstanceParamStore() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_DataSetCompiledData() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_SpawnInstanceEmitterBindings() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_UpdateInstanceParamsDataSetCompiledData() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_SpawnInstanceGlobalBinding() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_SpawnInstanceSystemBinding() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_SpawnInstanceOwnerBinding() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_UpdateInstanceGlobalBinding() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_UpdateInstanceSystemBinding() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_UpdateInstanceOwnerBinding() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_Niagara::NiagaraSystemCompiledData::get_UpdateInstanceEmitterBindings() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystemCompiledData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSystemCompiledData");
    return result;
}
