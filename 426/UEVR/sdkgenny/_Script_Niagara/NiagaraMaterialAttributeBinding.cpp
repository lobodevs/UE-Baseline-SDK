#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraMaterialAttributeBinding.hpp"
void* _Script_Niagara::NiagaraMaterialAttributeBinding::get_MaterialParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraMaterialAttributeBinding::get_NiagaraVariable() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMaterialAttributeBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraMaterialAttributeBinding");
    return result;
}
void* _Script_Niagara::NiagaraMaterialAttributeBinding::get_ResolvedNiagaraVariable() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Niagara::NiagaraMaterialAttributeBinding::get_NiagaraChildVariable() {
    return (void*)((uintptr_t)this + 0x20);
}
