#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DynamicEntryBox.hpp"
#include "DynamicEntryBoxBase.hpp"
#include "UserWidget.hpp"
_Script_UMG::UserWidget* _Script_UMG::DynamicEntryBox::BP_CreateEntryOfClass(void* EntryClass) {
    return;
}
void* _Script_UMG::DynamicEntryBox::get_EntryWidgetClass() {
    return (void*)((uintptr_t)this + 0x1d8);
}
_Script_UMG::UserWidget* _Script_UMG::DynamicEntryBox::BP_CreateEntry() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::DynamicEntryBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.DynamicEntryBox");
    return result;
}
void _Script_UMG::DynamicEntryBox::Reset(bool bDeleteWidgets) {
    return;
}
void _Script_UMG::DynamicEntryBox::RemoveEntry(_Script_UMG::UserWidget* EntryWidget) {
    return;
}
