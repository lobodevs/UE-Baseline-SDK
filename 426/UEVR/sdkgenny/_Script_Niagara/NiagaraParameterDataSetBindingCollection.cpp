#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraParameterDataSetBindingCollection.hpp"
void* _Script_Niagara::NiagaraParameterDataSetBindingCollection::get_FloatOffsets() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraParameterDataSetBindingCollection::get_Int32Offsets() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParameterDataSetBindingCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraParameterDataSetBindingCollection");
    return result;
}
