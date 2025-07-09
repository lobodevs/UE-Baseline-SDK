#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraVariant.hpp"
_Script_CoreUObject::Object*& _Script_Niagara::NiagaraVariant::get_Object() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariant::get_CurrentMode() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_Niagara::NiagaraDataInterface*& _Script_Niagara::NiagaraVariant::get_DataInterface() {
    return *(_Script_Niagara::NiagaraDataInterface**)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraVariant::get_Bytes() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariant");
    return result;
}
