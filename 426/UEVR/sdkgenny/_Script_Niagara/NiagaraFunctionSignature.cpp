#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraFunctionSignature.hpp"
void* _Script_Niagara::NiagaraFunctionSignature::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraFunctionSignature::get_OwnerName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraFunctionSignature::get_Inputs() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraFunctionSignature::get_Outputs() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bRequiresContext() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraFunctionSignature::set_bRequiresContext(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bRequiresExecPin() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraFunctionSignature::set_bRequiresExecPin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bMemberFunction() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraFunctionSignature::set_bMemberFunction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bExperimental() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraFunctionSignature::set_bExperimental(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bSupportsCPU() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 16 != 0;
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bSupportsGPU() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 32 != 0;
}
void _Script_Niagara::NiagaraFunctionSignature::set_bSupportsCPU(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Niagara::NiagaraFunctionSignature::set_bSupportsGPU(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bWriteFunction() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 64 != 0;
}
void _Script_Niagara::NiagaraFunctionSignature::set_bWriteFunction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bSoftDeprecatedFunction() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 128 != 0;
}
void _Script_Niagara::NiagaraFunctionSignature::set_bSoftDeprecatedFunction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
int32_t& _Script_Niagara::NiagaraFunctionSignature::get_ModuleUsageBitmask() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Niagara::NiagaraFunctionSignature::get_ContextStageMinIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Niagara::NiagaraFunctionSignature::get_ContextStageMaxIndex() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_Niagara::NiagaraFunctionSignature::get_FunctionSpecifiers() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraFunctionSignature::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraFunctionSignature");
    return result;
}
