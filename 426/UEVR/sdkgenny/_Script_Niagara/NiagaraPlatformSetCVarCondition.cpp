#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPlatformSetCVarCondition.hpp"
float& _Script_Niagara::NiagaraPlatformSetCVarCondition::get_MaxFloat() {
    return *(float*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Niagara::NiagaraPlatformSetCVarCondition::get_MinInt() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_Niagara::NiagaraPlatformSetCVarCondition::get_CVarName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Niagara::NiagaraPlatformSetCVarCondition::get_Value() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraPlatformSetCVarCondition::set_Value(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraPlatformSetCVarCondition::get_bUseMinInt() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
int32_t& _Script_Niagara::NiagaraPlatformSetCVarCondition::get_MaxInt() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
float& _Script_Niagara::NiagaraPlatformSetCVarCondition::get_MinFloat() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Niagara::NiagaraPlatformSetCVarCondition::set_bUseMinInt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraPlatformSetCVarCondition::get_bUseMaxInt() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraPlatformSetCVarCondition::set_bUseMaxInt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraPlatformSetCVarCondition::get_bUseMinFloat() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraPlatformSetCVarCondition::set_bUseMinFloat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraPlatformSetCVarCondition::get_bUseMaxFloat() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraPlatformSetCVarCondition::set_bUseMaxFloat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPlatformSetCVarCondition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraPlatformSetCVarCondition");
    return result;
}
