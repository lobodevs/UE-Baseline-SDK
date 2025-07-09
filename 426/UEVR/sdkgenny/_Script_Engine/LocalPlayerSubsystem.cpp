#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalPlayerSubsystem.hpp"
#include "Subsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::LocalPlayerSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LocalPlayerSubsystem");
    return result;
}
