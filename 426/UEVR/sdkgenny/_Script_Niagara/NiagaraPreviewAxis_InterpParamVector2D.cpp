#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPreviewAxis_InterpParamBase.hpp"
#include "NiagaraPreviewAxis_InterpParamVector2D.hpp"
void* _Script_Niagara::NiagaraPreviewAxis_InterpParamVector2D::get_Min() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraPreviewAxis_InterpParamVector2D::get_Max() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewAxis_InterpParamVector2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D");
    return result;
}
