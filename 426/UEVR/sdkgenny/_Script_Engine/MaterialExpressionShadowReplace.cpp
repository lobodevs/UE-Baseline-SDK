#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionShadowReplace.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionShadowReplace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionShadowReplace");
    return result;
}
void* _Script_Engine::MaterialExpressionShadowReplace::get_Default() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionShadowReplace::get_Shadow() {
    return (void*)((uintptr_t)this + 0x54);
}
