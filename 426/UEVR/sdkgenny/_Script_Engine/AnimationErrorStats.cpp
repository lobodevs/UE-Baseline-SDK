#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationErrorStats.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimationErrorStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationErrorStats");
    return result;
}
