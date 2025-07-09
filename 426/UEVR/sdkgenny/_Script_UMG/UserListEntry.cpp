#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "UserListEntry.hpp"
_Script_CoreUObject::Class* _Script_UMG::UserListEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UserListEntry");
    return result;
}
void _Script_UMG::UserListEntry::BP_OnItemSelectionChanged(bool bIsSelected) {
    return;
}
void _Script_UMG::UserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded) {
    return;
}
void _Script_UMG::UserListEntry::BP_OnEntryReleased() {
    return;
}
