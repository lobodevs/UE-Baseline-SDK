#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionStaticBoolParameter.hpp"
#include "MaterialExpressionStaticSwitchParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionStaticSwitchParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionStaticSwitchParameter");
    return result;
}
