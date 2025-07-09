#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
void* _Script_Niagara::NiagaraDataInterfaceRWBase::get_OutputShaderStages() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraDataInterfaceRWBase::get_IterationShaderStages() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceRWBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceRWBase");
    return result;
}
