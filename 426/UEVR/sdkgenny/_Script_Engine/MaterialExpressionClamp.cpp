#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionClamp.hpp"
float& _Script_Engine::MaterialExpressionClamp::get_MaxDefault() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_Engine::MaterialExpressionClamp::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionClamp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionClamp");
    return result;
}
void* _Script_Engine::MaterialExpressionClamp::get_Min() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionClamp::get_Max() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionClamp::get_ClampMode() {
    return (void*)((uintptr_t)this + 0x7c);
}
float& _Script_Engine::MaterialExpressionClamp::get_MinDefault() {
    return *(float*)((uintptr_t)this + 0x80);
}
