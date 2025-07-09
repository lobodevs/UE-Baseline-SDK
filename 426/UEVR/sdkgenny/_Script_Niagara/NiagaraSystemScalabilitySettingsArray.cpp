#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSystemScalabilitySettingsArray.hpp"
void* _Script_Niagara::NiagaraSystemScalabilitySettingsArray::get_Settings() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystemScalabilitySettingsArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSystemScalabilitySettingsArray");
    return result;
}
