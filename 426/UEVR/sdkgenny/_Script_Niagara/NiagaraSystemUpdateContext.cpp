#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSystemUpdateContext.hpp"
void* _Script_Niagara::NiagaraSystemUpdateContext::get_ComponentsToNotifySimDestroy() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Niagara::NiagaraSystemUpdateContext::get_ComponentsToReset() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraSystemUpdateContext::get_ComponentsToReInit() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraSystemUpdateContext::get_SystemSimsToDestroy() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystemUpdateContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSystemUpdateContext");
    return result;
}
