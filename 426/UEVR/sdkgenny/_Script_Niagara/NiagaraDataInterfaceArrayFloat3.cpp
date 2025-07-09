#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceArray.hpp"
#include "NiagaraDataInterfaceArrayFloat3.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceArrayFloat3::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3");
    return result;
}
void* _Script_Niagara::NiagaraDataInterfaceArrayFloat3::get_FloatData() {
    return (void*)((uintptr_t)this + 0x50);
}
