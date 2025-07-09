#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionStep.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionStep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionStep");
    return result;
}
void* _Script_Engine::MaterialExpressionStep::get_Y() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionStep::get_X() {
    return (void*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::MaterialExpressionStep::get_ConstY() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::MaterialExpressionStep::get_ConstX() {
    return *(float*)((uintptr_t)this + 0x6c);
}
