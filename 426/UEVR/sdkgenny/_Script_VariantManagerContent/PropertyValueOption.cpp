#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyValue.hpp"
#include "PropertyValueOption.hpp"
_Script_CoreUObject::Class* _Script_VariantManagerContent::PropertyValueOption::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.PropertyValueOption");
    return result;
}
