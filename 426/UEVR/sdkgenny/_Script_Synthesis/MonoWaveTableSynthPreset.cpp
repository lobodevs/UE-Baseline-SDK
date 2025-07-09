#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MonoWaveTableSynthPreset.hpp"
int32_t& _Script_Synthesis::MonoWaveTableSynthPreset::get_WaveTableResolution() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_Synthesis::MonoWaveTableSynthPreset::get_PresetName() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Synthesis::MonoWaveTableSynthPreset::set_bNormalizeWaveTables(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Synthesis::MonoWaveTableSynthPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.MonoWaveTableSynthPreset");
    return result;
}
void _Script_Synthesis::MonoWaveTableSynthPreset::set_bLockKeyframesToGridBool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::MonoWaveTableSynthPreset::get_bLockKeyframesToGridBool() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Synthesis::MonoWaveTableSynthPreset::get_WaveTable() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Synthesis::MonoWaveTableSynthPreset::get_LockKeyframesToGrid() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
bool _Script_Synthesis::MonoWaveTableSynthPreset::get_bNormalizeWaveTables() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
