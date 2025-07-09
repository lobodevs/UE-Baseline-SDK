#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionArccosine.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionArccosine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionArccosine");
    return result;
}
void* _Script_Engine::MaterialExpressionArccosine::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
