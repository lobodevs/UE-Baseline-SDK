#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPreviewAxis.hpp"
#include "NiagaraPreviewAxis_InterpParamBase.hpp"
void* _Script_Niagara::NiagaraPreviewAxis_InterpParamBase::get_Param() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Niagara::NiagaraPreviewAxis_InterpParamBase::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewAxis_InterpParamBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase");
    return result;
}
