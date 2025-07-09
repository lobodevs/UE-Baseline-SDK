#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeVector.hpp"
#include "RandomVector.hpp"
float& _Script_FieldSystemEngine::RandomVector::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::RandomVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.RandomVector");
    return result;
}
_Script_FieldSystemEngine::RandomVector* _Script_FieldSystemEngine::RandomVector::SetRandomVector(float Magnitude) {
    return;
}
