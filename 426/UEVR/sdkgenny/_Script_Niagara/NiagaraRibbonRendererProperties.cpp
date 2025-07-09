#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "NiagaraRendererProperties.hpp"
#include "NiagaraRibbonRendererProperties.hpp"
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_MaterialUserParamBinding() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_Engine::MaterialInterface*& _Script_Niagara::NiagaraRibbonRendererProperties::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x80);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DrawDirection() {
    return (void*)((uintptr_t)this + 0xf4);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV0Settings() {
    return (void*)((uintptr_t)this + 0xac);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV1Settings() {
    return (void*)((uintptr_t)this + 0xd0);
}
float& _Script_Niagara::NiagaraRibbonRendererProperties::get_CurveTension() {
    return *(float*)((uintptr_t)this + 0xf8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_TessellationMode() {
    return (void*)((uintptr_t)this + 0xfc);
}
int32_t& _Script_Niagara::NiagaraRibbonRendererProperties::get_TessellationFactor() {
    return *(int32_t*)((uintptr_t)this + 0x100);
}
bool _Script_Niagara::NiagaraRibbonRendererProperties::get_bUseConstantFactor() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraRibbonRendererProperties::set_bUseConstantFactor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraRibbonRendererProperties::get_TessellationAngle() {
    return *(float*)((uintptr_t)this + 0x108);
}
bool _Script_Niagara::NiagaraRibbonRendererProperties::get_bScreenSpaceTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x10c + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraRibbonRendererProperties::set_bScreenSpaceTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10c + 0);
    *(uint8_t*)((uintptr_t)this + 0x10c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonTwistBinding() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonWidthBinding() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonFacingBinding() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonIdBinding() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonLinkOrderBinding() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x428);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x530);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x588);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_U0OverrideBinding() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_V0RangeOverrideBinding() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_U1OverrideBinding() {
    return (void*)((uintptr_t)this + 0x690);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_V1RangeOverrideBinding() {
    return (void*)((uintptr_t)this + 0x6e8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraRibbonRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraRibbonRendererProperties");
    return result;
}
