#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "DelegateFunction.hpp"
#include "SparseDelegateFunction.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::SparseDelegateFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.SparseDelegateFunction");
    return result;
}
