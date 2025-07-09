#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraLightRendererProperties.hpp"
#include "NiagaraRendererProperties.hpp"
void* _Script_Niagara::NiagaraLightRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x148);
}
bool _Script_Niagara::NiagaraLightRendererProperties::get_bUseInverseSquaredFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
float& _Script_Niagara::NiagaraLightRendererProperties::get_RadiusScale() {
    return *(float*)((uintptr_t)this + 0x84);
}
void _Script_Niagara::NiagaraLightRendererProperties::set_bUseInverseSquaredFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraLightRendererProperties::get_bAffectsTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraLightRendererProperties::set_bAffectsTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_ColorAdd() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_LightRenderingEnabledBinding() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_LightExponentBinding() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_RadiusBinding() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_VolumetricScatteringBinding() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraLightRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraLightRendererProperties");
    return result;
}
