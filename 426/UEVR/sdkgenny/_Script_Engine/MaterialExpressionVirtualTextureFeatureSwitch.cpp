#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionVirtualTextureFeatureSwitch.hpp"
void* _Script_Engine::MaterialExpressionVirtualTextureFeatureSwitch::get_No() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionVirtualTextureFeatureSwitch::get_Yes() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionVirtualTextureFeatureSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionVirtualTextureFeatureSwitch");
    return result;
}
