#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceColorCurve.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_RedCurve() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_GreenCurve() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_BlueCurve() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_AlphaCurve() {
    return (void*)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceColorCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceColorCurve");
    return result;
}
