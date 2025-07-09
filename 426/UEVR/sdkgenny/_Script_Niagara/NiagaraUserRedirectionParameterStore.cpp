#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraParameterStore.hpp"
#include "NiagaraUserRedirectionParameterStore.hpp"
void* _Script_Niagara::NiagaraUserRedirectionParameterStore::get_UserParameterRedirects() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraUserRedirectionParameterStore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraUserRedirectionParameterStore");
    return result;
}
