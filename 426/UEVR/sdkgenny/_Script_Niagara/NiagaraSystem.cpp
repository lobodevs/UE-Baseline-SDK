#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\FXSystemAsset.hpp"
#include "NiagaraEffectType.hpp"
#include "NiagaraScript.hpp"
#include "NiagaraSystem.hpp"
bool _Script_Niagara::NiagaraSystem::get_bDumpDebugEmitterInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraSystem::get_bDumpDebugSystemInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSystem::set_bFixedBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraSystem::set_bDumpDebugSystemInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraSystem::set_bDumpDebugEmitterInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraSystem::get_bRequireCurrentFrameData() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraSystem::get_bFixedBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraSystem::get_bHasSystemScriptDIsWithPerInstanceData() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b4 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSystem::set_bRequireCurrentFrameData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Niagara::NiagaraEffectType*& _Script_Niagara::NiagaraSystem::get_EffectType() {
    return *(_Script_Niagara::NiagaraEffectType**)((uintptr_t)this + 0x38);
}
bool _Script_Niagara::NiagaraSystem::get_bOverrideScalabilitySettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSystem::set_bOverrideScalabilitySettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraSystem::get_ScalabilityOverrides() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Niagara::NiagaraSystem::set_bHasSystemScriptDIsWithPerInstanceData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraSystem::get_SystemScalabilityOverrides() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraSystem::get_EmitterHandles() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraSystem::get_ParameterCollectionOverrides() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraSystem::get_SystemSpawnScript() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x88);
}
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraSystem::get_SystemUpdateScript() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x90);
}
void* _Script_Niagara::NiagaraSystem::get_SystemCompiledData() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Niagara::NiagaraSystem::get_ExposedParameters() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_Niagara::NiagaraSystem::get_FixedBounds() {
    return (void*)((uintptr_t)this + 0x388);
}
bool _Script_Niagara::NiagaraSystem::get_bAutoDeactivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a4 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSystem::set_bAutoDeactivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraSystem::get_WarmupTime() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
int32_t& _Script_Niagara::NiagaraSystem::get_WarmupTickCount() {
    return *(int32_t*)((uintptr_t)this + 0x3ac);
}
float& _Script_Niagara::NiagaraSystem::get_WarmupTickDelta() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
void* _Script_Niagara::NiagaraSystem::get_UserDINamesReadInSystemScripts() {
    return (void*)((uintptr_t)this + 0x3b8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSystem");
    return result;
}
