#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraParameterScopeInfo.hpp"
void* _Script_Niagara::NiagaraParameterScopeInfo::get_NamespaceString() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraParameterScopeInfo::get_Scope() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParameterScopeInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraParameterScopeInfo");
    return result;
}
