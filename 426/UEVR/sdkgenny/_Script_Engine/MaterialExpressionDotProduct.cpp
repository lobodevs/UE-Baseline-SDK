#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDotProduct.hpp"
void* _Script_Engine::MaterialExpressionDotProduct::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionDotProduct::get_B() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDotProduct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDotProduct");
    return result;
}
