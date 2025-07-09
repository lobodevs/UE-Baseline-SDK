#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CullingField.hpp"
#include "FieldNodeBase.hpp"
_Script_FieldSystemEngine::FieldNodeBase*& _Script_FieldSystemEngine::CullingField::get_Culling() {
    return *(_Script_FieldSystemEngine::FieldNodeBase**)((uintptr_t)this + 0xb0);
}
_Script_FieldSystemEngine::FieldNodeBase*& _Script_FieldSystemEngine::CullingField::get_Field() {
    return *(_Script_FieldSystemEngine::FieldNodeBase**)((uintptr_t)this + 0xb8);
}
void* _Script_FieldSystemEngine::CullingField::get_Operation() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::CullingField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.CullingField");
    return result;
}
_Script_FieldSystemEngine::CullingField* _Script_FieldSystemEngine::CullingField::SetCullingField(_Script_FieldSystemEngine::FieldNodeBase* Culling, _Script_FieldSystemEngine::FieldNodeBase* Field, void* Operation) {
    return;
}
