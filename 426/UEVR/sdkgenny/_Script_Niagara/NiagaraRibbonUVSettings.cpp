#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraRibbonUVSettings.hpp"
bool _Script_Niagara::NiagaraRibbonUVSettings::get_bEnablePerParticleUOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraRibbonUVSettings::get_LeadingEdgeMode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraRibbonUVSettings::get_Offset() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraRibbonUVSettings::get_TrailingEdgeMode() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_Niagara::NiagaraRibbonUVSettings::get_TilingLength() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Niagara::NiagaraRibbonUVSettings::get_DistributionMode() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraRibbonUVSettings::get_Scale() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_Niagara::NiagaraRibbonUVSettings::set_bEnablePerParticleUOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraRibbonUVSettings::get_bEnablePerParticleVRangeOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraRibbonUVSettings::set_bEnablePerParticleVRangeOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraRibbonUVSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraRibbonUVSettings");
    return result;
}
