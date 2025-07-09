#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVMExecutableData.hpp"
void* _Script_Niagara::NiagaraVMExecutableData::get_DataInterfaceInfo() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_ByteCode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_Attributes() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_OptimizedByteCode() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Niagara::NiagaraVMExecutableData::get_NumTempRegisters() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Niagara::NiagaraVMExecutableData::get_NumUserPtrs() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_ScriptLiterals() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_DataUsage() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_CalledVMExternalFunctions() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_ReadDataSets() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_WriteDataSets() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_StatScopes() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_DIParamInfo() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_LastCompileStatus() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_SimulationStageMetaData() {
    return (void*)((uintptr_t)this + 0xc8);
}
bool _Script_Niagara::NiagaraVMExecutableData::get_bReadsSignificanceIndex() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVMExecutableData::set_bReadsSignificanceIndex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVMExecutableData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVMExecutableData");
    return result;
}
