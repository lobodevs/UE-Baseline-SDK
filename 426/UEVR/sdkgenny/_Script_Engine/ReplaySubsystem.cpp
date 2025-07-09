#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameInstanceSubsystem.hpp"
#include "ReplaySubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::ReplaySubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReplaySubsystem");
    return result;
}
