#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DynamicSubsystem.hpp"
#include "Subsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::DynamicSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DynamicSubsystem");
    return result;
}
