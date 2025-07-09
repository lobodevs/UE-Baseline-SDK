#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "UserListEntry.hpp"
#include "UserObjectListEntry.hpp"
_Script_CoreUObject::Class* _Script_UMG::UserObjectListEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UserObjectListEntry");
    return result;
}
void _Script_UMG::UserObjectListEntry::OnListItemObjectSet(_Script_CoreUObject::Object* ListItemObject) {
    return;
}
