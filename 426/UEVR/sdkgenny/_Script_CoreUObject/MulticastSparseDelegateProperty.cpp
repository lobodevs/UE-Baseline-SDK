#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "MulticastDelegateProperty.hpp"
#include "MulticastSparseDelegateProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::MulticastSparseDelegateProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.MulticastSparseDelegateProperty");
    return result;
}
