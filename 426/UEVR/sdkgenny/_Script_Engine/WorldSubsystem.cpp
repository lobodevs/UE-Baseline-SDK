#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Subsystem.hpp"
#include "WorldSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::WorldSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.WorldSubsystem");
    return result;
}
