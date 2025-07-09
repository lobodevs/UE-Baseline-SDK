#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeVector.hpp"
#include "RadialVector.hpp"
void* _Script_FieldSystemEngine::RadialVector::get_Position() {
    return (void*)((uintptr_t)this + 0xb4);
}
float& _Script_FieldSystemEngine::RadialVector::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::RadialVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.RadialVector");
    return result;
}
_Script_FieldSystemEngine::RadialVector* _Script_FieldSystemEngine::RadialVector::SetRadialVector(float Magnitude, _Script_CoreUObject::Vector Position) {
    return;
}
