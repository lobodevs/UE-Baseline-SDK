#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVMExecutableDataId.hpp"
void* _Script_Niagara::NiagaraVMExecutableDataId::get_ScriptUsageType() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_CompilerVersionID() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Niagara::NiagaraVMExecutableDataId::set_bInterpolatedSpawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_ScriptUsageTypeID() {
    return (void*)((uintptr_t)this + 0x14);
}
bool _Script_Niagara::NiagaraVMExecutableDataId::get_bInterpolatedSpawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 2 != 0;
}
bool _Script_Niagara::NiagaraVMExecutableDataId::get_bUsesRapidIterationParams() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVMExecutableDataId::set_bUsesRapidIterationParams(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraVMExecutableDataId::get_bRequiresPersistentIDs() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraVMExecutableDataId::set_bRequiresPersistentIDs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_BaseScriptID() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_BaseScriptCompileHash() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVMExecutableDataId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVMExecutableDataId");
    return result;
}
