#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfacePlatformSet.hpp"
void* _Script_Niagara::NiagaraDataInterfacePlatformSet::get_Platforms() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfacePlatformSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfacePlatformSet");
    return result;
}
