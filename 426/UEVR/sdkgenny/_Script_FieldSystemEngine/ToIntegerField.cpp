#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeFloat.hpp"
#include "FieldNodeInt.hpp"
#include "ToIntegerField.hpp"
_Script_FieldSystemEngine::FieldNodeFloat*& _Script_FieldSystemEngine::ToIntegerField::get_FloatField() {
    return *(_Script_FieldSystemEngine::FieldNodeFloat**)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::ToIntegerField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.ToIntegerField");
    return result;
}
_Script_FieldSystemEngine::ToIntegerField* _Script_FieldSystemEngine::ToIntegerField::SetToIntegerField(_Script_FieldSystemEngine::FieldNodeFloat* FloatField) {
    return;
}
