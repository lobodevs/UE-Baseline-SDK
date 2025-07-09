#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "MulticastDelegatePropertyWrapper.hpp"
#include "MulticastInlineDelegatePropertyWrapper.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::MulticastInlineDelegatePropertyWrapper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper");
    return result;
}
