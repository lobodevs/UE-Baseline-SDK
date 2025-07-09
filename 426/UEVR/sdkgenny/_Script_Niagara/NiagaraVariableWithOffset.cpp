#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableBase.hpp"
#include "NiagaraVariableWithOffset.hpp"
int32_t& _Script_Niagara::NiagaraVariableWithOffset::get_Offset() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableWithOffset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableWithOffset");
    return result;
}
