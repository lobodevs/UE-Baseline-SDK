#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSkyAtmosphereLightDirection.hpp"
int32_t& _Script_Engine::MaterialExpressionSkyAtmosphereLightDirection::get_LightIndex() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSkyAtmosphereLightDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSkyAtmosphereLightDirection");
    return result;
}
