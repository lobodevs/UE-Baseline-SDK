#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionQualitySwitch.hpp"
void* _Script_Engine::MaterialExpressionQualitySwitch::get_Default() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionQualitySwitch::get_Inputs() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionQualitySwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionQualitySwitch");
    return result;
}
