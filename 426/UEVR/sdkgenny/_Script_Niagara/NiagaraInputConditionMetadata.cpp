#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraInputConditionMetadata.hpp"
void* _Script_Niagara::NiagaraInputConditionMetadata::get_TargetValues() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraInputConditionMetadata::get_InputName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraInputConditionMetadata::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraInputConditionMetadata");
    return result;
}
