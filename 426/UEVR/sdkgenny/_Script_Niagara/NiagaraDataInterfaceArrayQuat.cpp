#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceArray.hpp"
#include "NiagaraDataInterfaceArrayQuat.hpp"
void* _Script_Niagara::NiagaraDataInterfaceArrayQuat::get_QuatData() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceArrayQuat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceArrayQuat");
    return result;
}
