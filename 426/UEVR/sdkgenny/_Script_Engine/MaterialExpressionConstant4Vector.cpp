#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionConstant4Vector.hpp"
void* _Script_Engine::MaterialExpressionConstant4Vector::get_Constant() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionConstant4Vector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionConstant4Vector");
    return result;
}
