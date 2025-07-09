#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSceneDepthWithoutWater.hpp"
void* _Script_Engine::MaterialExpressionSceneDepthWithoutWater::get_InputMode() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSceneDepthWithoutWater::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSceneDepthWithoutWater");
    return result;
}
void* _Script_Engine::MaterialExpressionSceneDepthWithoutWater::get_ConstInput() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionSceneDepthWithoutWater::get_Input() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::MaterialExpressionSceneDepthWithoutWater::get_FallbackDepth() {
    return *(float*)((uintptr_t)this + 0x60);
}
