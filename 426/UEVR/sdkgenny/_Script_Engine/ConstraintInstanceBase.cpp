#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstraintInstanceBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ConstraintInstanceBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConstraintInstanceBase");
    return result;
}
