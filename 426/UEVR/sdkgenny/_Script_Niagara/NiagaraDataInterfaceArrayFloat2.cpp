#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceArray.hpp"
#include "NiagaraDataInterfaceArrayFloat2.hpp"
void* _Script_Niagara::NiagaraDataInterfaceArrayFloat2::get_FloatData() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceArrayFloat2::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2");
    return result;
}
