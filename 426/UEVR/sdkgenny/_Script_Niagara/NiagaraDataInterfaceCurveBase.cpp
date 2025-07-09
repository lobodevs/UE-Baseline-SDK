#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
void* _Script_Niagara::NiagaraDataInterfaceCurveBase::get_ShaderLUT() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Niagara::NiagaraDataInterfaceCurveBase::get_bUseLUT() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
float& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_LUTMinTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_LUTMaxTime() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_LUTInvTimeRange() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_LUTNumSamplesMinusOne() {
    return *(float*)((uintptr_t)this + 0x54);
}
void _Script_Niagara::NiagaraDataInterfaceCurveBase::set_bUseLUT(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDataInterfaceCurveBase::get_bExposeCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceCurveBase::set_bExposeCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Niagara::NiagaraDataInterfaceCurveBase::get_ExposedName() {
    return (void*)((uintptr_t)this + 0x5c);
}
_Script_Engine::Texture2D*& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_ExposedTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceCurveBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceCurveBase");
    return result;
}
