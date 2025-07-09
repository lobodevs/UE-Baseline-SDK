#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPreviewAxis_InterpParamBase.hpp"
#include "NiagaraPreviewAxis_InterpParamInt32.hpp"
int32_t& _Script_Niagara::NiagaraPreviewAxis_InterpParamInt32::get_Min() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Niagara::NiagaraPreviewAxis_InterpParamInt32::get_Max() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewAxis_InterpParamInt32::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32");
    return result;
}
