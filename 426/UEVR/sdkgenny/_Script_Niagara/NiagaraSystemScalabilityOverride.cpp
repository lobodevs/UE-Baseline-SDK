#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSystemScalabilityOverride.hpp"
#include "NiagaraSystemScalabilitySettings.hpp"
void _Script_Niagara::NiagaraSystemScalabilityOverride::set_bOverrideDistanceSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraSystemScalabilityOverride::get_bOverrideDistanceSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraSystemScalabilityOverride::get_bOverrideInstanceCountSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraSystemScalabilityOverride::set_bOverrideInstanceCountSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraSystemScalabilityOverride::get_bOverridePerSystemInstanceCountSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraSystemScalabilityOverride::set_bOverridePerSystemInstanceCountSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraSystemScalabilityOverride::get_bOverrideTimeSinceRendererSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraSystemScalabilityOverride::set_bOverrideTimeSinceRendererSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystemScalabilityOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSystemScalabilityOverride");
    return result;
}
