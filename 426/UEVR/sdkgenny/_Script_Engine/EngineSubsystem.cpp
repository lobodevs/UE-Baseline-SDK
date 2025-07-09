#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DynamicSubsystem.hpp"
#include "EngineSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::EngineSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EngineSubsystem");
    return result;
}
