#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDivide.hpp"
float& _Script_Engine::MaterialExpressionDivide::get_ConstB() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::MaterialExpressionDivide::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionDivide::get_B() {
    return (void*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::MaterialExpressionDivide::get_ConstA() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDivide::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDivide");
    return result;
}
