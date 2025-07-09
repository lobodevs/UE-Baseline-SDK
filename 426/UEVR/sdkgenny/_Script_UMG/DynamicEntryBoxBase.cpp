#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "DynamicEntryBoxBase.hpp"
#include "RadialBoxSettings.hpp"
#include "Widget.hpp"
void* _Script_UMG::DynamicEntryBoxBase::get_EntryHorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_UMG::DynamicEntryBoxBase::get_EntryBoxType() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::DynamicEntryBoxBase::get_EntrySpacing() {
    return (void*)((uintptr_t)this + 0x10c);
}
void* _Script_UMG::DynamicEntryBoxBase::get_SpacingPattern() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::DynamicEntryBoxBase::get_EntrySizeRule() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::DynamicEntryBoxBase::get_RadialBoxSettings() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_UMG::DynamicEntryBoxBase::get_EntryVerticalAlignment() {
    return (void*)((uintptr_t)this + 0x131);
}
int32_t& _Script_UMG::DynamicEntryBoxBase::get_MaxElementSize() {
    return *(int32_t*)((uintptr_t)this + 0x134);
}
void* _Script_UMG::DynamicEntryBoxBase::get_EntryWidgetPool() {
    return (void*)((uintptr_t)this + 0x158);
}
_Script_CoreUObject::Class* _Script_UMG::DynamicEntryBoxBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.DynamicEntryBoxBase");
    return result;
}
void _Script_UMG::DynamicEntryBoxBase::SetRadialSettings(_Script_UMG::RadialBoxSettings& InSettings) {
    return;
}
void _Script_UMG::DynamicEntryBoxBase::SetEntrySpacing(_Script_CoreUObject::Vector2D& InEntrySpacing) {
    return;
}
int32_t _Script_UMG::DynamicEntryBoxBase::GetNumEntries() {
    return;
}
void* _Script_UMG::DynamicEntryBoxBase::GetAllEntries() {
    return;
}
