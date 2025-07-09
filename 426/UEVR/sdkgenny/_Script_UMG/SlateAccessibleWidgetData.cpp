#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SlateAccessibleWidgetData.hpp"
void* _Script_UMG::SlateAccessibleWidgetData::get_AccessibleText() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_UMG::SlateAccessibleWidgetData::get_bCanChildrenBeAccessible() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_UMG::SlateAccessibleWidgetData::set_bCanChildrenBeAccessible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::SlateAccessibleWidgetData::get_AccessibleBehavior() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_UMG::SlateAccessibleWidgetData::get_AccessibleTextDelegate() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::SlateAccessibleWidgetData::get_AccessibleSummaryBehavior() {
    return (void*)((uintptr_t)this + 0x2a);
}
void* _Script_UMG::SlateAccessibleWidgetData::get_AccessibleSummaryText() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_UMG::SlateAccessibleWidgetData::get_AccessibleSummaryTextDelegate() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_UMG::SlateAccessibleWidgetData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SlateAccessibleWidgetData");
    return result;
}
