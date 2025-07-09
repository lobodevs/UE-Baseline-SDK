#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
#include "NiagaraDataInterfaceVectorCurve.hpp"
void* _Script_Niagara::NiagaraDataInterfaceVectorCurve::get_XCurve() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraDataInterfaceVectorCurve::get_YCurve() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::NiagaraDataInterfaceVectorCurve::get_ZCurve() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceVectorCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceVectorCurve");
    return result;
}
