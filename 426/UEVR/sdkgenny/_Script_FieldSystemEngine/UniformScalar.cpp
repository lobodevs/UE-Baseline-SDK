#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeFloat.hpp"
#include "UniformScalar.hpp"
float& _Script_FieldSystemEngine::UniformScalar::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::UniformScalar::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.UniformScalar");
    return result;
}
_Script_FieldSystemEngine::UniformScalar* _Script_FieldSystemEngine::UniformScalar::SetUniformScalar(float Magnitude) {
    return;
}
