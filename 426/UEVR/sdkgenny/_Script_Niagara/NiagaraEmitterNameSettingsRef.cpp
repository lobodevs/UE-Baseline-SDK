#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterNameSettingsRef.hpp"
void* _Script_Niagara::NiagaraEmitterNameSettingsRef::get_SystemName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraEmitterNameSettingsRef::get_EmitterName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterNameSettingsRef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterNameSettingsRef");
    return result;
}
