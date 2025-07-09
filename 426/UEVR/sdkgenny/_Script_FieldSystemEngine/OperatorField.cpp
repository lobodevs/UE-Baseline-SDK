#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeBase.hpp"
#include "OperatorField.hpp"
float& _Script_FieldSystemEngine::OperatorField::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_FieldSystemEngine::FieldNodeBase*& _Script_FieldSystemEngine::OperatorField::get_RightField() {
    return *(_Script_FieldSystemEngine::FieldNodeBase**)((uintptr_t)this + 0xb8);
}
_Script_FieldSystemEngine::OperatorField* _Script_FieldSystemEngine::OperatorField::SetOperatorField(float Magnitude, _Script_FieldSystemEngine::FieldNodeBase* RightField, _Script_FieldSystemEngine::FieldNodeBase* LeftField, void* Operation) {
    return;
}
_Script_FieldSystemEngine::FieldNodeBase*& _Script_FieldSystemEngine::OperatorField::get_LeftField() {
    return *(_Script_FieldSystemEngine::FieldNodeBase**)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::OperatorField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.OperatorField");
    return result;
}
void* _Script_FieldSystemEngine::OperatorField::get_Operation() {
    return (void*)((uintptr_t)this + 0xc8);
}
