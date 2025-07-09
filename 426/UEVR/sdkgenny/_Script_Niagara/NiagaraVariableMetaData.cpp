#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableMetaData.hpp"
int32_t& _Script_Niagara::NiagaraVariableMetaData::get_EditorSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_Description() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_EditCondition() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Niagara::NiagaraVariableMetaData::get_bAdvancedDisplay() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraVariableMetaData::get_CategoryName() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_Niagara::NiagaraVariableMetaData::set_bAdvancedDisplay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraVariableMetaData::get_bInlineEditConditionToggle() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraVariableMetaData::get_Usage() {
    return (void*)((uintptr_t)this + 0xd0);
}
void _Script_Niagara::NiagaraVariableMetaData::set_bInlineEditConditionToggle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_VisibleCondition() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_PropertyMetaData() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_ParentAttribute() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_ScopeName() {
    return (void*)((uintptr_t)this + 0xc8);
}
bool _Script_Niagara::NiagaraVariableMetaData::get_bIsStaticSwitch() {
    return (*(uint8_t*)((uintptr_t)this + 0xd4 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVariableMetaData::set_bIsStaticSwitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Niagara::NiagaraVariableMetaData::get_StaticSwitchDefaultValue() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
bool _Script_Niagara::NiagaraVariableMetaData::get_bAddedToNodeGraphDeepCopy() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVariableMetaData::set_bAddedToNodeGraphDeepCopy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraVariableMetaData::get_bOutputIsPersistent() {
    return (*(uint8_t*)((uintptr_t)this + 0xdd + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVariableMetaData::set_bOutputIsPersistent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdd + 0);
    *(uint8_t*)((uintptr_t)this + 0xdd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_CachedNamespacelessVariableName() {
    return (void*)((uintptr_t)this + 0xe0);
}
bool _Script_Niagara::NiagaraVariableMetaData::get_bCreatedInSystemEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVariableMetaData::set_bCreatedInSystemEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraVariableMetaData::get_bUseLegacyNameString() {
    return (*(uint8_t*)((uintptr_t)this + 0xe9 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVariableMetaData::set_bUseLegacyNameString(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableMetaData");
    return result;
}
