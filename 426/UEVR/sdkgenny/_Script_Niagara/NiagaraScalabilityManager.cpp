#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEffectType.hpp"
#include "NiagaraScalabilityManager.hpp"
_Script_Niagara::NiagaraEffectType*& _Script_Niagara::NiagaraScalabilityManager::get_EffectType() {
    return *(_Script_Niagara::NiagaraEffectType**)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraScalabilityManager::get_ManagedComponents() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScalabilityManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScalabilityManager");
    return result;
}
