#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSystemScalabilitySettings.hpp"
bool _Script_Niagara::NiagaraSystemScalabilitySettings::get_bCullByMaxTimeWithoutRender() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 8 != 0;
}
void* _Script_Niagara::NiagaraSystemScalabilitySettings::get_Platforms() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Niagara::NiagaraSystemScalabilitySettings::set_bCullMaxInstanceCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraSystemScalabilitySettings::get_bCullByDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSystemScalabilitySettings::set_bCullByDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraSystemScalabilitySettings::get_bCullMaxInstanceCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
bool _Script_Niagara::NiagaraSystemScalabilitySettings::get_bCullPerSystemMaxInstanceCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraSystemScalabilitySettings::set_bCullPerSystemMaxInstanceCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Niagara::NiagaraSystemScalabilitySettings::set_bCullByMaxTimeWithoutRender(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Niagara::NiagaraSystemScalabilitySettings::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Niagara::NiagaraSystemScalabilitySettings::get_MaxInstances() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Niagara::NiagaraSystemScalabilitySettings::get_MaxSystemInstances() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystemScalabilitySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSystemScalabilitySettings");
    return result;
}
float& _Script_Niagara::NiagaraSystemScalabilitySettings::get_MaxTimeWithoutRender() {
    return *(float*)((uintptr_t)this + 0x40);
}
