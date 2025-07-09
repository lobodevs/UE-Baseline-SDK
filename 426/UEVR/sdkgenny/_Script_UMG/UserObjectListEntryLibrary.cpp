#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "UserObjectListEntryLibrary.hpp"
_Script_CoreUObject::Class* _Script_UMG::UserObjectListEntryLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UserObjectListEntryLibrary");
    return result;
}
_Script_CoreUObject::Object* _Script_UMG::UserObjectListEntryLibrary::GetListItemObject(void* UserObjectListEntry) {
    return;
}
