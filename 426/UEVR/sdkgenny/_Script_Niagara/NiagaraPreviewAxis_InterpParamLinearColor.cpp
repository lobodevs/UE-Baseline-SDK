#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPreviewAxis_InterpParamBase.hpp"
#include "NiagaraPreviewAxis_InterpParamLinearColor.hpp"
void* _Script_Niagara::NiagaraPreviewAxis_InterpParamLinearColor::get_Min() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewAxis_InterpParamLinearColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
    return result;
}
void* _Script_Niagara::NiagaraPreviewAxis_InterpParamLinearColor::get_Max() {
    return (void*)((uintptr_t)this + 0x48);
}
