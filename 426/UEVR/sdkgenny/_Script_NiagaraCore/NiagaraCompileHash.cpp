#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraCompileHash.hpp"
void* _Script_NiagaraCore::NiagaraCompileHash::get_DataHash() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_NiagaraCore::NiagaraCompileHash::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NiagaraCore.NiagaraCompileHash");
    return result;
}
