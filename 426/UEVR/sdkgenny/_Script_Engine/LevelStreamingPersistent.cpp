#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelStreaming.hpp"
#include "LevelStreamingPersistent.hpp"
_Script_CoreUObject::Class* _Script_Engine::LevelStreamingPersistent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreamingPersistent");
    return result;
}
