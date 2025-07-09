#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "PropertyAccess.hpp"
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccess::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PropertyAccess.PropertyAccess");
    return result;
}
