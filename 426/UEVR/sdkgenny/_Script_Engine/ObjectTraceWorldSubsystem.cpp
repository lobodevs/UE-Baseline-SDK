#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ObjectTraceWorldSubsystem.hpp"
#include "WorldSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::ObjectTraceWorldSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ObjectTraceWorldSubsystem");
    return result;
}
