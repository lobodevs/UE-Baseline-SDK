#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VariantDependency.hpp"
void* _Script_VariantManagerContent::VariantDependency::get_VariantSet() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_VariantManagerContent::VariantDependency::get_Variant() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_VariantManagerContent::VariantDependency::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_VariantManagerContent::VariantDependency::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::VariantDependency::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/VariantManagerContent.VariantDependency");
    return result;
}
