#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelNameAndTime.hpp"
void* _Script_Engine::LevelNameAndTime::get_LevelName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LevelNameAndTime::get_LevelChangeTimeInMS() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::LevelNameAndTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LevelNameAndTime");
    return result;
}
