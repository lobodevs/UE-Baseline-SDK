#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSystemScalabilityOverrides.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystemScalabilityOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSystemScalabilityOverrides");
    return result;
}
void* _Script_Niagara::NiagaraSystemScalabilityOverrides::get_Overrides() {
    return (void*)((uintptr_t)this + 0x0);
}
