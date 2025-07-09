#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeVector.hpp"
#include "UniformVector.hpp"
float& _Script_FieldSystemEngine::UniformVector::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::UniformVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.UniformVector");
    return result;
}
void* _Script_FieldSystemEngine::UniformVector::get_Direction() {
    return (void*)((uintptr_t)this + 0xb4);
}
_Script_FieldSystemEngine::UniformVector* _Script_FieldSystemEngine::UniformVector::SetUniformVector(float Magnitude, _Script_CoreUObject::Vector Direction) {
    return;
}
