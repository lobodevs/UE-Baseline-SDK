#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeFloat.hpp"
#include "FieldNodeInt.hpp"
#include "ToFloatField.hpp"
_Script_CoreUObject::Class* _Script_FieldSystemEngine::ToFloatField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.ToFloatField");
    return result;
}
_Script_FieldSystemEngine::FieldNodeInt*& _Script_FieldSystemEngine::ToFloatField::get_IntField() {
    return *(_Script_FieldSystemEngine::FieldNodeInt**)((uintptr_t)this + 0xb0);
}
_Script_FieldSystemEngine::ToFloatField* _Script_FieldSystemEngine::ToFloatField::SetToFloatField(_Script_FieldSystemEngine::FieldNodeInt* IntegerField) {
    return;
}
