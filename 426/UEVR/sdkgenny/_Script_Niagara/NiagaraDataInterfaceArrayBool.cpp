#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceArray.hpp"
#include "NiagaraDataInterfaceArrayBool.hpp"
void* _Script_Niagara::NiagaraDataInterfaceArrayBool::get_BoolData() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceArrayBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceArrayBool");
    return result;
}
