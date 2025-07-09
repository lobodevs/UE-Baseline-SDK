#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeInt.hpp"
#include "UniformInteger.hpp"
int32_t& _Script_FieldSystemEngine::UniformInteger::get_Magnitude() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
_Script_FieldSystemEngine::UniformInteger* _Script_FieldSystemEngine::UniformInteger::SetUniformInteger(int32_t Magnitude) {
    return;
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::UniformInteger::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.UniformInteger");
    return result;
}
