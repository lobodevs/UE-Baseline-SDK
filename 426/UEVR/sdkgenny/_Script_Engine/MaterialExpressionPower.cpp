#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionPower.hpp"
void* _Script_Engine::MaterialExpressionPower::get_Base() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionPower::get_ConstExponent() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionPower::get_Exponent() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionPower::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionPower");
    return result;
}
