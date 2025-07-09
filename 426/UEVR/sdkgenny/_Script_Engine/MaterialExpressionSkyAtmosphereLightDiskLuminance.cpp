#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSkyAtmosphereLightDiskLuminance.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSkyAtmosphereLightDiskLuminance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance");
    return result;
}
int32_t& _Script_Engine::MaterialExpressionSkyAtmosphereLightDiskLuminance::get_LightIndex() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
