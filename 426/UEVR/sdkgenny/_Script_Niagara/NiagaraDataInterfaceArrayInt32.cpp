#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceArray.hpp"
#include "NiagaraDataInterfaceArrayInt32.hpp"
void* _Script_Niagara::NiagaraDataInterfaceArrayInt32::get_IntData() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceArrayInt32::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceArrayInt32");
    return result;
}
