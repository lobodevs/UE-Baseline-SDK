#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableDataInterfaceBinding.hpp"
void* _Script_Niagara::NiagaraVariableDataInterfaceBinding::get_BoundVariable() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableDataInterfaceBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableDataInterfaceBinding");
    return result;
}
