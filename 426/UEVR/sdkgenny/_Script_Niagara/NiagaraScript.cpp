#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraScript.hpp"
#include "..\_Script_NiagaraShader\NiagaraScriptBase.hpp"
void* _Script_Niagara::NiagaraScript::get_CachedScriptVM() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_Niagara::NiagaraScript::get_RapidIterationParameters() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraScript::get_Usage() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Niagara::NiagaraScript::get_UsageIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Niagara::NiagaraScript::get_UsageId() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraScript::get_ScriptExecutionParamStore() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Niagara::NiagaraScript::get_ScriptExecutionBoundParameters() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Niagara::NiagaraScript::get_CachedScriptVMId() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Niagara::NiagaraScript::get_CachedParameterCollectionReferences() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_Niagara::NiagaraScript::get_CachedDefaultDataInterfaces() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScript::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraScript");
    return result;
}
void _Script_Niagara::NiagaraScript::RaiseOnGPUCompilationComplete() {
    return;
}
