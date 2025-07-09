#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterScalabilitySettingsArray.hpp"
void* _Script_Niagara::NiagaraEmitterScalabilitySettingsArray::get_Settings() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterScalabilitySettingsArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray");
    return result;
}
