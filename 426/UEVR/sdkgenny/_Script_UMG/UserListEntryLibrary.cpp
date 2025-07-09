#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "ListViewBase.hpp"
#include "UserListEntryLibrary.hpp"
_Script_CoreUObject::Class* _Script_UMG::UserListEntryLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UserListEntryLibrary");
    return result;
}
bool _Script_UMG::UserListEntryLibrary::IsListItemSelected(void* UserListEntry) {
    return;
}
bool _Script_UMG::UserListEntryLibrary::IsListItemExpanded(void* UserListEntry) {
    return;
}
_Script_UMG::ListViewBase* _Script_UMG::UserListEntryLibrary::GetOwningListView(void* UserListEntry) {
    return;
}
