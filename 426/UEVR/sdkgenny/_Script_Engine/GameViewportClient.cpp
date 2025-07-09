#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Console.hpp"
#include "GameInstance.hpp"
#include "GameViewportClient.hpp"
#include "ScriptViewportClient.hpp"
#include "World.hpp"
_Script_Engine::GameInstance*& _Script_Engine::GameViewportClient::get_GameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0x80);
}
_Script_Engine::Console*& _Script_Engine::GameViewportClient::get_ViewportConsole() {
    return *(_Script_Engine::Console**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::GameViewportClient::get_DebugProperties() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Engine::GameViewportClient::get_MaxSplitscreenPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void _Script_Engine::GameViewportClient::ShowTitleSafeArea() {
    return;
}
_Script_Engine::World*& _Script_Engine::GameViewportClient::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::GameViewportClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameViewportClient");
    return result;
}
void _Script_Engine::GameViewportClient::SSSwapControllers() {
    return;
}
void _Script_Engine::GameViewportClient::SetConsoleTarget(int32_t PlayerIndex) {
    return;
}
