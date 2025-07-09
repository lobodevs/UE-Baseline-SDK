#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyValue.hpp"
#include "PropertyValueColor.hpp"
_Script_CoreUObject::Class* _Script_VariantManagerContent::PropertyValueColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.PropertyValueColor");
    return result;
}
