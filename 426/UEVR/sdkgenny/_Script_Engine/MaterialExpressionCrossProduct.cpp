#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionCrossProduct.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionCrossProduct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionCrossProduct");
    return result;
}
void* _Script_Engine::MaterialExpressionCrossProduct::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionCrossProduct::get_B() {
    return (void*)((uintptr_t)this + 0x54);
}
