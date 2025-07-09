#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PropertyValue.hpp"
void _Script_VariantManagerContent::PropertyValue::set_bHasRecordedData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_VariantManagerContent::PropertyValue::get_CapturedPropSegments() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_VariantManagerContent::PropertyValue::get_Properties() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_VariantManagerContent::PropertyValue::get_PropertyIndices() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_VariantManagerContent::PropertyValue::get_FullDisplayString() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_VariantManagerContent::PropertyValue::get_PropertySetterName() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_VariantManagerContent::PropertyValue::get_PropertySetterParameterDefaults() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_VariantManagerContent::PropertyValue::get_bHasRecordedData() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void* _Script_VariantManagerContent::PropertyValue::get_LeafPropertyClass() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_VariantManagerContent::PropertyValue::get_ValueBytes() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_VariantManagerContent::PropertyValue::get_PropCategory() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::PropertyValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.PropertyValue");
    return result;
}
bool _Script_VariantManagerContent::PropertyValue::HasRecordedData() {
    return;
}
void* _Script_VariantManagerContent::PropertyValue::GetPropertyTooltip() {
    return;
}
void* _Script_VariantManagerContent::PropertyValue::GetFullDisplayString() {
    return;
}
