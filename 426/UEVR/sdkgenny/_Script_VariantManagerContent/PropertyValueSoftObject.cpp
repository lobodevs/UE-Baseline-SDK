#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyValue.hpp"
#include "PropertyValueSoftObject.hpp"
_Script_CoreUObject::Class* _Script_VariantManagerContent::PropertyValueSoftObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.PropertyValueSoftObject");
    return result;
}
