#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraTypeDefinitionHandle.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraTypeDefinitionHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraTypeDefinitionHandle");
    return result;
}
int32_t& _Script_Niagara::NiagaraTypeDefinitionHandle::get_RegisteredTypeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
