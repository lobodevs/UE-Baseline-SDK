#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSine.hpp"
float& _Script_Engine::MaterialExpressionSine::get_Period() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionSine::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSine");
    return result;
}
