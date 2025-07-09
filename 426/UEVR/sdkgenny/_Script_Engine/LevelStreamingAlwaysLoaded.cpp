#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelStreaming.hpp"
#include "LevelStreamingAlwaysLoaded.hpp"
_Script_CoreUObject::Class* _Script_Engine::LevelStreamingAlwaysLoaded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreamingAlwaysLoaded");
    return result;
}
