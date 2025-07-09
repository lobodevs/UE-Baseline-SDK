#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPreviewAxis_InterpParamBase.hpp"
#include "NiagaraPreviewAxis_InterpParamFloat.hpp"
float& _Script_Niagara::NiagaraPreviewAxis_InterpParamFloat::get_Min() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Niagara::NiagaraPreviewAxis_InterpParamFloat::get_Max() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewAxis_InterpParamFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat");
    return result;
}
