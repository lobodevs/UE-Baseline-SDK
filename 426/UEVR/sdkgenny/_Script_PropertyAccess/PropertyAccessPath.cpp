#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyAccessPath.hpp"
void _Script_PropertyAccess::PropertyAccessPath::set_bHasEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_PropertyAccess::PropertyAccessPath::get_PathSegmentStartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_PropertyAccess::PropertyAccessPath::get_bHasEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
int32_t& _Script_PropertyAccess::PropertyAccessPath::get_PathSegmentCount() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccessPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyAccess.PropertyAccessPath");
    return result;
}
