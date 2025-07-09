#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraComponentPropertyBinding.hpp"
void* _Script_Niagara::NiagaraComponentPropertyBinding::get_AttributeBinding() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraComponentPropertyBinding::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraComponentPropertyBinding::get_PropertyType() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Niagara::NiagaraComponentPropertyBinding::get_MetadataSetterName() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraComponentPropertyBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraComponentPropertyBinding");
    return result;
}
void* _Script_Niagara::NiagaraComponentPropertyBinding::get_WritableValue() {
    return (void*)((uintptr_t)this + 0x78);
}
