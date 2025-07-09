#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraParameterDataSetBinding.hpp"
int32_t& _Script_Niagara::NiagaraParameterDataSetBinding::get_ParameterOffset() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraParameterDataSetBinding::get_DataSetComponentOffset() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParameterDataSetBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraParameterDataSetBinding");
    return result;
}
