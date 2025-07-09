#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TemplateSequenceBindingOverrideData.hpp"
bool _Script_TemplateSequence::TemplateSequenceBindingOverrideData::get_bOverridesDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void* _Script_TemplateSequence::TemplateSequenceBindingOverrideData::get_Object() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_TemplateSequence::TemplateSequenceBindingOverrideData::set_bOverridesDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequenceBindingOverrideData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/TemplateSequence.TemplateSequenceBindingOverrideData");
    return result;
}
