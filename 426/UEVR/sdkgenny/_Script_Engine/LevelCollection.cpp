#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DemoNetDriver.hpp"
#include "GameStateBase.hpp"
#include "Level.hpp"
#include "LevelCollection.hpp"
#include "NetDriver.hpp"
_Script_Engine::GameStateBase*& _Script_Engine::LevelCollection::get_GameState() {
    return *(_Script_Engine::GameStateBase**)((uintptr_t)this + 0x8);
}
_Script_Engine::NetDriver*& _Script_Engine::LevelCollection::get_NetDriver() {
    return *(_Script_Engine::NetDriver**)((uintptr_t)this + 0x10);
}
_Script_Engine::DemoNetDriver*& _Script_Engine::LevelCollection::get_DemoNetDriver() {
    return *(_Script_Engine::DemoNetDriver**)((uintptr_t)this + 0x18);
}
_Script_Engine::Level*& _Script_Engine::LevelCollection::get_PersistentLevel() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x20);
}
void* _Script_Engine::LevelCollection::get_Levels() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::LevelCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LevelCollection");
    return result;
}
