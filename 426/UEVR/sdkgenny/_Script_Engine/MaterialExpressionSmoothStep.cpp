#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSmoothStep.hpp"
void* _Script_Engine::MaterialExpressionSmoothStep::get_Min() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSmoothStep::get_Max() {
    return (void*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::MaterialExpressionSmoothStep::get_ConstMin() {
    return *(float*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::MaterialExpressionSmoothStep::get_Value() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::MaterialExpressionSmoothStep::get_ConstMax() {
    return *(float*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSmoothStep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSmoothStep");
    return result;
}
float& _Script_Engine::MaterialExpressionSmoothStep::get_ConstValue() {
    return *(float*)((uintptr_t)this + 0x84);
}
