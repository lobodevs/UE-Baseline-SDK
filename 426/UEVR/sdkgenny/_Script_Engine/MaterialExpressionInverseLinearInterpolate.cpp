#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionInverseLinearInterpolate.hpp"
void _Script_Engine::MaterialExpressionInverseLinearInterpolate::set_bClampResult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionInverseLinearInterpolate::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionInverseLinearInterpolate::get_ConstValue() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_Engine::MaterialExpressionInverseLinearInterpolate::get_B() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionInverseLinearInterpolate::get_Value() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::MaterialExpressionInverseLinearInterpolate::get_ConstA() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_Engine::MaterialExpressionInverseLinearInterpolate::get_ConstB() {
    return *(float*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::MaterialExpressionInverseLinearInterpolate::get_bClampResult() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionInverseLinearInterpolate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionInverseLinearInterpolate");
    return result;
}
